// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BullsAndCows/UI/MatchFoundWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchFoundWidget() {}

// Begin Cross Module References
BULLSANDCOWS_API UClass* Z_Construct_UClass_UMatchFoundWidget();
BULLSANDCOWS_API UClass* Z_Construct_UClass_UMatchFoundWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
UPackage* Z_Construct_UPackage__Script_BullsAndCows();
// End Cross Module References

// Begin Class UMatchFoundWidget Function UpdateCountdown
struct Z_Construct_UFunction_UMatchFoundWidget_UpdateCountdown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 1\xec\xb4\x88\xeb\xa7\x88\xeb\x8b\xa4 \xed\x98\xb8\xec\xb6\x9c\xeb\x90\x98\xec\x96\xb4 \xed\x85\x8d\xec\x8a\xa4\xed\x8a\xb8\xeb\xa5\xbc \xec\x97\x85\xeb\x8d\xb0\xec\x9d\xb4\xed\x8a\xb8\xed\x95\xa0 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "UI/MatchFoundWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "1\xec\xb4\x88\xeb\xa7\x88\xeb\x8b\xa4 \xed\x98\xb8\xec\xb6\x9c\xeb\x90\x98\xec\x96\xb4 \xed\x85\x8d\xec\x8a\xa4\xed\x8a\xb8\xeb\xa5\xbc \xec\x97\x85\xeb\x8d\xb0\xec\x9d\xb4\xed\x8a\xb8\xed\x95\xa0 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchFoundWidget_UpdateCountdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchFoundWidget, nullptr, "UpdateCountdown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchFoundWidget_UpdateCountdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMatchFoundWidget_UpdateCountdown_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMatchFoundWidget_UpdateCountdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMatchFoundWidget_UpdateCountdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMatchFoundWidget::execUpdateCountdown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCountdown();
	P_NATIVE_END;
}
// End Class UMatchFoundWidget Function UpdateCountdown

// Begin Class UMatchFoundWidget
void UMatchFoundWidget::StaticRegisterNativesUMatchFoundWidget()
{
	UClass* Class = UMatchFoundWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateCountdown", &UMatchFoundWidget::execUpdateCountdown },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMatchFoundWidget);
UClass* Z_Construct_UClass_UMatchFoundWidget_NoRegister()
{
	return UMatchFoundWidget::StaticClass();
}
struct Z_Construct_UClass_UMatchFoundWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MatchFoundWidget.h" },
		{ "ModuleRelativePath", "UI/MatchFoundWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountdownText_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x9d\x98 \xed\x85\x8d\xec\x8a\xa4\xed\x8a\xb8 \xeb\xb8\x94\xeb\xa1\x9d\xea\xb3\xbc \xec\x97\xb0\xea\xb2\xb0\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MatchFoundWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x9d\x98 \xed\x85\x8d\xec\x8a\xa4\xed\x8a\xb8 \xeb\xb8\x94\xeb\xa1\x9d\xea\xb3\xbc \xec\x97\xb0\xea\xb2\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeAnim_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "UI/MatchFoundWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CountdownText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FadeAnim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMatchFoundWidget_UpdateCountdown, "UpdateCountdown" }, // 3618156618
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatchFoundWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMatchFoundWidget_Statics::NewProp_CountdownText = { "CountdownText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMatchFoundWidget, CountdownText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountdownText_MetaData), NewProp_CountdownText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMatchFoundWidget_Statics::NewProp_FadeAnim = { "FadeAnim", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMatchFoundWidget, FadeAnim), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeAnim_MetaData), NewProp_FadeAnim_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMatchFoundWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchFoundWidget_Statics::NewProp_CountdownText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchFoundWidget_Statics::NewProp_FadeAnim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMatchFoundWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMatchFoundWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BullsAndCows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMatchFoundWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMatchFoundWidget_Statics::ClassParams = {
	&UMatchFoundWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMatchFoundWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMatchFoundWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMatchFoundWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMatchFoundWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMatchFoundWidget()
{
	if (!Z_Registration_Info_UClass_UMatchFoundWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMatchFoundWidget.OuterSingleton, Z_Construct_UClass_UMatchFoundWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMatchFoundWidget.OuterSingleton;
}
template<> BULLSANDCOWS_API UClass* StaticClass<UMatchFoundWidget>()
{
	return UMatchFoundWidget::StaticClass();
}
UMatchFoundWidget::UMatchFoundWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMatchFoundWidget);
UMatchFoundWidget::~UMatchFoundWidget() {}
// End Class UMatchFoundWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_UI_MatchFoundWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMatchFoundWidget, UMatchFoundWidget::StaticClass, TEXT("UMatchFoundWidget"), &Z_Registration_Info_UClass_UMatchFoundWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMatchFoundWidget), 4149322985U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_UI_MatchFoundWidget_h_575834600(TEXT("/Script/BullsAndCows"),
	Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_UI_MatchFoundWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_UI_MatchFoundWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
