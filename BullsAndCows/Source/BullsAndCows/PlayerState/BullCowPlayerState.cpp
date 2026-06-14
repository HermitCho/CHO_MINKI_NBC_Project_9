// BullCowPlayerState.cpp


#include "PlayerState/BullCowPlayerState.h"

#include "Net/UnrealNetwork.h"

ABullCowPlayerState::ABullCowPlayerState()
{
	// 변수 초기화
	PlayerScore = 0;
	MaxTry = 3;
	CurrentGuessCount = 0	;
	bHasActedThisTurn = false;
}

void ABullCowPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// 서버의 점수와 시도 횟수를 모든 클라이언트에게 복제(동기화)
	DOREPLIFETIME(ABullCowPlayerState, PlayerScore);
	DOREPLIFETIME(ABullCowPlayerState, CurrentGuessCount);
}