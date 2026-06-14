// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MatchQueueWidget.generated.h"

class UTextBlock;
class UButton;
class UWidgetAnimation;

UCLASS()
class BULLSANDCOWS_API UMatchQueueWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    void UpdatePlayerCount(int32 CurrentCount, int32 MaxCount);

    void StartSlideDown();
    void StartSlideUp();

    UFUNCTION()
    void OnSlideDownFinished();

protected:
    virtual void NativeConstruct() override;

private:
    UFUNCTION()
    void OnCancelButtonClicked();

protected:
    UPROPERTY(meta = (BindWidget))
    TObjectPtr<UTextBlock> PlayerCountText;

    UPROPERTY(meta = (BindWidget))
    TObjectPtr<UButton> CancelButton;

    UPROPERTY(Transient, meta = (BindWidgetAnim))
    TObjectPtr<UWidgetAnimation> SlideAnim;
};