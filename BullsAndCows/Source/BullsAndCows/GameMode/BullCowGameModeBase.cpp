// BullCowGameModeBase.cpp

#include "GameMode/BullCowGameModeBase.h"

#include "PlayerController/BullCowPlayerController.h"
#include "GameState/BullCowGameStateBase.h"
#include "PlayerState/BullCowPlayerState.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"
#include "BullsAndCows.h"

ABullCowGameModeBase::ABullCowGameModeBase()
{
	bUseSeamlessTravel = true;
	WaitingTime = 5;
	InGameTime = 30;
}

void ABullCowGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(MainTimerHandle, this, &ThisClass::OnMainTimerElapsed, 1.f, true);

	RemainWaitingTime = WaitingTime;
	RemainWaitingTimeForEnding = EndingTime;

	SecretNumberString = GenerateSecretNumber();	
}

void ABullCowGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	// 1. 접속 확인 로그
	BC_LOG_NET(LogDXNet, Warning, TEXT("=== Player Successfully Joined The Room! ==="));
	BC_LOG_NET(LogDXNet, Warning, TEXT("Joined Player Name: %s"), *NewPlayer->GetName());

	// 2. 다른 조건문 다 무시하고 무조건 명단에 집어넣기!
	ABullCowPlayerController* NewPlayerController = Cast<ABullCowPlayerController>(NewPlayer);
	if (IsValid(NewPlayerController))
	{
		AllPlayerControllers.Add(NewPlayerController);

		// 3. 인원수 확인 로그 (이게 반드시 떠야 합니다!)
		BC_LOG_NET(LogDXNet, Warning, TEXT("Current Roster Count (Players in same room): %d"), AllPlayerControllers.Num());
	}
}

void ABullCowGameModeBase::Logout(AController* Exiting)
{
	Super::Logout(Exiting);

	ABullCowPlayerController* ExitingPlayerController = Cast<ABullCowPlayerController>(Exiting);
	if (IsValid(ExitingPlayerController))
	{
		AllPlayerControllers.Remove(ExitingPlayerController);
	}
}

// 플레이어가 정답을 맞췄을 때 검증 및 등수 처리 논리
void ABullCowGameModeBase::OnPlayerCorrectAnswer(ABullCowPlayerController* InController)
{
	ABullCowGameStateBase* BCGameState = GetGameState<ABullCowGameStateBase>();
	if (!IsValid(InController) || !IsValid(BCGameState) || BCGameState->MatchState != EMatchState::Playing)
	{
		return;
	}

	ABullCowPlayerState* PS = InController->GetPlayerState<ABullCowPlayerState>();
	if (!IsValid(PS)) return;

	PS->PlayerScore++;

	if (PS->PlayerScore >= TargetScore)
	{
		AllPlayerControllers.Sort([](const TObjectPtr<ABullCowPlayerController>& A, const TObjectPtr<ABullCowPlayerController>& B)
			{
				ABullCowPlayerState* PSA = A->GetPlayerState<ABullCowPlayerState>();
				ABullCowPlayerState* PSB = B->GetPlayerState<ABullCowPlayerState>();

				int32 ScoreA = PSA ? PSA->PlayerScore : 0;
				int32 ScoreB = PSB ? PSB->PlayerScore : 0;

				return ScoreA > ScoreB;
			});

		for (int32 i = 0; i < AllPlayerControllers.Num(); ++i)
		{
			if (IsValid(AllPlayerControllers[i]))
			{
				int32 Rank = i + 1;
				AllPlayerControllers[i]->ClientRPCShowEndGameUserWidget(Rank);
			}
		}

		BCGameState->MatchState = EMatchState::Ending;
		RemainWaitingTimeForEnding = EndingTime;
	}
	else
	{
		ResetRound();
	}
}

FString ABullCowGameModeBase::GetCleanPlayerName(ABullCowPlayerController* InPC)
{
	if (!IsValid(InPC)) return TEXT("알 수 없는 유저");

	int32 Index = AllPlayerControllers.Find(InPC);
	if (Index == INDEX_NONE) return TEXT("관전 유저");

	return FString::Printf(TEXT("유저 %d"), Index + 1);
}

