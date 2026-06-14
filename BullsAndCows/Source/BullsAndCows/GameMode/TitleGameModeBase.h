#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TitleGameModeBase.generated.h"

UCLASS()
class BULLSANDCOWS_API ATitleGameModeBase : public AGameModeBase
{
    GENERATED_BODY()

public:
    virtual void PostLogin(APlayerController* NewPlayer) override;
    virtual void Logout(AController* Exiting) override;

    // 클라이언트가 Play 버튼을 눌러 큐에 진입할 때 호출
    void HandlePlayerJoinQueue(class ATitlePlayerController* PC);

    void StartMatch();

    // 클라이언트가 취소 버튼을 눌렀을 때 서버에서 처리할 함수
    void HandlePlayerCancelQueue(class ATitlePlayerController* PC);

private:
    // 5초 뒤 서버 트래블을 실행할 타이머 함수
    void ExecuteServerTravel();

    FTimerHandle MatchStartTimerHandle;

public:
    UPROPERTY(EditDefaultsOnly, Category = "Level")
    FString GameplayLevelPath = TEXT("/Game/Maps/GameplayLevel?listen");

};