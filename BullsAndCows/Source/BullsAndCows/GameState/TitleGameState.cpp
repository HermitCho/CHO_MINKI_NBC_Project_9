// Fill out your copyright notice in the Description page of Project Settings.

#include "GameState/TitleGameState.h"

#include "Net/UnrealNetwork.h"
#include "PlayerController/TitlePlayerController.h"

void ATitleGameState::OnRep_PlayerCount()
{
    // GameState의 OnRep은 모든 클라이언트에서 호출됨
    // 로컬 PlayerController를 찾아서 UI 업데이트 요청
    APlayerController* PC = GetWorld()->GetFirstPlayerController();
    if (ATitlePlayerController* TPC = Cast<ATitlePlayerController>(PC))
    {
        TPC->UpdateQueueUI();
    }
}

void ATitleGameState::GetLifetimeReplicatedProps(
    TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(ATitleGameState, CurrentPlayerCount);
}