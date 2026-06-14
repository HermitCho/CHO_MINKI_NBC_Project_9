// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMode/TitleGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BULLSANDCOWS_TitleGameModeBase_generated_h
#error "TitleGameModeBase.generated.h already included, missing '#pragma once' in TitleGameModeBase.h"
#endif
#define BULLSANDCOWS_TitleGameModeBase_generated_h

#define FID_BullsAndCows_Source_BullsAndCows_GameMode_TitleGameModeBase_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATitleGameModeBase(); \
	friend struct Z_Construct_UClass_ATitleGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATitleGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BullsAndCows"), NO_API) \
	DECLARE_SERIALIZER(ATitleGameModeBase)


#define FID_BullsAndCows_Source_BullsAndCows_GameMode_TitleGameModeBase_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATitleGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATitleGameModeBase(ATitleGameModeBase&&); \
	ATitleGameModeBase(const ATitleGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATitleGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATitleGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATitleGameModeBase) \
	NO_API virtual ~ATitleGameModeBase();


#define FID_BullsAndCows_Source_BullsAndCows_GameMode_TitleGameModeBase_h_7_PROLOG
#define FID_BullsAndCows_Source_BullsAndCows_GameMode_TitleGameModeBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BullsAndCows_Source_BullsAndCows_GameMode_TitleGameModeBase_h_10_INCLASS_NO_PURE_DECLS \
	FID_BullsAndCows_Source_BullsAndCows_GameMode_TitleGameModeBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BULLSANDCOWS_API UClass* StaticClass<class ATitleGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BullsAndCows_Source_BullsAndCows_GameMode_TitleGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
