// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMode/BullCowGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BULLSANDCOWS_BullCowGameModeBase_generated_h
#error "BullCowGameModeBase.generated.h already included, missing '#pragma once' in BullCowGameModeBase.h"
#endif
#define BULLSANDCOWS_BullCowGameModeBase_generated_h

#define FID_BullsAndCows_Source_BullsAndCows_GameMode_BullCowGameModeBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMainTimerElapsed);


#define FID_BullsAndCows_Source_BullsAndCows_GameMode_BullCowGameModeBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABullCowGameModeBase(); \
	friend struct Z_Construct_UClass_ABullCowGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ABullCowGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BullsAndCows"), NO_API) \
	DECLARE_SERIALIZER(ABullCowGameModeBase)


#define FID_BullsAndCows_Source_BullsAndCows_GameMode_BullCowGameModeBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABullCowGameModeBase(ABullCowGameModeBase&&); \
	ABullCowGameModeBase(const ABullCowGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullCowGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullCowGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABullCowGameModeBase) \
	NO_API virtual ~ABullCowGameModeBase();


#define FID_BullsAndCows_Source_BullsAndCows_GameMode_BullCowGameModeBase_h_11_PROLOG
#define FID_BullsAndCows_Source_BullsAndCows_GameMode_BullCowGameModeBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BullsAndCows_Source_BullsAndCows_GameMode_BullCowGameModeBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BullsAndCows_Source_BullsAndCows_GameMode_BullCowGameModeBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_BullsAndCows_Source_BullsAndCows_GameMode_BullCowGameModeBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BULLSANDCOWS_API UClass* StaticClass<class ABullCowGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BullsAndCows_Source_BullsAndCows_GameMode_BullCowGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
