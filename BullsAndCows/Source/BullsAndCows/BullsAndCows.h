// BullAndCow.h

#pragma once

#include "CoreMinimal.h"

BULLSANDCOWS_API DECLARE_LOG_CATEGORY_EXTERN(LogDXNet, Log, All);

/*
NetMode를 TChar로 반환해주는 매크로.
UE::GetPlayInEditorID() 때문에 이 매크로는 에디터 환경에서만 작동함.
*/
#define NETMODE_TCHAR ((GetNetMode() == ENetMode::NM_Client) ? *FString::Printf(TEXT("Client%02d"), UE::GetPlayInEditorID()) : ((GetNetMode() == ENetMode::NM_Standalone) ? TEXT("StandAlone") : TEXT("Server")))
//Function을 TChar로 반환해주는 매크로.
#define FUNCTION_TCHAR (ANSI_TO_TCHAR(__FUNCTION__))
//네트워크 환경에서 사용하기 위한 매크로.
#define BC_LOG_NET(LogCategory, Verbosity, Format, ...) UE_LOG(LogCategory, Verbosity, TEXT("[%s] %s %s"), NETMODE_TCHAR, FUNCTION_TCHAR, *FString::Printf(Format, ##__VA_ARGS__))

//액터의 Local Role을 TChar로 반환해주는 매크로.
#define LOCAL_ROLE_TCHAR *(UEnum::GetValueAsString(TEXT("Engine.ENetRole"), GetLocalRole()))
//액터의 Remote Role을  TChar로 반환해주는 매크로.
#define REMOTE_ROLE_TCHAR *(UEnum::GetValueAsString(TEXT("Engine.ENetRole"), GetRemoteRole()))
//네트워크 환경에서 사용하기 + 리모트 롤까지 확인하기 위한 매크로.
#define BC_LOG_ROLE(LogCat, Verbosity, Format, ...) UE_LOG(LogCat, Verbosity, TEXT("[%s][%s/%s] %s %s"), NETMODE_TCHAR, LOCAL_ROLE_TCHAR, REMOTE_ROLE_TCHAR, FUNCTION_TCHAR, *FString::Printf(Format, ##__VA_ARGS__))

//컴포넌트의 Local Role을 String로 반환해주는 매크로.
#define SUBOBJECT_LOCAL_ROLE_TCHAR *(UEnum::GetValueAsString(TEXT("Engine.ENetRole"), GetOwner()->GetLocalRole()))
//컴포넌트의 Remote Role을 String로 반환해주는 매크로.
#define SUBOBJECT_REMOTE_ROLE_TCHAR *(UEnum::GetValueAsString(TEXT("Engine.ENetRole"), GetOwner()->GetRemoteRole()))
//네트워크 환경에서 사용하기 + 리모트 롤까지 확인하기 위한 매크로.
#define BC_LOG_SUBOBJECT_ROLE(LogCat, Verbosity, Format, ...) UE_LOG(LogCat, Verbosity, TEXT("[%s][%s/%s] %s %s"), NETMODE_TCHAR, SUBOBJECT_LOCAL_ROLE_TCHAR, SUBOBJECT_REMOTE_ROLE_TCHAR, FUNCTION_TCHAR, *FString::Printf(Format, ##__VA_ARGS__))
