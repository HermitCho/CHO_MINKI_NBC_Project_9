// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BullCowGameModeBase.generated.h"

class ABullCowPlayerController;

UCLASS()
class BULLSANDCOWS_API ABullCowGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	ABullCowGameModeBase();

	virtual void PostLogin(APlayerController* NewPlayer) override;
	virtual void Logout(AController* Exiting) override;
	virtual void BeginPlay() override;

	// 플레이어가 정답을 맞췄을 때 호출할 함수
	void OnPlayerCorrectAnswer(ABullCowPlayerController* InController);
	FString GetCleanPlayerName(class ABullCowPlayerController* InPC);

	FString GenerateSecretNumber();
	bool IsGuessNumberString(const FString& InNumberString);
	FString JudgeResult(const FString& Guess); // 매개변수 1개 정상 확인!

	void ProcessPlayerChat(class ABullCowPlayerController* InChattingPlayerController, const FString& InChatMessageString);

	void ResetRound();

	bool IsValidInput(const FString& Input);

	void EndGameWithWinner(class ABullCowPlayerController* WinnerPC);

protected:
	UFUNCTION()
	void OnMainTimerElapsed();

	void NotifyToAllPlayer(const FString& NotificationString);

	void EndGameByTimeoutResult();

public:
	FTimerHandle MainTimerHandle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 WaitingTime;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 InGameTime;

	UPROPERTY(EditDefaultsOnly, Category = "Game Rules")
	int32 RemainWaitingTime;

	UPROPERTY(EditDefaultsOnly, Category = "Game Rules")
	int32 RemainPlayingTime;

	int32 MinimumPlayerCountForPlaying = 2;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 EndingTime = 15;
	int32 RemainWaitingTimeForEnding = 15;

protected:
	FString SecretNumberString;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Rules")
	int32 TargetScore = 3;

	UPROPERTY()
	TArray<TObjectPtr<class ABullCowPlayerController>> AllPlayerControllers;
};