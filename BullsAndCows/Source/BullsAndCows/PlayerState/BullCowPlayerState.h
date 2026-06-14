#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "BullCowPlayerState.generated.h"

UCLASS()
class BULLSANDCOWS_API ABullCowPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	ABullCowPlayerState();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintPure, Category = "UI")
	FString GetTryCountString() const
	{
		return FString::Printf(TEXT("[%d / %d]"), CurrentGuessCount, MaxTry);
	}

public:
	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "Game Data")
	int32 PlayerScore;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "Game Data")
	int32 MaxTry;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "Game Data")
	int32 CurrentGuessCount;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadWrite, Category = "Game Data")
	bool bHasActedThisTurn;

};