// EndGameUserWidget.cpp


#include "EndGameUserWidget.h"

#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

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
	UGameplayStatics::OpenLevel(this, FName("Title"));
}

void UEndGameUserWidget::SetEndGameResult(const FString& ResultString)
{
	if (IsValid(TextBlock_RankResult))
	{
		TextBlock_RankResult->SetText(FText::FromString(ResultString));
	}
}