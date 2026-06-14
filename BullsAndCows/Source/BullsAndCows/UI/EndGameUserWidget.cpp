// EndGameUserWidget.cpp


#include "EndGameUserWidget.h"

#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerController/BullCowPlayerController.h"

void UEndGameUserWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (APlayerController* PC = GetOwningPlayer())
	{
		PC->SetShowMouseCursor(true);
		FInputModeUIOnly InputMode;
		InputMode.SetWidgetToFocus(TakeWidget());
		PC->SetInputMode(InputMode);
	}

	if (IsValid(Button_ReturnToTitle))
	{
		Button_ReturnToTitle->OnClicked.AddDynamic(this, &UEndGameUserWidget::OnReturnButtonClicked);
	}
}

void UEndGameUserWidget::OnReturnButtonClicked()
{
	ABullCowPlayerController* PC = Cast<ABullCowPlayerController>(GetOwningPlayer());
	if (IsValid(PC))
	{
		PC->Server_RequestReturnToTitle();
	}
}

void UEndGameUserWidget::SetEndGameResult(const FString& ResultString)
{
	if (IsValid(TextBlock_RankResult))
	{
		TextBlock_RankResult->SetText(FText::FromString(ResultString));
	}
}