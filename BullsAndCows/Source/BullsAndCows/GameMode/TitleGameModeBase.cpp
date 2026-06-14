#include "GameMode/TitleGameModeBase.h"
#include "PlayerController/TitlePlayerController.h"
#include "GameState/TitleGameState.h"
#include "TimerManager.h"

void ATitleGameModeBase::PostLogin(APlayerController* NewPlayer)
{
    Super::PostLogin(NewPlayer);
    // 입장하자마자 CurrentPlayerCount를 증가시키지 않고 대기합니다.
}

void ATitleGameModeBase::Logout(AController* Exiting)
{
    Super::Logout(Exiting);

    ATitleGameState* GS = GetGameState<ATitleGameState>();
    if (!GS) return;

    // 대기열에 있던 인원이 나간 경우를 대비한 차감 처리
    GS->CurrentPlayerCount = FMath::Max(0, GS->CurrentPlayerCount - 1);
}

void ATitleGameModeBase::HandlePlayerJoinQueue(ATitlePlayerController* PC)
{
    ATitleGameState* GS = GetGameState<ATitleGameState>();
    if (!GS) return;

    GS->CurrentPlayerCount++;

    // 해당 플레이어에게 큐 대기 UI 표시 지시
    if (PC)
    {
        PC->Client_ShowQueue();
    }

    // 인원 충족 시 매치 시작
    if (GS->CurrentPlayerCount >= GS->RequiredPlayerCount)
    {
        StartMatch();
    }
}

void ATitleGameModeBase::StartMatch()
{
    // 모든 플레이어에게 매치 성사 UI 띄우기
    for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
    {
        ATitlePlayerController* PC = Cast<ATitlePlayerController>(*It);
        if (PC)
        {
            PC->Client_ShowMatchFound();
        }
    }

    // 5초 후 게임 레벨로 자동 전환
    GetWorldTimerManager().SetTimer(
        MatchStartTimerHandle,
        this,
        &ATitleGameModeBase::ExecuteServerTravel,
        5.0f,
        false
    );
}

void ATitleGameModeBase::ExecuteServerTravel()
{
    if (UWorld* World = GetWorld())
    {
        World->ServerTravel(GameplayLevelPath, true);
    }
}

void ATitleGameModeBase::HandlePlayerCancelQueue(ATitlePlayerController* PC)
{
    ATitleGameState* GS = GetGameState<ATitleGameState>();
    if (!GS) return;

    GS->CurrentPlayerCount = FMath::Max(0, GS->CurrentPlayerCount - 1);

    if (PC)
    {
        PC->Client_CancelQueueSuccess();
    }
}