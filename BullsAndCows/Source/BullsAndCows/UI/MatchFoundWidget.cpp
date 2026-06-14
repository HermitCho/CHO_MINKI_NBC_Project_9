//MatchFoundWidget.cpp

#include "UI/MatchFoundWidget.h"

#include "Components/TextBlock.h"
#include "TimerManager.h"
#include "Animation/WidgetAnimation.h"

void UMatchFoundWidget::NativeConstruct()
{
    Super::NativeConstruct();

    TimeRemaining = 5;

    if (FadeAnim)
    {
        PlayAnimation(FadeAnim, 0.f, 1, EUMGSequencePlayMode::Forward, 1.f);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("에러: FadeInAnim이 연결되지 않음 (Null)"));
    }

    if (CountdownText)
    {
        FString InitText = FString::Printf(TEXT("%d Seconds left..."), TimeRemaining);
        CountdownText->SetText(FText::FromString(InitText));
    }

    GetWorld()->GetTimerManager().SetTimer(
        CountdownTimerHandle,
        this,
        &UMatchFoundWidget::UpdateCountdown,
        1.0f,
        true
    );
}

void UMatchFoundWidget::NativeDestruct()
{
    Super::NativeDestruct();

    GetWorld()->GetTimerManager().ClearTimer(CountdownTimerHandle);
}

void UMatchFoundWidget::UpdateCountdown()
{
    TimeRemaining--;

    if (TimeRemaining > 0)
    {
        if (CountdownText)
        {
            FString CountString = FString::Printf(TEXT("%d Seconds left..."), TimeRemaining);
            CountdownText->SetText(FText::FromString(CountString));
        }
    }
    else
    {
        GetWorld()->GetTimerManager().ClearTimer(CountdownTimerHandle);

        if (CountdownText)
        {
            CountdownText->SetText(FText::FromString(TEXT("Game Start!")));
        }
    }
}