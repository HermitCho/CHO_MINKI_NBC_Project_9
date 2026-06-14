// BullCowUserWidget.cpp


#include "UI/BullCowUserWidget.h"

#include "Components/EditableTextBox.h"
#include "PlayerController/BullCowPlayerController.h"
#include "Components/ScrollBox.h"
#include "Components/TextBlock.h"
#include "UI/BullCowUserWidget.h"
#include "Fonts/SlateFontInfo.h"
#include "Styling/SlateColor.h"
#include "Styling/CoreStyle.h"
#include "Engine/Font.h"

void UBullCowUserWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (!IsValid(EditableTextBox_ChatInput))
	{
		UE_LOG(LogTemp, Error, TEXT("EditableTextBox_ChatInput가 Null입니다.l"));
		return;
	}

	if (!EditableTextBox_ChatInput->OnTextCommitted.IsAlreadyBound(this, &ThisClass::OnChatInputTextCommitted))
	{
		EditableTextBox_ChatInput->OnTextCommitted.AddDynamic(this, &ThisClass::OnChatInputTextCommitted);
	}
}

void UBullCowUserWidget::NativeDestruct()
{
	Super::NativeDestruct();

	if (EditableTextBox_ChatInput->OnTextCommitted.IsAlreadyBound(this, &ThisClass::OnChatInputTextCommitted) == true)
	{
		EditableTextBox_ChatInput->OnTextCommitted.RemoveDynamic(this, &ThisClass::OnChatInputTextCommitted);
	}
}

void UBullCowUserWidget::OnChatInputTextCommitted(const FText& Text, ETextCommit::Type CommitMethod)
{
	if (CommitMethod == ETextCommit::OnEnter)
	{
		if (Text.IsEmpty())
		{
			UE_LOG(LogTemp, Warning, TEXT("Text가 Null입니다.."));
			return;
		}

		APlayerController* OwningPlayerController = GetOwningPlayer();
		if (IsValid(OwningPlayerController))
		{
			ABullCowPlayerController* OwningBullCowController = Cast<ABullCowPlayerController>(OwningPlayerController);
			if (IsValid(OwningBullCowController))
			{

				OwningBullCowController->SendChatMessageString(Text.ToString());

				EditableTextBox_ChatInput->SetText(FText::GetEmpty());
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("[Error] Cast to ABullCowPlayerController failed!"));
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("[Error] OwningPlayerController가 Null입니다.!"));
		}
	}
}

void UBullCowUserWidget::AddChatMessage(const FString& Message)
{
	if (IsValid(ScrollBox_ChatLog))
	{
		UTextBlock* NewChatLine = NewObject<UTextBlock>(this);
		if (IsValid(NewChatLine))
		{
			NewChatLine->SetText(FText::FromString(Message));

			UFont* EngineDefaultFont = Cast<UFont>(StaticLoadObject(UFont::StaticClass(), nullptr, TEXT("/Engine/EngineFonts/Roboto")));
			if (IsValid(EngineDefaultFont))
			{
				FSlateFontInfo ChatFont;
				ChatFont.FontObject = EngineDefaultFont;
				ChatFont.Size = 22;
				NewChatLine->SetFont(ChatFont);
			}

			NewChatLine->SetColorAndOpacity(FSlateColor(FLinearColor::White));

			NewChatLine->SetShadowOffset(FVector2D(1.0f, 1.0f));
			NewChatLine->SetShadowColorAndOpacity(FLinearColor::Black);

			ScrollBox_ChatLog->AddChild(NewChatLine);
			ScrollBox_ChatLog->ScrollToEnd();
		}
	}
}

void UBullCowUserWidget::UpdateNotificationText(const FString& NewText)
{
	if (IsValid(TextBlock_Notification))
	{
		TextBlock_Notification->SetText(FText::FromString(NewText));
	}
}