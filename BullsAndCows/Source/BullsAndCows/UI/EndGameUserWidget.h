// EndGameUserWidget.h

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EndGameUserWidget.generated.h"

class UTextBlock;
class UButton;

UCLASS()
class BULLSANDCOWS_API UEndGameUserWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

	UFUNCTION()
	void OnReturnButtonClicked();

public:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TextBlock_RankResult;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> Button_ReturnToTitle;

	void SetEndGameResult(const FString& ResultString);
};