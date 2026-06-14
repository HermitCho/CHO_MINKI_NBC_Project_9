#include "PlayerController/TitlePlayerController.h"
#include "Blueprint/UserWidget.h"
#include "Net/UnrealNetwork.h"
#include "GameState/TitleGameState.h"
#include "GameMode/TitleGameModeBase.h"
#include "UI/MatchQueueWidget.h"
#include "UI/MatchFoundWidget.h"
#include "UI/TitleUserWidget.h"

void ATitlePlayerController::BeginPlay()
{
    Super::BeginPlay();

    if (!IsLocalController()) return;

    SetInputMode(FInputModeUIOnly());
    bShowMouseCursor = true;

    if (IsValid(TitleWidgetClass))
    {
        TitleWidget = CreateWidget<UTitleUserWidget>(this, TitleWidgetClass);
        if (TitleWidget)
        {
            TitleWidget->AddToViewport(5);
            TitleWidget->SetVisibility(ESlateVisibility::Visible);
        }
    }
}

void ATitlePlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(ThisClass, NotificationText);
}

void ATitlePlayerController::Server_JoinQueue_Implementation()
{
    if (HasAuthority())
    {
        ATitleGameModeBase* GM = GetWorld()->GetAuthGameMode<ATitleGameModeBase>();
        if (GM)
        {
            GM->HandlePlayerJoinQueue(this);
        }
    }
}

void ATitlePlayerController::Client_ShowMatchFound_Implementation()
{
    if (IsValid(QueueWidget))
    {
        QueueWidget->StartSlideDown();
    }

    if (IsValid(MatchFoundWidgetClass))
    {
        MatchFoundWidget = CreateWidget<UMatchFoundWidget>(this, MatchFoundWidgetClass);
        if (IsValid(MatchFoundWidget))
        {
            MatchFoundWidget->AddToViewport(20);
        }
    }
}

void ATitlePlayerController::Client_ShowQueue_Implementation()
{
    if (!IsValid(QueueWidget))
    {
        if (IsValid(QueueWidgetClass))
        {
            QueueWidget = CreateWidget<UMatchQueueWidget>(this, QueueWidgetClass);
            if (IsValid(QueueWidget))
            {
                QueueWidget->AddToViewport(10);
            }
        }
    }

    if (IsValid(QueueWidget))
    {
        QueueWidget->StartSlideUp();
        UpdateQueueUI();
    }
}

void ATitlePlayerController::UpdateQueueUI()
{
    if (!IsValid(QueueWidget)) return;

    ATitleGameState* GS = GetWorld()->GetGameState<ATitleGameState>();
    if (!GS) return;

    QueueWidget->UpdatePlayerCount(GS->CurrentPlayerCount, GS->RequiredPlayerCount);
}

void ATitlePlayerController::Server_CancelQueue_Implementation()
{
    if (HasAuthority())
    {
        ATitleGameModeBase* GM = GetWorld()->GetAuthGameMode<ATitleGameModeBase>();
        if (GM)
        {
            GM->HandlePlayerCancelQueue(this);
        }
    }
}

void ATitlePlayerController::Client_CancelQueueSuccess_Implementation()
{
    if (IsValid(QueueWidget))
    {
        QueueWidget->StartSlideDown();
    }

    OnQueueCancelled();
}

void ATitlePlayerController::RestorePlayButtonState()
{
    if (IsValid(TitleWidget))
    {
        TitleWidget->ResetPlayButton();
    }
}