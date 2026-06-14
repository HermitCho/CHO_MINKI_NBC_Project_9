// BullCowPlayerController.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BullCowPlayerController.generated.h"

class UBullCowUserWidget;
class UEndGameUserWidget;

UCLASS()
class BULLSANDCOWS_API ABullCowPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void SendChatMessageString(const FString& InChatMessageString);
	void PrintChatMessageString(const FString& InChatMessageString);

	UFUNCTION(Client, Reliable)
	void ClientRPCShowEndGameUserWidget(int32 Rank);

	UFUNCTION(Client, Reliable)
	void ClientRPCReturnToTitle();

	UFUNCTION(Server, Reliable)
	void Server_SendChatMessage(const FString& InMessage);

	UFUNCTION(Client, Reliable)
	void Client_ReceiveChatMessage(const FString& InMessage);

	UFUNCTION(Client, Reliable)
	void Client_UpdateNotification(const FString& NewNotification);

	UFUNCTION(Server, Reliable)
	void Server_RequestReturnToTitle();

public:
	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadWrite, Category = "Gameplay")
	int32 PlayerScore = 0;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadWrite, Category = "UI")
	FText NotificationText;


protected:

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UBullCowUserWidget> BullCowUserWidgetClass;

	UPROPERTY()
	TObjectPtr<UBullCowUserWidget> BullCowUserWidgetInstance;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UEndGameUserWidget> EndGameUserWidgetClass;

	UPROPERTY()
	TObjectPtr<UEndGameUserWidget> EndGameUserWidgetInstance;

	FString ChatMessageString;
};