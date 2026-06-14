// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MatchFoundWidget.generated.h"

class UTextBlock;
class UButton;
class UWidgetAnimation;

UCLASS()
class BULLSANDCOWS_API UMatchFoundWidget : public UUserWidget
{
    GENERATED_BODY()

protected:
    // 위젯이 화면에 생성될 때 호출
    virtual void NativeConstruct() override;

    // 위젯이 파괴될 때 호출 (타이머 안전 종료용)
    virtual void NativeDestruct() override;

private:
    // 1초마다 호출되어 텍스트를 업데이트할 함수
    UFUNCTION()
    void UpdateCountdown();

    // 타이머를 관리하는 핸들
    FTimerHandle CountdownTimerHandle;

    // 남은 시간 (서버와 동일하게 5초로 시작)
    int32 TimeRemaining = 5;

protected:
    // 블루프린트의 텍스트 블록과 연결
    UPROPERTY(meta = (BindWidget))
    TObjectPtr<UTextBlock> CountdownText;

    UPROPERTY(Transient, meta = (BindWidgetAnim))
    TObjectPtr<UWidgetAnimation> FadeAnim;
};