// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "TitleGameState.generated.h"

UCLASS()
class BULLSANDCOWS_API ATitleGameState : public AGameStateBase
{
    GENERATED_BODY()

public:
    UPROPERTY(ReplicatedUsing = OnRep_PlayerCount)
    int32 CurrentPlayerCount = 0;

    UPROPERTY(EditDefaultsOnly)
    int32 RequiredPlayerCount = 2;

    UFUNCTION()
    void OnRep_PlayerCount();

    virtual void GetLifetimeReplicatedProps(
        TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};