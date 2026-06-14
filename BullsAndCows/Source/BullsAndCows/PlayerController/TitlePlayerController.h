#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TitlePlayerController.generated.h"

class UMatchQueueWidget;
class UMatchFoundWidget;
class UTitleUserWidget;

UCLASS()
class BULLSANDCOWS_API ATitlePlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    virtual void BeginPlay() override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    // UI에서 Play 버튼을 눌렀을 때 호출될 함수
    UFUNCTION(Server, Reliable, BlueprintCallable)
    void Server_JoinQueue();

    UFUNCTION(Client, Reliable)
    void Client_ShowMatchFound();

    void UpdateQueueUI();

    UFUNCTION(Client, Reliable)
    void Client_ShowQueue();

    UFUNCTION(Server, Reliable)
    void Server_CancelQueue();

    UFUNCTION(Client, Reliable)
    void Client_CancelQueueSuccess();

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void OnQueueCancelled();

    void RestorePlayButtonState();

public:
    UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
    FText NotificationText;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
    TSubclassOf<UMatchQueueWidget> QueueWidgetClass;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
    TSubclassOf<UMatchFoundWidget> MatchFoundWidgetClass;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
    TSubclassOf<UTitleUserWidget> TitleWidgetClass;


private:
    UPROPERTY()
    UMatchQueueWidget* QueueWidget;

    UPROPERTY()
    UMatchFoundWidget* MatchFoundWidget;

    UPROPERTY()
    UTitleUserWidget* TitleWidget;
};