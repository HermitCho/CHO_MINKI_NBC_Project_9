#include "UI/MatchQueueWidget.h"

#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "PlayerController/TitlePlayerController.h"
#include "Animation/WidgetAnimation.h"

void UMatchQueueWidget::NativeConstruct()
{
    Super::NativeConstruct();

    UE_LOG(LogTemp, Warning, TEXT("MatchQueueWidget NativeConstruct"));

    if (CancelButton)
    {
        CancelButton->OnClicked.AddDynamic(this, &UMatchQueueWidget::OnCancelButtonClicked);
    }

    if (SlideAnim)
    {
        PlayAnimation(SlideAnim, 0.f, 1, EUMGSequencePlayMode::Forward, 1.f);
    }
}

void UMatchQueueWidget::UpdatePlayerCount(int32 CurrentCount, int32 MaxCount)
{
    if (!IsValid(PlayerCountText)) return;

    FString CountString = FString::Printf(TEXT("%d / %d"), CurrentCount, MaxCount);
    PlayerCountText->SetText(FText::FromString(CountString));
}

void UMatchQueueWidget::OnCancelButtonClicked()
{
    ATitlePlayerController* PC = Cast<ATitlePlayerController>(GetOwningPlayer());
    if (IsValid(PC))
    {
        PC->Server_CancelQueue();
        PC->RestorePlayButtonState();
    }
}

void UMatchQueueWidget::StartSlideDown()
{
    if (SlideAnim)
    {
        // 애니메이션이 끝나면 완전히 숨김 처리되도록 이벤트 바인딩
        FWidgetAnimationDynamicEvent EndEvent;
        EndEvent.BindDynamic(this, &UMatchQueueWidget::OnSlideDownFinished);
        BindToAnimationFinished(SlideAnim, EndEvent);

        // 애니메이션을 역방향으로 재생 (다시 아래로 내려감)
        PlayAnimation(SlideAnim, 0.f, 1, EUMGSequencePlayMode::Reverse, 1.f);
    }
    else
    {
        OnSlideDownFinished();
    }
}

void UMatchQueueWidget::StartSlideUp()
{
    SetVisibility(ESlateVisibility::Visible);

    if (SlideAnim)
    {
        PlayAnimation(SlideAnim, 0.f, 1, EUMGSequencePlayMode::Forward, 1.f);
    }
}

void UMatchQueueWidget::OnSlideDownFinished()
{
    // 애니메이션이 끝나면 화면에서 숨김
    SetVisibility(ESlateVisibility::Collapsed);
}