void ABullCowGameModeBase::OnMainTimerElapsed()
{
	ABullCowGameStateBase* BCGameState = GetGameState<ABullCowGameStateBase>();
	if (!IsValid(BCGameState)) return;

	switch (BCGameState->MatchState)
	{
	case EMatchState::Waiting:
	{
		FString NotificationString = TEXT("");

		if (AllPlayerControllers.Num() < MinimumPlayerCountForPlaying)
		{
			NotificationString = TEXT("다른 플레이어의 접속을 기다리는 중...");
			RemainWaitingTime = WaitingTime; // 대기 시간 유지
		}
		else
		{
			NotificationString = FString::Printf(TEXT("게임 시작까지 %d초 남았습니다."), RemainWaitingTime);
			--RemainWaitingTime; // 대기 시간 차감
		}

		if (RemainWaitingTime <= 0)
		{
			BCGameState->MatchState = EMatchState::Playing;
			RemainPlayingTime = InGameTime;

			for (auto Player : AllPlayerControllers)
			{
				if (IsValid(Player)) Player->Client_ReceiveChatMessage(TEXT("[System]: 게임이 시작되었습니다! 3자리 숫자를 입력하세요."));
			}
		}

		NotifyToAllPlayer(NotificationString);
		break;
	}
	case EMatchState::Playing:
	{
		FString ScoreBoardString = FString::Printf(TEXT("남은 시간: %d초 | Scores: "), RemainPlayingTime);
		for (auto Player : AllPlayerControllers)
		{
			if (IsValid(Player))
			{
				ABullCowPlayerState* PS = Player->GetPlayerState<ABullCowPlayerState>();
				int32 CurrentScore = PS ? PS->PlayerScore : 0;
				FString CleanName = GetCleanPlayerName(Player);
				ScoreBoardString += FString::Printf(TEXT("[%s: %d/%d] "), *CleanName, CurrentScore, TargetScore);
			}
		}

		--RemainPlayingTime; // 플레이 시간 차감

		if (RemainPlayingTime <= 0)
		{
			EndGameByTimeoutResult();
			return;
		}

		NotifyToAllPlayer(ScoreBoardString);
		break;
	}
	case EMatchState::Ending:
	{
		FString NotificationString = FString::Printf(TEXT("%d초 후에 타이틀 화면으로 돌아갑니다."), RemainWaitingTimeForEnding);
		NotifyToAllPlayer(NotificationString);

		--RemainWaitingTimeForEnding;

		if (RemainWaitingTimeForEnding <= 0)
		{
			MainTimerHandle.Invalidate();
			GetWorld()->ServerTravel(TEXT("Title?listen"));
			return;
		}
		break;
	}
	default:
		break;
	}
}

void ABullCowGameModeBase::NotifyToAllPlayer(const FString& NotificationString)
{
	for (auto Player : AllPlayerControllers)
	{

		if (IsValid(Player))
		{
			// RPC를 보내는 직전 로그
			UE_LOG(LogTemp, Warning, TEXT("[Server] RPC send: %s"), *Player->GetName());
			Player->Client_UpdateNotification(NotificationString);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("[Server] RPC send fail!"));
		}
	}
}

