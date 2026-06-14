// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/TitleUserWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BULLSANDCOWS_TitleUserWidget_generated_h
#error "TitleUserWidget.generated.h already included, missing '#pragma once' in TitleUserWidget.h"
#endif
#define BULLSANDCOWS_TitleUserWidget_generated_h

#define FID_BullsAndCows_Source_BullsAndCows_UI_TitleUserWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnExitButtonClicked); \
	DECLARE_FUNCTION(execOnPlayButtonClicked); \
	DECLARE_FUNCTION(execResetPlayButton);


#define FID_BullsAndCows_Source_BullsAndCows_UI_TitleUserWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTitleUserWidget(); \
	friend struct Z_Construct_UClass_UTitleUserWidget_Statics; \
public: \
	DECLARE_CLASS(UTitleUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BullsAndCows"), NO_API) \
	DECLARE_SERIALIZER(UTitleUserWidget)


#define FID_BullsAndCows_Source_BullsAndCows_UI_TitleUserWidget_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTitleUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTitleUserWidget(UTitleUserWidget&&); \
	UTitleUserWidget(const UTitleUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTitleUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTitleUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTitleUserWidget) \
	NO_API virtual ~UTitleUserWidget();


#define FID_BullsAndCows_Source_BullsAndCows_UI_TitleUserWidget_h_11_PROLOG
#define FID_BullsAndCows_Source_BullsAndCows_UI_TitleUserWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BullsAndCows_Source_BullsAndCows_UI_TitleUserWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BullsAndCows_Source_BullsAndCows_UI_TitleUserWidget_h_14_INCLASS_NO_PURE_DECLS \
	FID_BullsAndCows_Source_BullsAndCows_UI_TitleUserWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BULLSANDCOWS_API UClass* StaticClass<class UTitleUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BullsAndCows_Source_BullsAndCows_UI_TitleUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
