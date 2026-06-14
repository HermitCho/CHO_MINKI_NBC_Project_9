// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameState/TitleGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BULLSANDCOWS_TitleGameState_generated_h
#error "TitleGameState.generated.h already included, missing '#pragma once' in TitleGameState.h"
#endif
#define BULLSANDCOWS_TitleGameState_generated_h

#define FID_BullsAndCows_Source_BullsAndCows_GameState_TitleGameState_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_PlayerCount);


#define FID_BullsAndCows_Source_BullsAndCows_GameState_TitleGameState_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATitleGameState(); \
	friend struct Z_Construct_UClass_ATitleGameState_Statics; \
public: \
	DECLARE_CLASS(ATitleGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BullsAndCows"), NO_API) \
	DECLARE_SERIALIZER(ATitleGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentPlayerCount=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentPlayerCount	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_BullsAndCows_Source_BullsAndCows_GameState_TitleGameState_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATitleGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATitleGameState(ATitleGameState&&); \
	ATitleGameState(const ATitleGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATitleGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATitleGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATitleGameState) \
	NO_API virtual ~ATitleGameState();


#define FID_BullsAndCows_Source_BullsAndCows_GameState_TitleGameState_h_9_PROLOG
#define FID_BullsAndCows_Source_BullsAndCows_GameState_TitleGameState_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BullsAndCows_Source_BullsAndCows_GameState_TitleGameState_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BullsAndCows_Source_BullsAndCows_GameState_TitleGameState_h_12_INCLASS_NO_PURE_DECLS \
	FID_BullsAndCows_Source_BullsAndCows_GameState_TitleGameState_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BULLSANDCOWS_API UClass* StaticClass<class ATitleGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BullsAndCows_Source_BullsAndCows_GameState_TitleGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
