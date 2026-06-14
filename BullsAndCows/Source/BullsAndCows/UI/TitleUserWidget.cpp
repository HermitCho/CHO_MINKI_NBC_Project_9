// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/TitleUserWidget.h"
#include "Components/Button.h"
#include "PlayerController/TitlePlayerController.h"
#include "Kismet/KismetSystemLibrary.h"

void UTitleUserWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (PlayButton)
    {
        PlayButton->OnClicked.AddDynamic(this, &UTitleUserWidget::OnPlayButtonClicked);
    }

    ResetPlayButton();
}

void UTitleUserWidget::OnPlayButtonClicked()
{
    ATitlePlayerController* TitlePC = Cast<ATitlePlayerController>(GetOwningPlayer());

    if (IsValid(TitlePC))
    {
        TitlePC->Server_JoinQueue();

        if (PlayButton)
        {
            PlayButton->SetIsEnabled(false);
        }
    }
}

void UTitleUserWidget::OnExitButtonClicked()
{
    ATitlePlayerController* TitlePC = Cast<ATitlePlayerController>(GetOwningPlayer());

    UKismetSystemLibrary::QuitGame(GetWorld(), GetOwningPlayer(), EQuitPreference::Quit, false);
}


void UTitleUserWidget::ResetPlayButton()
{
    if (PlayButton)
    {
        PlayButton->SetIsEnabled(true);
    }
}