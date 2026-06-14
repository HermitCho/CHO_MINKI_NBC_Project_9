// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BullsAndCows/UI/BullCowUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBullCowUserWidget() {}

// Begin Cross Module References
BULLSANDCOWS_API UClass* Z_Construct_UClass_UBullCowUserWidget();
BULLSANDCOWS_API UClass* Z_Construct_UClass_UBullCowUserWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_BullsAndCows();
// End Cross Module References

// Begin Class UBullCowUserWidget Function AddChatMessage
struct Z_Construct_UFunction_UBullCowUserWidget_AddChatMessage_Statics
{
	struct BullCowUserWidget_eventAddChatMessage_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Chat" },
		{ "ModuleRelativePath", "UI/BullCowUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBullCowUserWidget_AddChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BullCowUserWidget_eventAddChatMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBullCowUserWidget_AddChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBullCowUserWidget_AddChatMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBullCowUserWidget_AddChatMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBullCowUserWidget_AddChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBullCowUserWidget, nullptr, "AddChatMessage", nullptr, nullptr, Z_Construct_UFunction_UBullCowUserWidget_AddChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBullCowUserWidget_AddChatMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBullCowUserWidget_AddChatMessage_Statics::BullCowUserWidget_eventAddChatMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBullCowUserWidget_AddChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBullCowUserWidget_AddChatMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBullCowUserWidget_AddChatMessage_Statics::BullCowUserWidget_eventAddChatMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBullCowUserWidget_AddChatMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBullCowUserWidget_AddChatMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBullCowUserWidget::execAddChatMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddChatMessage(Z_Param_Message);
	P_NATIVE_END;
}
// End Class UBullCowUserWidget Function AddChatMessage

// Begin Class UBullCowUserWidget Function AddChatMessageToUI
struct BullCowUserWidget_eventAddChatMessageToUI_Parms
{
	FString ChatMessage;
};
static const FName NAME_UBullCowUserWidget_AddChatMessageToUI = FName(TEXT("AddChatMessageToUI"));
void UBullCowUserWidget::AddChatMessageToUI(const FString& ChatMessage)
{
	BullCowUserWidget_eventAddChatMessageToUI_Parms Parms;
	Parms.ChatMessage=ChatMessage;
	UFunction* Func = FindFunctionChecked(NAME_UBullCowUserWidget_AddChatMessageToUI);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UBullCowUserWidget_AddChatMessageToUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/BullCowUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ChatMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBullCowUserWidget_AddChatMessageToUI_Statics::NewProp_ChatMessage = { "ChatMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BullCowUserWidget_eventAddChatMessageToUI_Parms, ChatMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatMessage_MetaData), NewProp_ChatMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBullCowUserWidget_AddChatMessageToUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBullCowUserWidget_AddChatMessageToUI_Statics::NewProp_ChatMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBullCowUserWidget_AddChatMessageToUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBullCowUserWidget_AddChatMessageToUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBullCowUserWidget, nullptr, "AddChatMessageToUI", nullptr, nullptr, Z_Construct_UFunction_UBullCowUserWidget_AddChatMessageToUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBullCowUserWidget_AddChatMessageToUI_Statics::PropPointers), sizeof(BullCowUserWidget_eventAddChatMessageToUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBullCowUserWidget_AddChatMessageToUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBullCowUserWidget_AddChatMessageToUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(BullCowUserWidget_eventAddChatMessageToUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBullCowUserWidget_AddChatMessageToUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBullCowUserWidget_AddChatMessageToUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBullCowUserWidget Function AddChatMessageToUI

// Begin Class UBullCowUserWidget Function OnChatInputTextCommitted
struct Z_Construct_UFunction_UBullCowUserWidget_OnChatInputTextCommitted_Statics
{
	struct BullCowUserWidget_eventOnChatInputTextCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/BullCowUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBullCowUserWidget_OnChatInputTextCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BullCowUserWidget_eventOnChatInputTextCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBullCowUserWidget_OnChatInputTextCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BullCowUserWidget_eventOnChatInputTextCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBullCowUserWidget_OnChatInputTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBullCowUserWidget_OnChatInputTextCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBullCowUserWidget_OnChatInputTextCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBullCowUserWidget_OnChatInputTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBullCowUserWidget_OnChatInputTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBullCowUserWidget, nullptr, "OnChatInputTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UBullCowUserWidget_OnChatInputTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBullCowUserWidget_OnChatInputTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBullCowUserWidget_OnChatInputTextCommitted_Statics::BullCowUserWidget_eventOnChatInputTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBullCowUserWidget_OnChatInputTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBullCowUserWidget_OnChatInputTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBullCowUserWidget_OnChatInputTextCommitted_Statics::BullCowUserWidget_eventOnChatInputTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBullCowUserWidget_OnChatInputTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBullCowUserWidget_OnChatInputTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBullCowUserWidget::execOnChatInputTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnChatInputTextCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UBullCowUserWidget Function OnChatInputTextCommitted

// Begin Class UBullCowUserWidget
void UBullCowUserWidget::StaticRegisterNativesUBullCowUserWidget()
{
	UClass* Class = UBullCowUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddChatMessage", &UBullCowUserWidget::execAddChatMessage },
		{ "OnChatInputTextCommitted", &UBullCowUserWidget::execOnChatInputTextCommitted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBullCowUserWidget);
UClass* Z_Construct_UClass_UBullCowUserWidget_NoRegister()
{
	return UBullCowUserWidget::StaticClass();
}
struct Z_Construct_UClass_UBullCowUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/BullCowUserWidget.h" },
		{ "ModuleRelativePath", "UI/BullCowUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditableTextBox_ChatInput_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BullCowUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBox_ChatLog_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BullCowUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatLineWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "UI/BullCowUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Notification_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BullCowUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditableTextBox_ChatInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScrollBox_ChatLog;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChatLineWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Notification;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBullCowUserWidget_AddChatMessage, "AddChatMessage" }, // 616137504
		{ &Z_Construct_UFunction_UBullCowUserWidget_AddChatMessageToUI, "AddChatMessageToUI" }, // 1813171943
		{ &Z_Construct_UFunction_UBullCowUserWidget_OnChatInputTextCommitted, "OnChatInputTextCommitted" }, // 288437590
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBullCowUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBullCowUserWidget_Statics::NewProp_EditableTextBox_ChatInput = { "EditableTextBox_ChatInput", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBullCowUserWidget, EditableTextBox_ChatInput), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditableTextBox_ChatInput_MetaData), NewProp_EditableTextBox_ChatInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBullCowUserWidget_Statics::NewProp_ScrollBox_ChatLog = { "ScrollBox_ChatLog", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBullCowUserWidget, ScrollBox_ChatLog), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScrollBox_ChatLog_MetaData), NewProp_ScrollBox_ChatLog_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBullCowUserWidget_Statics::NewProp_ChatLineWidgetClass = { "ChatLineWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBullCowUserWidget, ChatLineWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatLineWidgetClass_MetaData), NewProp_ChatLineWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBullCowUserWidget_Statics::NewProp_TextBlock_Notification = { "TextBlock_Notification", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBullCowUserWidget, TextBlock_Notification), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_Notification_MetaData), NewProp_TextBlock_Notification_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBullCowUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBullCowUserWidget_Statics::NewProp_EditableTextBox_ChatInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBullCowUserWidget_Statics::NewProp_ScrollBox_ChatLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBullCowUserWidget_Statics::NewProp_ChatLineWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBullCowUserWidget_Statics::NewProp_TextBlock_Notification,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBullCowUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBullCowUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BullsAndCows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBullCowUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBullCowUserWidget_Statics::ClassParams = {
	&UBullCowUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBullCowUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBullCowUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBullCowUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBullCowUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBullCowUserWidget()
{
	if (!Z_Registration_Info_UClass_UBullCowUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBullCowUserWidget.OuterSingleton, Z_Construct_UClass_UBullCowUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBullCowUserWidget.OuterSingleton;
}
template<> BULLSANDCOWS_API UClass* StaticClass<UBullCowUserWidget>()
{
	return UBullCowUserWidget::StaticClass();
}
UBullCowUserWidget::UBullCowUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBullCowUserWidget);
UBullCowUserWidget::~UBullCowUserWidget() {}
// End Class UBullCowUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_UI_BullCowUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBullCowUserWidget, UBullCowUserWidget::StaticClass, TEXT("UBullCowUserWidget"), &Z_Registration_Info_UClass_UBullCowUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBullCowUserWidget), 3503783866U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_UI_BullCowUserWidget_h_1041010720(TEXT("/Script/BullsAndCows"),
	Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_UI_BullCowUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_UI_BullCowUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
