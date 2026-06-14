// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BullsAndCows/UI/TitleUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTitleUserWidget() {}

// Begin Cross Module References
BULLSANDCOWS_API UClass* Z_Construct_UClass_UTitleUserWidget();
BULLSANDCOWS_API UClass* Z_Construct_UClass_UTitleUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BullsAndCows();
// End Cross Module References

// Begin Class UTitleUserWidget Function OnExitButtonClicked
struct Z_Construct_UFunction_UTitleUserWidget_OnExitButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/TitleUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitleUserWidget_OnExitButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTitleUserWidget, nullptr, "OnExitButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleUserWidget_OnExitButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTitleUserWidget_OnExitButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTitleUserWidget_OnExitButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitleUserWidget_OnExitButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTitleUserWidget::execOnExitButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExitButtonClicked();
	P_NATIVE_END;
}
// End Class UTitleUserWidget Function OnExitButtonClicked

// Begin Class UTitleUserWidget Function OnPlayButtonClicked
struct Z_Construct_UFunction_UTitleUserWidget_OnPlayButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/TitleUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitleUserWidget_OnPlayButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTitleUserWidget, nullptr, "OnPlayButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleUserWidget_OnPlayButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTitleUserWidget_OnPlayButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTitleUserWidget_OnPlayButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitleUserWidget_OnPlayButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTitleUserWidget::execOnPlayButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayButtonClicked();
	P_NATIVE_END;
}
// End Class UTitleUserWidget Function OnPlayButtonClicked

// Begin Class UTitleUserWidget Function ResetPlayButton
struct Z_Construct_UFunction_UTitleUserWidget_ResetPlayButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/TitleUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTitleUserWidget_ResetPlayButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTitleUserWidget, nullptr, "ResetPlayButton", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTitleUserWidget_ResetPlayButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTitleUserWidget_ResetPlayButton_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTitleUserWidget_ResetPlayButton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTitleUserWidget_ResetPlayButton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTitleUserWidget::execResetPlayButton)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetPlayButton();
	P_NATIVE_END;
}
// End Class UTitleUserWidget Function ResetPlayButton

// Begin Class UTitleUserWidget
void UTitleUserWidget::StaticRegisterNativesUTitleUserWidget()
{
	UClass* Class = UTitleUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnExitButtonClicked", &UTitleUserWidget::execOnExitButtonClicked },
		{ "OnPlayButtonClicked", &UTitleUserWidget::execOnPlayButtonClicked },
		{ "ResetPlayButton", &UTitleUserWidget::execResetPlayButton },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTitleUserWidget);
UClass* Z_Construct_UClass_UTitleUserWidget_NoRegister()
{
	return UTitleUserWidget::StaticClass();
}
struct Z_Construct_UClass_UTitleUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xbb\xb4\xed\x8c\x8c\xec\x9d\xbc \xec\x86\x8d\xeb\x8f\x84 \xed\x96\xa5\xec\x83\x81\xec\x9d\x84 \xec\x9c\x84\xed\x95\x9c \xec\xa0\x84\xeb\xb0\xa9 \xec\x84\xa0\xec\x96\xb8\n" },
#endif
		{ "IncludePath", "UI/TitleUserWidget.h" },
		{ "ModuleRelativePath", "UI/TitleUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xbb\xb4\xed\x8c\x8c\xec\x9d\xbc \xec\x86\x8d\xeb\x8f\x84 \xed\x96\xa5\xec\x83\x81\xec\x9d\x84 \xec\x9c\x84\xed\x95\x9c \xec\xa0\x84\xeb\xb0\xa9 \xec\x84\xa0\xec\x96\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TitleUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/TitleUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTitleUserWidget_OnExitButtonClicked, "OnExitButtonClicked" }, // 1174920153
		{ &Z_Construct_UFunction_UTitleUserWidget_OnPlayButtonClicked, "OnPlayButtonClicked" }, // 1586801958
		{ &Z_Construct_UFunction_UTitleUserWidget_ResetPlayButton, "ResetPlayButton" }, // 3821493101
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTitleUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleUserWidget_Statics::NewProp_PlayButton = { "PlayButton", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTitleUserWidget, PlayButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayButton_MetaData), NewProp_PlayButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTitleUserWidget_Statics::NewProp_ExitButton = { "ExitButton", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTitleUserWidget, ExitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitButton_MetaData), NewProp_ExitButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTitleUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleUserWidget_Statics::NewProp_PlayButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTitleUserWidget_Statics::NewProp_ExitButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTitleUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTitleUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BullsAndCows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTitleUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTitleUserWidget_Statics::ClassParams = {
	&UTitleUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTitleUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTitleUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTitleUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTitleUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTitleUserWidget()
{
	if (!Z_Registration_Info_UClass_UTitleUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTitleUserWidget.OuterSingleton, Z_Construct_UClass_UTitleUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTitleUserWidget.OuterSingleton;
}
template<> BULLSANDCOWS_API UClass* StaticClass<UTitleUserWidget>()
{
	return UTitleUserWidget::StaticClass();
}
UTitleUserWidget::UTitleUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTitleUserWidget);
UTitleUserWidget::~UTitleUserWidget() {}
// End Class UTitleUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_UI_TitleUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTitleUserWidget, UTitleUserWidget::StaticClass, TEXT("UTitleUserWidget"), &Z_Registration_Info_UClass_UTitleUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTitleUserWidget), 1433780430U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_UI_TitleUserWidget_h_3850982464(TEXT("/Script/BullsAndCows"),
	Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_UI_TitleUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_UI_TitleUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