//제한 시간 초과
void ABullCowGameModeBase::EndGameByTimeoutResult()
{
	NotifyToAllPlayer(TEXT("제한 시간이 초과되어 매치가 종료됩니다. 최종 점수를 계산합니다."));

	ABullCowGameStateBase* BCGameState = GetGameState<ABullCowGameStateBase>();
	if (!IsValid(BCGameState)) return;

	AllPlayerControllers.Sort([](const TObjectPtr<ABullCowPlayerController>& A, const TObjectPtr<ABullCowPlayerController>& B)
		{
			ABullCowPlayerState* PSA = A->GetPlayerState<ABullCowPlayerState>();
			ABullCowPlayerState* PSB = B->GetPlayerState<ABullCowPlayerState>();
			int32 ScoreA = PSA ? PSA->PlayerScore : 0;
			int32 ScoreB = PSB ? PSB->PlayerScore : 0;
			return ScoreA > ScoreB;
		});

	bool bIsRealDraw = false;
	if (AllPlayerControllers.Num() >= 2)
	{
		ABullCowPlayerState* PS1 = AllPlayerControllers[0]->GetPlayerState<ABullCowPlayerState>();
		ABullCowPlayerState* PS2 = AllPlayerControllers[1]->GetPlayerState<ABullCowPlayerState>();
		if (PS1 && PS2 && PS1->PlayerScore == PS2->PlayerScore)
		{
			bIsRealDraw = true;
		}
	}

	BCGameState->MatchState = EMatchState::Ending;
	RemainWaitingTimeForEnding = EndingTime;

	if (bIsRealDraw)
	{
		NotifyToAllPlayer(TEXT("최종 점수가 동일하므로 이번 매치는 무승부입니다."));
		for (auto Controller : AllPlayerControllers)
		{
			if (IsValid(Controller)) Controller->ClientRPCShowEndGameUserWidget(0);
		}
	}
	else
	{
		NotifyToAllPlayer(TEXT("매치 종료! 승자가 결정되었습니다."));
		for (int32 i = 0; i < AllPlayerControllers.Num(); ++i)
		{
			if (IsValid(AllPlayerControllers[i]))
			{
				int32 Rank = i + 1;
				AllPlayerControllers[i]->ClientRPCShowEndGameUserWidget(Rank);
			}
		}
	}
}

FString ABullCowGameModeBase::GenerateSecretNumber()
{
	TArray<int32> Numbers = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	FString ResultString = TEXT("");

	for (int32 i = 0; i < 3; ++i)
	{
		int32 RandomIndex = FMath::RandRange(0, Numbers.Num() - 1);
		ResultString += FString::FromInt(Numbers[RandomIndex]);
		// 중복 방지를 위해 뽑은 숫자 제거
		Numbers.RemoveAt(RandomIndex);
	}
	return ResultString;
}

// 조건 검사
bool ABullCowGameModeBase::IsValidInput(const FString& Input)
{
	if (Input.Len() != 3) return false;

	TSet<TCHAR> UniqueChars;
	for (TCHAR Char : Input)
	{
		if (Char < '1' || Char > '9') return false;
		UniqueChars.Add(Char);
	}

	return UniqueChars.Num() == 3;
}

FString ABullCowGameModeBase::JudgeResult(const FString& Guess)
{
	int32 Strikes = 0;
	int32 Balls = 0;

	for (int32 i = 0; i < 3; ++i)
	{
		if (Guess[i] == SecretNumberString[i])
		{
			Strikes++;
		}
		else
		{
			int32 FoundIndex;
			if (SecretNumberString.FindChar(Guess[i], FoundIndex))
			{
				Balls++;
			}
		}
	}

	if (Strikes == 0 && Balls == 0) return TEXT("OUT");

	FString Result = TEXT("");
	if (Strikes > 0) Result += FString::Printf(TEXT("%dS"), Strikes);
	if (Balls > 0) Result += FString::Printf(TEXT("%dB"), Balls);
	
	return Result;
}

