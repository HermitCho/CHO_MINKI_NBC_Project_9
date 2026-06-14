// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/MatchFoundWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BULLSANDCOWS_MatchFoundWidget_generated_h
#error "MatchFoundWidget.generated.h already included, missing '#pragma once' in MatchFoundWidget.h"
#endif
#define BULLSANDCOWS_MatchFoundWidget_generated_h

#define FID_BullsAndCows_Source_BullsAndCows_UI_MatchFoundWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateCountdown);


#define FID_BullsAndCows_Source_BullsAndCows_UI_MatchFoundWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMatchFoundWidget(); \
	friend struct Z_Construct_UClass_UMatchFoundWidget_Statics; \
public: \
	DECLARE_CLASS(UMatchFoundWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BullsAndCows"), NO_API) \
	DECLARE_SERIALIZER(UMatchFoundWidget)


#define FID_BullsAndCows_Source_BullsAndCows_UI_MatchFoundWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMatchFoundWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMatchFoundWidget(UMatchFoundWidget&&); \
	UMatchFoundWidget(const UMatchFoundWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMatchFoundWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatchFoundWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMatchFoundWidget) \
	NO_API virtual ~UMatchFoundWidget();


#define FID_BullsAndCows_Source_BullsAndCows_UI_MatchFoundWidget_h_13_PROLOG
#define FID_BullsAndCows_Source_BullsAndCows_UI_MatchFoundWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BullsAndCows_Source_BullsAndCows_UI_MatchFoundWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BullsAndCows_Source_BullsAndCows_UI_MatchFoundWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_BullsAndCows_Source_BullsAndCows_UI_MatchFoundWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BULLSANDCOWS_API UClass* StaticClass<class UMatchFoundWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BullsAndCows_Source_BullsAndCows_UI_MatchFoundWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
