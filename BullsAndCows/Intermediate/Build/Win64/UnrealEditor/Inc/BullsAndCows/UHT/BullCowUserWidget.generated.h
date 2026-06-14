// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/BullCowUserWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BULLSANDCOWS_BullCowUserWidget_generated_h
#error "BullCowUserWidget.generated.h already included, missing '#pragma once' in BullCowUserWidget.h"
#endif
#define BULLSANDCOWS_BullCowUserWidget_generated_h

#define FID_BullsAndCows_Source_BullsAndCows_UI_BullCowUserWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnChatInputTextCommitted); \
	DECLARE_FUNCTION(execAddChatMessage);


#define FID_BullsAndCows_Source_BullsAndCows_UI_BullCowUserWidget_h_15_CALLBACK_WRAPPERS
#define FID_BullsAndCows_Source_BullsAndCows_UI_BullCowUserWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBullCowUserWidget(); \
	friend struct Z_Construct_UClass_UBullCowUserWidget_Statics; \
public: \
	DECLARE_CLASS(UBullCowUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BullsAndCows"), NO_API) \
	DECLARE_SERIALIZER(UBullCowUserWidget)


#define FID_BullsAndCows_Source_BullsAndCows_UI_BullCowUserWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBullCowUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBullCowUserWidget(UBullCowUserWidget&&); \
	UBullCowUserWidget(const UBullCowUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBullCowUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBullCowUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBullCowUserWidget) \
	NO_API virtual ~UBullCowUserWidget();


#define FID_BullsAndCows_Source_BullsAndCows_UI_BullCowUserWidget_h_12_PROLOG
#define FID_BullsAndCows_Source_BullsAndCows_UI_BullCowUserWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BullsAndCows_Source_BullsAndCows_UI_BullCowUserWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BullsAndCows_Source_BullsAndCows_UI_BullCowUserWidget_h_15_CALLBACK_WRAPPERS \
	FID_BullsAndCows_Source_BullsAndCows_UI_BullCowUserWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_BullsAndCows_Source_BullsAndCows_UI_BullCowUserWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BULLSANDCOWS_API UClass* StaticClass<class UBullCowUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BullsAndCows_Source_BullsAndCows_UI_BullCowUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
