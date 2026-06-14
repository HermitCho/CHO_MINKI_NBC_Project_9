// BullCowUserWidget.h

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BullCowUserWidget.generated.h"

class UEditableTextBox;
class UScrollBox;

UCLASS()
class BULLSANDCOWS_API UBullCowUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

	virtual void NativeDestruct() override;

	UFUNCTION(BlueprintCallable, Category = "Chat")
	void AddChatMessage(const FString& Message);

	UFUNCTION(BlueprintImplementableEvent, Category = "UI")
	void AddChatMessageToUI(const FString& ChatMessage);

	void UpdateNotificationText(const FString& NewText);

protected:
	UFUNCTION()
	void OnChatInputTextCommitted(const FText& Text, ETextCommit::Type CommitMethod);

public:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UEditableTextBox> EditableTextBox_ChatInput;

	UPROPERTY(meta = (BindWidget))
	UScrollBox* ScrollBox_ChatLog;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UUserWidget> ChatLineWidgetClass;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<class UTextBlock> TextBlock_Notification;

};
