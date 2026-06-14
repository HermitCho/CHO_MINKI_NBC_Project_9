// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerController/BullCowPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BULLSANDCOWS_BullCowPlayerController_generated_h
#error "BullCowPlayerController.generated.h already included, missing '#pragma once' in BullCowPlayerController.h"
#endif
#define BULLSANDCOWS_BullCowPlayerController_generated_h

#define FID_BullsAndCows_Source_BullsAndCows_PlayerController_BullCowPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_RequestReturnToTitle_Implementation(); \
	virtual void Client_UpdateNotification_Implementation(const FString& NewNotification); \
	virtual void Client_ReceiveChatMessage_Implementation(const FString& InMessage); \
	virtual void Server_SendChatMessage_Implementation(const FString& InMessage); \
	virtual void ClientRPCReturnToTitle_Implementation(); \
	virtual void ClientRPCShowEndGameUserWidget_Implementation(int32 Rank); \
	DECLARE_FUNCTION(execServer_RequestReturnToTitle); \
	DECLARE_FUNCTION(execClient_UpdateNotification); \
	DECLARE_FUNCTION(execClient_ReceiveChatMessage); \
	DECLARE_FUNCTION(execServer_SendChatMessage); \
	DECLARE_FUNCTION(execClientRPCReturnToTitle); \
	DECLARE_FUNCTION(execClientRPCShowEndGameUserWidget);


#define FID_BullsAndCows_Source_BullsAndCows_PlayerController_BullCowPlayerController_h_15_CALLBACK_WRAPPERS
#define FID_BullsAndCows_Source_BullsAndCows_PlayerController_BullCowPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABullCowPlayerController(); \
	friend struct Z_Construct_UClass_ABullCowPlayerController_Statics; \
public: \
	DECLARE_CLASS(ABullCowPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BullsAndCows"), NO_API) \
	DECLARE_SERIALIZER(ABullCowPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerScore=NETFIELD_REP_START, \
		NotificationText, \
		NETFIELD_REP_END=NotificationText	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_BullsAndCows_Source_BullsAndCows_PlayerController_BullCowPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABullCowPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABullCowPlayerController(ABullCowPlayerController&&); \
	ABullCowPlayerController(const ABullCowPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullCowPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullCowPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABullCowPlayerController) \
	NO_API virtual ~ABullCowPlayerController();


#define FID_BullsAndCows_Source_BullsAndCows_PlayerController_BullCowPlayerController_h_12_PROLOG
#define FID_BullsAndCows_Source_BullsAndCows_PlayerController_BullCowPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BullsAndCows_Source_BullsAndCows_PlayerController_BullCowPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BullsAndCows_Source_BullsAndCows_PlayerController_BullCowPlayerController_h_15_CALLBACK_WRAPPERS \
	FID_BullsAndCows_Source_BullsAndCows_PlayerController_BullCowPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_BullsAndCows_Source_BullsAndCows_PlayerController_BullCowPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BULLSANDCOWS_API UClass* StaticClass<class ABullCowPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BullsAndCows_Source_BullsAndCows_PlayerController_BullCowPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
