// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/MatchQueueWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BULLSANDCOWS_MatchQueueWidget_generated_h
#error "MatchQueueWidget.generated.h already included, missing '#pragma once' in MatchQueueWidget.h"
#endif
#define BULLSANDCOWS_MatchQueueWidget_generated_h

#define FID_BullsAndCows_Source_BullsAndCows_UI_MatchQueueWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCancelButtonClicked); \
	DECLARE_FUNCTION(execOnSlideDownFinished);


#define FID_BullsAndCows_Source_BullsAndCows_UI_MatchQueueWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMatchQueueWidget(); \
	friend struct Z_Construct_UClass_UMatchQueueWidget_Statics; \
public: \
	DECLARE_CLASS(UMatchQueueWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BullsAndCows"), NO_API) \
	DECLARE_SERIALIZER(UMatchQueueWidget)


#define FID_BullsAndCows_Source_BullsAndCows_UI_MatchQueueWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMatchQueueWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMatchQueueWidget(UMatchQueueWidget&&); \
	UMatchQueueWidget(const UMatchQueueWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMatchQueueWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatchQueueWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMatchQueueWidget) \
	NO_API virtual ~UMatchQueueWidget();


#define FID_BullsAndCows_Source_BullsAndCows_UI_MatchQueueWidget_h_13_PROLOG
#define FID_BullsAndCows_Source_BullsAndCows_UI_MatchQueueWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BullsAndCows_Source_BullsAndCows_UI_MatchQueueWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BullsAndCows_Source_BullsAndCows_UI_MatchQueueWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_BullsAndCows_Source_BullsAndCows_UI_MatchQueueWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BULLSANDCOWS_API UClass* StaticClass<class UMatchQueueWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BullsAndCows_Source_BullsAndCows_UI_MatchQueueWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
