// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BullsAndCows/UI/MatchQueueWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchQueueWidget() {}

// Begin Cross Module References
BULLSANDCOWS_API UClass* Z_Construct_UClass_UMatchQueueWidget();
BULLSANDCOWS_API UClass* Z_Construct_UClass_UMatchQueueWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
UPackage* Z_Construct_UPackage__Script_BullsAndCows();
// End Cross Module References

// Begin Class UMatchQueueWidget Function OnCancelButtonClicked
struct Z_Construct_UFunction_UMatchQueueWidget_OnCancelButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/MatchQueueWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchQueueWidget_OnCancelButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchQueueWidget, nullptr, "OnCancelButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchQueueWidget_OnCancelButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchQueueWidget_OnCancelButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMatchQueueWidget_OnCancelButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchQueueWidget_OnCancelButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchQueueWidget::execOnCancelButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCancelButtonClicked();
	P_NATIVE_END;
}
// End Class UMatchQueueWidget Function OnCancelButtonClicked

// Begin Class UMatchQueueWidget Function OnSlideDownFinished
struct Z_Construct_UFunction_UMatchQueueWidget_OnSlideDownFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/MatchQueueWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchQueueWidget_OnSlideDownFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchQueueWidget, nullptr, "OnSlideDownFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchQueueWidget_OnSlideDownFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchQueueWidget_OnSlideDownFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMatchQueueWidget_OnSlideDownFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchQueueWidget_OnSlideDownFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchQueueWidget::execOnSlideDownFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSlideDownFinished();
	P_NATIVE_END;
}
// End Class UMatchQueueWidget Function OnSlideDownFinished

// Begin Class UMatchQueueWidget
void UMatchQueueWidget::StaticRegisterNativesUMatchQueueWidget()
{
	UClass* Class = UMatchQueueWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnCancelButtonClicked", &UMatchQueueWidget::execOnCancelButtonClicked },
		{ "OnSlideDownFinished", &UMatchQueueWidget::execOnSlideDownFinished },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMatchQueueWidget);
UClass* Z_Construct_UClass_UMatchQueueWidget_NoRegister()
{
	return UMatchQueueWidget::StaticClass();
}
struct Z_Construct_UClass_UMatchQueueWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MatchQueueWidget.h" },
		{ "ModuleRelativePath", "UI/MatchQueueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCountText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MatchQueueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MatchQueueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlideAnim_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "UI/MatchQueueWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCountText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CancelButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlideAnim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMatchQueueWidget_OnCancelButtonClicked, "OnCancelButtonClicked" }, // 2782966551
		{ &Z_Construct_UFunction_UMatchQueueWidget_OnSlideDownFinished, "OnSlideDownFinished" }, // 555018962
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatchQueueWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMatchQueueWidget_Statics::NewProp_PlayerCountText = { "PlayerCountText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMatchQueueWidget, PlayerCountText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCountText_MetaData), NewProp_PlayerCountText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMatchQueueWidget_Statics::NewProp_CancelButton = { "CancelButton", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMatchQueueWidget, CancelButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelButton_MetaData), NewProp_CancelButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMatchQueueWidget_Statics::NewProp_SlideAnim = { "SlideAnim", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMatchQueueWidget, SlideAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlideAnim_MetaData), NewProp_SlideAnim_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMatchQueueWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchQueueWidget_Statics::NewProp_PlayerCountText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchQueueWidget_Statics::NewProp_CancelButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchQueueWidget_Statics::NewProp_SlideAnim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMatchQueueWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMatchQueueWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BullsAndCows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMatchQueueWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMatchQueueWidget_Statics::ClassParams = {
	&UMatchQueueWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMatchQueueWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMatchQueueWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMatchQueueWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMatchQueueWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMatchQueueWidget()
{
	if (!Z_Registration_Info_UClass_UMatchQueueWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMatchQueueWidget.OuterSingleton, Z_Construct_UClass_UMatchQueueWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMatchQueueWidget.OuterSingleton;
}
template<> BULLSANDCOWS_API UClass* StaticClass<UMatchQueueWidget>()
{
	return UMatchQueueWidget::StaticClass();
}
UMatchQueueWidget::UMatchQueueWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMatchQueueWidget);
UMatchQueueWidget::~UMatchQueueWidget() {}
// End Class UMatchQueueWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_UI_MatchQueueWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMatchQueueWidget, UMatchQueueWidget::StaticClass, TEXT("UMatchQueueWidget"), &Z_Registration_Info_UClass_UMatchQueueWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMatchQueueWidget), 940907841U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_UI_MatchQueueWidget_h_2459785197(TEXT("/Script/BullsAndCows"),
	Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_UI_MatchQueueWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_UI_MatchQueueWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
