// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BullsAndCows/UI/EndGameUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndGameUserWidget() {}

// Begin Cross Module References
BULLSANDCOWS_API UClass* Z_Construct_UClass_UEndGameUserWidget();
BULLSANDCOWS_API UClass* Z_Construct_UClass_UEndGameUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BullsAndCows();
// End Cross Module References

// Begin Class UEndGameUserWidget Function OnReturnButtonClicked
struct Z_Construct_UFunction_UEndGameUserWidget_OnReturnButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/EndGameUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameUserWidget_OnReturnButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameUserWidget, nullptr, "OnReturnButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameUserWidget_OnReturnButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEndGameUserWidget_OnReturnButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEndGameUserWidget_OnReturnButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEndGameUserWidget_OnReturnButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEndGameUserWidget::execOnReturnButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReturnButtonClicked();
	P_NATIVE_END;
}
// End Class UEndGameUserWidget Function OnReturnButtonClicked

// Begin Class UEndGameUserWidget
void UEndGameUserWidget::StaticRegisterNativesUEndGameUserWidget()
{
	UClass* Class = UEndGameUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnReturnButtonClicked", &UEndGameUserWidget::execOnReturnButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEndGameUserWidget);
UClass* Z_Construct_UClass_UEndGameUserWidget_NoRegister()
{
	return UEndGameUserWidget::StaticClass();
}
struct Z_Construct_UClass_UEndGameUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/EndGameUserWidget.h" },
		{ "ModuleRelativePath", "UI/EndGameUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_RankResult_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/EndGameUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_ReturnToTitle_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/EndGameUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_RankResult;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_ReturnToTitle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEndGameUserWidget_OnReturnButtonClicked, "OnReturnButtonClicked" }, // 1920097107
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndGameUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEndGameUserWidget_Statics::NewProp_TextBlock_RankResult = { "TextBlock_RankResult", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEndGameUserWidget, TextBlock_RankResult), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_RankResult_MetaData), NewProp_TextBlock_RankResult_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEndGameUserWidget_Statics::NewProp_Button_ReturnToTitle = { "Button_ReturnToTitle", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEndGameUserWidget, Button_ReturnToTitle), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_ReturnToTitle_MetaData), NewProp_Button_ReturnToTitle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEndGameUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndGameUserWidget_Statics::NewProp_TextBlock_RankResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndGameUserWidget_Statics::NewProp_Button_ReturnToTitle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEndGameUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BullsAndCows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEndGameUserWidget_Statics::ClassParams = {
	&UEndGameUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEndGameUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UEndGameUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEndGameUserWidget()
{
	if (!Z_Registration_Info_UClass_UEndGameUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEndGameUserWidget.OuterSingleton, Z_Construct_UClass_UEndGameUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEndGameUserWidget.OuterSingleton;
}
template<> BULLSANDCOWS_API UClass* StaticClass<UEndGameUserWidget>()
{
	return UEndGameUserWidget::StaticClass();
}
UEndGameUserWidget::UEndGameUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEndGameUserWidget);
UEndGameUserWidget::~UEndGameUserWidget() {}
// End Class UEndGameUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_UI_EndGameUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEndGameUserWidget, UEndGameUserWidget::StaticClass, TEXT("UEndGameUserWidget"), &Z_Registration_Info_UClass_UEndGameUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEndGameUserWidget), 1069176053U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_UI_EndGameUserWidget_h_265145774(TEXT("/Script/BullsAndCows"),
	Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_UI_EndGameUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_UI_EndGameUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