void ABullCowGameModeBase::ProcessPlayerChat(ABullCowPlayerController* InChattingPlayerController, const FString& InChatMessageString)
{
	ABullCowGameStateBase* BCGameState = GetGameState<ABullCowGameStateBase>();
	ABullCowPlayerState* PS = InChattingPlayerController->GetPlayerState<ABullCowPlayerState>();

	if (InChatMessageString.IsNumeric())
	{
		// 1. 기본 상태 및 입력값 검증
		if (!IsValid(BCGameState) || BCGameState->MatchState != EMatchState::Playing)
		{
			InChattingPlayerController->Client_ReceiveChatMessage(TEXT("[System]: 아직 게임이 시작되지 않았습니다. (대기 중)"));
			return;
		}

		if (!IsValidInput(InChatMessageString))
		{
			InChattingPlayerController->Client_ReceiveChatMessage(TEXT("[System]: 다시 입력하세요! (1~9 사이의 중복 없는 3자리 숫자)"));
			return;
		}

		if (!IsValid(PS) || PS->CurrentGuessCount >= PS->MaxTry)
		{
			InChattingPlayerController->Client_ReceiveChatMessage(TEXT("[System]: 남은 기회가 없습니다. 다른 플레이어의 결과를 기다리세요."));
			return;
		}

		// 🚨 2. [핵심 방어선] 턴 잠금 검사 (무조건 가장 먼저 실행되어야 함)
		if (PS->bHasActedThisTurn)
		{
			InChattingPlayerController->Client_ReceiveChatMessage(TEXT("[System]: 상대방이 입력할 때까지 기다려주세요."));
			return; // 이 return이 작동하면 아래 코드는 '절대' 실행될 수 없습니다.
		}

		// 3. 정상적인 턴 소진 처리 및 잠금
		PS->CurrentGuessCount++;
		PS->bHasActedThisTurn = true; // 나를 잠금 상태로 만듦

		// 4. 결과 판정 및 브로드캐스트
		FString JudgeString = JudgeResult(InChatMessageString);
		FString UniqueName = GetCleanPlayerName(InChattingPlayerController);
		FString BroadcastMsg = FString::Printf(TEXT("[%s]: %s -> %s"), *UniqueName, *InChatMessageString, *JudgeString);

		for (auto Controller : AllPlayerControllers)
		{
			if (IsValid(Controller)) Controller->Client_ReceiveChatMessage(BroadcastMsg);
		}

		if (JudgeString == TEXT("3S"))
		{
			EndGameWithWinner(InChattingPlayerController);
			return;
		}

		// 🚨 5. [동기화 핵심] 모두가 쳤는지 검사 후 일괄 잠금 해제
		bool bAllActedThisTurn = true;
		for (auto Controller : AllPlayerControllers)
		{
			if (ABullCowPlayerState* OtherPS = Controller->GetPlayerState<ABullCowPlayerState>())
			{
				if (!OtherPS->bHasActedThisTurn) // 한 명이라도 안 쳤다면
				{
					bAllActedThisTurn = false;
					break;
				}
			}
		}

		// 모두가 턴을 마쳤을 때만 동시에 락을 해제합니다.
		if (bAllActedThisTurn)
		{
			for (auto Controller : AllPlayerControllers)
			{
				if (ABullCowPlayerState* OtherPS = Controller->GetPlayerState<ABullCowPlayerState>())
				{
					OtherPS->bHasActedThisTurn = false;
				}
			}
		}

		// 6. 라운드 종료 검사 (모든 턴 로직이 끝난 후 마지막에 검사해야 안전합니다)
		bool bIsRoundOver = true;
		for (auto Controller : AllPlayerControllers)
		{
			if (ABullCowPlayerState* OtherPS = Controller->GetPlayerState<ABullCowPlayerState>())
			{
				if (OtherPS->CurrentGuessCount < OtherPS->MaxTry)
				{
					bIsRoundOver = false;
					break;
				}
			}
		}

		if (bIsRoundOver)
		{
			for (auto Controller : AllPlayerControllers)
			{
				if (IsValid(Controller))
				{
					Controller->Client_ReceiveChatMessage(TEXT("[System]: 모든 플레이어가 기회를 소진하여 이번 라운드가 무승부로 종료되었습니다."));
				}
			}
			ResetRound();
		}
	}
}

void ABullCowGameModeBase::ResetRound()
{
	SecretNumberString = GenerateSecretNumber();

	RemainPlayingTime = InGameTime;

	for (auto Controller : AllPlayerControllers)
	{
		if (ABullCowPlayerState* PS = Controller->GetPlayerState<ABullCowPlayerState>())
		{
			PS->CurrentGuessCount = 0;
			PS->bHasActedThisTurn = false;
		}
	}

	for (auto Player : AllPlayerControllers)
	{
		if (IsValid(Player))
		{
			Player->Client_ReceiveChatMessage(TEXT("[System]: 새로운 라운드가 시작되었습니다! 새로운 3자리 숫자를 맞혀보세요."));
		}
	}
}

void ABullCowGameModeBase::EndGameWithWinner(ABullCowPlayerController* WinnerPC)
{
	FString CleanName = GetCleanPlayerName(WinnerPC);
	FString WinMessage = FString::Printf(TEXT("[%s] 님이 정답을 맞춰 1점을 획득했습니다!"), *CleanName);

	for (auto Controller : AllPlayerControllers)
	{
		if (IsValid(Controller)) Controller->Client_ReceiveChatMessage(WinMessage);
	}

	OnPlayerCorrectAnswer(WinnerPC);
}