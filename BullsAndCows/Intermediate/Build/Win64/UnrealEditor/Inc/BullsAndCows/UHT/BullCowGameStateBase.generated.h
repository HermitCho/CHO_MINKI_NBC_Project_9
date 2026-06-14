// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameState/BullCowGameStateBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BULLSANDCOWS_BullCowGameStateBase_generated_h
#error "BullCowGameStateBase.generated.h already included, missing '#pragma once' in BullCowGameStateBase.h"
#endif
#define BULLSANDCOWS_BullCowGameStateBase_generated_h

#define FID_BullsAndCows_Source_BullsAndCows_GameState_BullCowGameStateBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABullCowGameStateBase(); \
	friend struct Z_Construct_UClass_ABullCowGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ABullCowGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BullsAndCows"), NO_API) \
	DECLARE_SERIALIZER(ABullCowGameStateBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AlivePlayerControllerCount=NETFIELD_REP_START, \
		MatchState, \
		NETFIELD_REP_END=MatchState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_BullsAndCows_Source_BullsAndCows_GameState_BullCowGameStateBase_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABullCowGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABullCowGameStateBase(ABullCowGameStateBase&&); \
	ABullCowGameStateBase(const ABullCowGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullCowGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullCowGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABullCowGameStateBase) \
	NO_API virtual ~ABullCowGameStateBase();


#define FID_BullsAndCows_Source_BullsAndCows_GameState_BullCowGameStateBase_h_19_PROLOG
#define FID_BullsAndCows_Source_BullsAndCows_GameState_BullCowGameStateBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BullsAndCows_Source_BullsAndCows_GameState_BullCowGameStateBase_h_22_INCLASS_NO_PURE_DECLS \
	FID_BullsAndCows_Source_BullsAndCows_GameState_BullCowGameStateBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BULLSANDCOWS_API UClass* StaticClass<class ABullCowGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BullsAndCows_Source_BullsAndCows_GameState_BullCowGameStateBase_h


#define FOREACH_ENUM_EMATCHSTATE(op) \
	op(EMatchState::None) \
	op(EMatchState::Waiting) \
	op(EMatchState::Playing) \
	op(EMatchState::Ending) \
	op(EMatchState::End) 

enum class EMatchState : uint8;
template<> struct TIsUEnumClass<EMatchState> { enum { Value = true }; };
template<> BULLSANDCOWS_API UEnum* StaticEnum<EMatchState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
