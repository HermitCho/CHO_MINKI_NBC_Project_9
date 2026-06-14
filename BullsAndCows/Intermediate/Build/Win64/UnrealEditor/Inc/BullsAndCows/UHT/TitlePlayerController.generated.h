// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerController/TitlePlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BULLSANDCOWS_TitlePlayerController_generated_h
#error "TitlePlayerController.generated.h already included, missing '#pragma once' in TitlePlayerController.h"
#endif
#define BULLSANDCOWS_TitlePlayerController_generated_h

#define FID_BullsAndCows_Source_BullsAndCows_PlayerController_TitlePlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_CancelQueueSuccess_Implementation(); \
	virtual void Server_CancelQueue_Implementation(); \
	virtual void Client_ShowQueue_Implementation(); \
	virtual void Client_ShowMatchFound_Implementation(); \
	virtual void Server_JoinQueue_Implementation(); \
	DECLARE_FUNCTION(execClient_CancelQueueSuccess); \
	DECLARE_FUNCTION(execServer_CancelQueue); \
	DECLARE_FUNCTION(execClient_ShowQueue); \
	DECLARE_FUNCTION(execClient_ShowMatchFound); \
	DECLARE_FUNCTION(execServer_JoinQueue);


#define FID_BullsAndCows_Source_BullsAndCows_PlayerController_TitlePlayerController_h_14_CALLBACK_WRAPPERS
#define FID_BullsAndCows_Source_BullsAndCows_PlayerController_TitlePlayerController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATitlePlayerController(); \
	friend struct Z_Construct_UClass_ATitlePlayerController_Statics; \
public: \
	DECLARE_CLASS(ATitlePlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BullsAndCows"), NO_API) \
	DECLARE_SERIALIZER(ATitlePlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NotificationText=NETFIELD_REP_START, \
		NETFIELD_REP_END=NotificationText	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_BullsAndCows_Source_BullsAndCows_PlayerController_TitlePlayerController_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATitlePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATitlePlayerController(ATitlePlayerController&&); \
	ATitlePlayerController(const ATitlePlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATitlePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATitlePlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATitlePlayerController) \
	NO_API virtual ~ATitlePlayerController();


#define FID_BullsAndCows_Source_BullsAndCows_PlayerController_TitlePlayerController_h_11_PROLOG
#define FID_BullsAndCows_Source_BullsAndCows_PlayerController_TitlePlayerController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BullsAndCows_Source_BullsAndCows_PlayerController_TitlePlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BullsAndCows_Source_BullsAndCows_PlayerController_TitlePlayerController_h_14_CALLBACK_WRAPPERS \
	FID_BullsAndCows_Source_BullsAndCows_PlayerController_TitlePlayerController_h_14_INCLASS_NO_PURE_DECLS \
	FID_BullsAndCows_Source_BullsAndCows_PlayerController_TitlePlayerController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BULLSANDCOWS_API UClass* StaticClass<class ATitlePlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BullsAndCows_Source_BullsAndCows_PlayerController_TitlePlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
