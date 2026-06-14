// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/EndGameUserWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BULLSANDCOWS_EndGameUserWidget_generated_h
#error "EndGameUserWidget.generated.h already included, missing '#pragma once' in EndGameUserWidget.h"
#endif
#define BULLSANDCOWS_EndGameUserWidget_generated_h

#define FID_BullsAndCows_Source_BullsAndCows_UI_EndGameUserWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnReturnButtonClicked);


#define FID_BullsAndCows_Source_BullsAndCows_UI_EndGameUserWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEndGameUserWidget(); \
	friend struct Z_Construct_UClass_UEndGameUserWidget_Statics; \
public: \
	DECLARE_CLASS(UEndGameUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BullsAndCows"), NO_API) \
	DECLARE_SERIALIZER(UEndGameUserWidget)


#define FID_BullsAndCows_Source_BullsAndCows_UI_EndGameUserWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEndGameUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEndGameUserWidget(UEndGameUserWidget&&); \
	UEndGameUserWidget(const UEndGameUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndGameUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndGameUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndGameUserWidget) \
	NO_API virtual ~UEndGameUserWidget();


#define FID_BullsAndCows_Source_BullsAndCows_UI_EndGameUserWidget_h_12_PROLOG
#define FID_BullsAndCows_Source_BullsAndCows_UI_EndGameUserWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BullsAndCows_Source_BullsAndCows_UI_EndGameUserWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BullsAndCows_Source_BullsAndCows_UI_EndGameUserWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_BullsAndCows_Source_BullsAndCows_UI_EndGameUserWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BULLSANDCOWS_API UClass* StaticClass<class UEndGameUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BullsAndCows_Source_BullsAndCows_UI_EndGameUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
