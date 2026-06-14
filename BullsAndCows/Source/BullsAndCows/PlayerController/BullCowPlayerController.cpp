// BullCowPlayerController.cpp


#include "PlayerController/BullCowPlayerController.h"

#include "Net/UnrealNetwork.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "UI/BullCowUserWidget.h"
#include "Blueprint/UserWidget.h"
#include "UI/EndGameUserWidget.h"
#include "GameMode/BullCowGameModeBase.h"
#include "BullsAndCows.h"
#include "Engine/Engine.h"

void ABullCowPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (!IsLocalController())
	{
		UE_LOG(LogTemp, Warning, TEXT("Not Local Controller"));
		return;
	}

	FInputModeUIOnly OnlyInputUIMode;
	SetInputMode(OnlyInputUIMode);
	bShowMouseCursor = true;

	if (!IsValid(BullCowUserWidgetClass))
	{
		UE_LOG(LogTemp, Error, TEXT("BullCowUserWidgetClass가 Null입니다."));
		return;
	}

	BullCowUserWidgetInstance = CreateWidget<UBullCowUserWidget>(this, BullCowUserWidgetClass);

	if (!IsValid(BullCowUserWidgetInstance))
	{
		UE_LOG(LogTemp, Error, TEXT("BullCowUserWidgetInstance가 Null입니다."));
		return;
	}

	BullCowUserWidgetInstance->AddToViewport();
}

void ABullCowPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABullCowPlayerController, PlayerScore);
	DOREPLIFETIME(ABullCowPlayerController, NotificationText);
}

void ABullCowPlayerController::SendChatMessageString(const FString& InChatMessageString)
{
	if (InChatMessageString.IsEmpty() == false)
	{
		Server_SendChatMessage(InChatMessageString);
	}
}

//클라이언트의 채팅을 받아 게임 모드로 전달
void ABullCowPlayerController::Server_SendChatMessage_Implementation(const FString& InMessage)
{
	ABullCowGameModeBase* GM = Cast<ABullCowGameModeBase>(GetWorld()->GetAuthGameMode());
	if (IsValid(GM))
	{
		GM->ProcessPlayerChat(this, InMessage);
	}
}

//서버에서 온 채팅 결과를 UI에 전달
void ABullCowPlayerController::Client_ReceiveChatMessage_Implementation(const FString& InMessage)
{
	if (IsValid(BullCowUserWidgetInstance))
	{
		BullCowUserWidgetInstance->AddChatMessage(InMessage);
	}
	else
	{
		BC_LOG_NET(LogDXNet, Error, TEXT("[Error] BullCowUserWidgetInstance가 Null입니다."));
	}
}

void ABullCowPlayerController::PrintChatMessageString(const FString& InChatMessageString)
{
	if (IsValid(BullCowUserWidgetInstance))
	{
		BullCowUserWidgetInstance->AddChatMessage(InChatMessageString);
	}
}

void ABullCowPlayerController::ClientRPCShowEndGameUserWidget_Implementation(int32 Rank)
{
	if (IsValid(BullCowUserWidgetInstance))
	{
		BullCowUserWidgetInstance->SetVisibility(ESlateVisibility::Hidden);
	}

	if (IsValid(EndGameUserWidgetClass))
	{
		UEndGameUserWidget* EndGameWidget = CreateWidget<UEndGameUserWidget>(this, EndGameUserWidgetClass);
		if (IsValid(EndGameWidget))
		{
			EndGameWidget->AddToViewport();

			FString RankResultText;
			if (Rank == 0)
			{
				RankResultText = TEXT("게임 결과: 무승부");
			}
			else
			{
				RankResultText = FString::Printf(TEXT("게임 결과: %d등"), Rank);
			}

			EndGameWidget->SetEndGameResult(RankResultText);
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("EndGameUserWidgetClass가 Null입니다."));
	}
}

void ABullCowPlayerController::ClientRPCReturnToTitle_Implementation()
{
	ClientTravel(TEXT("/Game/Level/Title?closed"), TRAVEL_Absolute);
}

	
void ABullCowPlayerController::Client_UpdateNotification_Implementation(const FString& NewNotification)
{
	if (IsValid(BullCowUserWidgetInstance))
	{
		BullCowUserWidgetInstance->UpdateNotificationText(NewNotification);
	}
	else
	{
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("[에러] BullCowUserWidgetInstance가 NULL입니다!!"));
	}
}