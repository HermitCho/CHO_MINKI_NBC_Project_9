// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerState/BullCowPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BULLSANDCOWS_BullCowPlayerState_generated_h
#error "BullCowPlayerState.generated.h already included, missing '#pragma once' in BullCowPlayerState.h"
#endif
#define BULLSANDCOWS_BullCowPlayerState_generated_h

#define FID_BullsAndCows_Source_BullsAndCows_PlayerState_BullCowPlayerState_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTryCountString);


#define FID_BullsAndCows_Source_BullsAndCows_PlayerState_BullCowPlayerState_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABullCowPlayerState(); \
	friend struct Z_Construct_UClass_ABullCowPlayerState_Statics; \
public: \
	DECLARE_CLASS(ABullCowPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BullsAndCows"), NO_API) \
	DECLARE_SERIALIZER(ABullCowPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerScore=NETFIELD_REP_START, \
		MaxTry, \
		CurrentGuessCount, \
		bHasActedThisTurn, \
		NETFIELD_REP_END=bHasActedThisTurn	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_BullsAndCows_Source_BullsAndCows_PlayerState_BullCowPlayerState_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABullCowPlayerState(ABullCowPlayerState&&); \
	ABullCowPlayerState(const ABullCowPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullCowPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullCowPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABullCowPlayerState) \
	NO_API virtual ~ABullCowPlayerState();


#define FID_BullsAndCows_Source_BullsAndCows_PlayerState_BullCowPlayerState_h_7_PROLOG
#define FID_BullsAndCows_Source_BullsAndCows_PlayerState_BullCowPlayerState_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BullsAndCows_Source_BullsAndCows_PlayerState_BullCowPlayerState_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BullsAndCows_Source_BullsAndCows_PlayerState_BullCowPlayerState_h_10_INCLASS_NO_PURE_DECLS \
	FID_BullsAndCows_Source_BullsAndCows_PlayerState_BullCowPlayerState_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BULLSANDCOWS_API UClass* StaticClass<class ABullCowPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BullsAndCows_Source_BullsAndCows_PlayerState_BullCowPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
