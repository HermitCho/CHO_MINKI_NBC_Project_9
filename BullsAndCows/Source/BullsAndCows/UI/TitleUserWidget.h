// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TitleUserWidget.generated.h"

class UButton; // 컴파일 속도 향상을 위한 전방 선언

UCLASS()
class BULLSANDCOWS_API UTitleUserWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    UFUNCTION()
    void ResetPlayButton();

protected:
    virtual void NativeConstruct() override;

    UPROPERTY(meta = (BindWidget))
    TObjectPtr<UButton> PlayButton;

    UPROPERTY(meta = (BindWidget))
    TObjectPtr<UButton> ExitButton;

private:
    UFUNCTION()
    void OnPlayButtonClicked();

    UFUNCTION()
    void OnExitButtonClicked();
};