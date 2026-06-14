// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BullsAndCows/PlayerController/BullCowPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBullCowPlayerController() {}

// Begin Cross Module References
BULLSANDCOWS_API UClass* Z_Construct_UClass_ABullCowPlayerController();
BULLSANDCOWS_API UClass* Z_Construct_UClass_ABullCowPlayerController_NoRegister();
BULLSANDCOWS_API UClass* Z_Construct_UClass_UBullCowUserWidget_NoRegister();
BULLSANDCOWS_API UClass* Z_Construct_UClass_UEndGameUserWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_BullsAndCows();
// End Cross Module References

// Begin Class ABullCowPlayerController Function Client_ReceiveChatMessage
struct BullCowPlayerController_eventClient_ReceiveChatMessage_Parms
{
	FString InMessage;
};
static const FName NAME_ABullCowPlayerController_Client_ReceiveChatMessage = FName(TEXT("Client_ReceiveChatMessage"));
void ABullCowPlayerController::Client_ReceiveChatMessage(const FString& InMessage)
{
	BullCowPlayerController_eventClient_ReceiveChatMessage_Parms Parms;
	Parms.InMessage=InMessage;
	UFunction* Func = FindFunctionChecked(NAME_ABullCowPlayerController_Client_ReceiveChatMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABullCowPlayerController_Client_ReceiveChatMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/BullCowPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABullCowPlayerController_Client_ReceiveChatMessage_Statics::NewProp_InMessage = { "InMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BullCowPlayerController_eventClient_ReceiveChatMessage_Parms, InMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMessage_MetaData), NewProp_InMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABullCowPlayerController_Client_ReceiveChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullCowPlayerController_Client_ReceiveChatMessage_Statics::NewProp_InMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullCowPlayerController_Client_ReceiveChatMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABullCowPlayerController_Client_ReceiveChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABullCowPlayerController, nullptr, "Client_ReceiveChatMessage", nullptr, nullptr, Z_Construct_UFunction_ABullCowPlayerController_Client_ReceiveChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABullCowPlayerController_Client_ReceiveChatMessage_Statics::PropPointers), sizeof(BullCowPlayerController_eventClient_ReceiveChatMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullCowPlayerController_Client_ReceiveChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABullCowPlayerController_Client_ReceiveChatMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(BullCowPlayerController_eventClient_ReceiveChatMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABullCowPlayerController_Client_ReceiveChatMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABullCowPlayerController_Client_ReceiveChatMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABullCowPlayerController::execClient_ReceiveChatMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_ReceiveChatMessage_Implementation(Z_Param_InMessage);
	P_NATIVE_END;
}
// End Class ABullCowPlayerController Function Client_ReceiveChatMessage

// Begin Class ABullCowPlayerController Function Client_UpdateNotification
struct BullCowPlayerController_eventClient_UpdateNotification_Parms
{
	FString NewNotification;
};
static const FName NAME_ABullCowPlayerController_Client_UpdateNotification = FName(TEXT("Client_UpdateNotification"));
void ABullCowPlayerController::Client_UpdateNotification(const FString& NewNotification)
{
	BullCowPlayerController_eventClient_UpdateNotification_Parms Parms;
	Parms.NewNotification=NewNotification;
	UFunction* Func = FindFunctionChecked(NAME_ABullCowPlayerController_Client_UpdateNotification);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABullCowPlayerController_Client_UpdateNotification_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/BullCowPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewNotification_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewNotification;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABullCowPlayerController_Client_UpdateNotification_Statics::NewProp_NewNotification = { "NewNotification", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BullCowPlayerController_eventClient_UpdateNotification_Parms, NewNotification), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewNotification_MetaData), NewProp_NewNotification_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABullCowPlayerController_Client_UpdateNotification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullCowPlayerController_Client_UpdateNotification_Statics::NewProp_NewNotification,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullCowPlayerController_Client_UpdateNotification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABullCowPlayerController_Client_UpdateNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABullCowPlayerController, nullptr, "Client_UpdateNotification", nullptr, nullptr, Z_Construct_UFunction_ABullCowPlayerController_Client_UpdateNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABullCowPlayerController_Client_UpdateNotification_Statics::PropPointers), sizeof(BullCowPlayerController_eventClient_UpdateNotification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullCowPlayerController_Client_UpdateNotification_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABullCowPlayerController_Client_UpdateNotification_Statics::Function_MetaDataParams) };
static_assert(sizeof(BullCowPlayerController_eventClient_UpdateNotification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABullCowPlayerController_Client_UpdateNotification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABullCowPlayerController_Client_UpdateNotification_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABullCowPlayerController::execClient_UpdateNotification)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewNotification);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Client_UpdateNotification_Implementation(Z_Param_NewNotification);
	P_NATIVE_END;
}
// End Class ABullCowPlayerController Function Client_UpdateNotification

// Begin Class ABullCowPlayerController Function ClientRPCReturnToTitle
static const FName NAME_ABullCowPlayerController_ClientRPCReturnToTitle = FName(TEXT("ClientRPCReturnToTitle"));
void ABullCowPlayerController::ClientRPCReturnToTitle()
{
	UFunction* Func = FindFunctionChecked(NAME_ABullCowPlayerController_ClientRPCReturnToTitle);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ABullCowPlayerController_ClientRPCReturnToTitle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/BullCowPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABullCowPlayerController_ClientRPCReturnToTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABullCowPlayerController, nullptr, "ClientRPCReturnToTitle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullCowPlayerController_ClientRPCReturnToTitle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABullCowPlayerController_ClientRPCReturnToTitle_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABullCowPlayerController_ClientRPCReturnToTitle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABullCowPlayerController_ClientRPCReturnToTitle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABullCowPlayerController::execClientRPCReturnToTitle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientRPCReturnToTitle_Implementation();
	P_NATIVE_END;
}
// End Class ABullCowPlayerController Function ClientRPCReturnToTitle

// Begin Class ABullCowPlayerController Function ClientRPCShowEndGameUserWidget
struct BullCowPlayerController_eventClientRPCShowEndGameUserWidget_Parms
{
	int32 Rank;
};
static const FName NAME_ABullCowPlayerController_ClientRPCShowEndGameUserWidget = FName(TEXT("ClientRPCShowEndGameUserWidget"));
void ABullCowPlayerController::ClientRPCShowEndGameUserWidget(int32 Rank)
{
	BullCowPlayerController_eventClientRPCShowEndGameUserWidget_Parms Parms;
	Parms.Rank=Rank;
	UFunction* Func = FindFunctionChecked(NAME_ABullCowPlayerController_ClientRPCShowEndGameUserWidget);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABullCowPlayerController_ClientRPCShowEndGameUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/BullCowPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Rank;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABullCowPlayerController_ClientRPCShowEndGameUserWidget_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BullCowPlayerController_eventClientRPCShowEndGameUserWidget_Parms, Rank), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABullCowPlayerController_ClientRPCShowEndGameUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullCowPlayerController_ClientRPCShowEndGameUserWidget_Statics::NewProp_Rank,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullCowPlayerController_ClientRPCShowEndGameUserWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABullCowPlayerController_ClientRPCShowEndGameUserWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABullCowPlayerController, nullptr, "ClientRPCShowEndGameUserWidget", nullptr, nullptr, Z_Construct_UFunction_ABullCowPlayerController_ClientRPCShowEndGameUserWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABullCowPlayerController_ClientRPCShowEndGameUserWidget_Statics::PropPointers), sizeof(BullCowPlayerController_eventClientRPCShowEndGameUserWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullCowPlayerController_ClientRPCShowEndGameUserWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABullCowPlayerController_ClientRPCShowEndGameUserWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(BullCowPlayerController_eventClientRPCShowEndGameUserWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABullCowPlayerController_ClientRPCShowEndGameUserWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABullCowPlayerController_ClientRPCShowEndGameUserWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABullCowPlayerController::execClientRPCShowEndGameUserWidget)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Rank);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientRPCShowEndGameUserWidget_Implementation(Z_Param_Rank);
	P_NATIVE_END;
}
// End Class ABullCowPlayerController Function ClientRPCShowEndGameUserWidget

// Begin Class ABullCowPlayerController Function Server_SendChatMessage
struct BullCowPlayerController_eventServer_SendChatMessage_Parms
{
	FString InMessage;
};
static const FName NAME_ABullCowPlayerController_Server_SendChatMessage = FName(TEXT("Server_SendChatMessage"));
void ABullCowPlayerController::Server_SendChatMessage(const FString& InMessage)
{
	BullCowPlayerController_eventServer_SendChatMessage_Parms Parms;
	Parms.InMessage=InMessage;
	UFunction* Func = FindFunctionChecked(NAME_ABullCowPlayerController_Server_SendChatMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABullCowPlayerController_Server_SendChatMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerController/BullCowPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABullCowPlayerController_Server_SendChatMessage_Statics::NewProp_InMessage = { "InMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BullCowPlayerController_eventServer_SendChatMessage_Parms, InMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMessage_MetaData), NewProp_InMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABullCowPlayerController_Server_SendChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullCowPlayerController_Server_SendChatMessage_Statics::NewProp_InMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullCowPlayerController_Server_SendChatMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABullCowPlayerController_Server_SendChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABullCowPlayerController, nullptr, "Server_SendChatMessage", nullptr, nullptr, Z_Construct_UFunction_ABullCowPlayerController_Server_SendChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABullCowPlayerController_Server_SendChatMessage_Statics::PropPointers), sizeof(BullCowPlayerController_eventServer_SendChatMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullCowPlayerController_Server_SendChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABullCowPlayerController_Server_SendChatMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(BullCowPlayerController_eventServer_SendChatMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABullCowPlayerController_Server_SendChatMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABullCowPlayerController_Server_SendChatMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABullCowPlayerController::execServer_SendChatMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_SendChatMessage_Implementation(Z_Param_InMessage);
	P_NATIVE_END;
}
// End Class ABullCowPlayerController Function Server_SendChatMessage

// Begin Class ABullCowPlayerController
void ABullCowPlayerController::StaticRegisterNativesABullCowPlayerController()
{
	UClass* Class = ABullCowPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Client_ReceiveChatMessage", &ABullCowPlayerController::execClient_ReceiveChatMessage },
		{ "Client_UpdateNotification", &ABullCowPlayerController::execClient_UpdateNotification },
		{ "ClientRPCReturnToTitle", &ABullCowPlayerController::execClientRPCReturnToTitle },
		{ "ClientRPCShowEndGameUserWidget", &ABullCowPlayerController::execClientRPCShowEndGameUserWidget },
		{ "Server_SendChatMessage", &ABullCowPlayerController::execServer_SendChatMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABullCowPlayerController);
UClass* Z_Construct_UClass_ABullCowPlayerController_NoRegister()
{
	return ABullCowPlayerController::StaticClass();
}
struct Z_Construct_UClass_ABullCowPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerController/BullCowPlayerController.h" },
		{ "ModuleRelativePath", "PlayerController/BullCowPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerScore_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "PlayerController/BullCowPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationText_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "PlayerController/BullCowPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BullCowUserWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "PlayerController/BullCowPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BullCowUserWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerController/BullCowPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndGameUserWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "PlayerController/BullCowPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndGameUserWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerController/BullCowPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerScore;
	static const UECodeGen_Private::FTextPropertyParams NewProp_NotificationText;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BullCowUserWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BullCowUserWidgetInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EndGameUserWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndGameUserWidgetInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABullCowPlayerController_Client_ReceiveChatMessage, "Client_ReceiveChatMessage" }, // 4020546797
		{ &Z_Construct_UFunction_ABullCowPlayerController_Client_UpdateNotification, "Client_UpdateNotification" }, // 1852166077
		{ &Z_Construct_UFunction_ABullCowPlayerController_ClientRPCReturnToTitle, "ClientRPCReturnToTitle" }, // 3949010325
		{ &Z_Construct_UFunction_ABullCowPlayerController_ClientRPCShowEndGameUserWidget, "ClientRPCShowEndGameUserWidget" }, // 2492983670
		{ &Z_Construct_UFunction_ABullCowPlayerController_Server_SendChatMessage, "Server_SendChatMessage" }, // 3123792198
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABullCowPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABullCowPlayerController_Statics::NewProp_PlayerScore = { "PlayerScore", nullptr, (EPropertyFlags)0x0010000000020025, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullCowPlayerController, PlayerScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerScore_MetaData), NewProp_PlayerScore_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ABullCowPlayerController_Statics::NewProp_NotificationText = { "NotificationText", nullptr, (EPropertyFlags)0x0010000000020025, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullCowPlayerController, NotificationText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationText_MetaData), NewProp_NotificationText_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABullCowPlayerController_Statics::NewProp_BullCowUserWidgetClass = { "BullCowUserWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullCowPlayerController, BullCowUserWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBullCowUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BullCowUserWidgetClass_MetaData), NewProp_BullCowUserWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullCowPlayerController_Statics::NewProp_BullCowUserWidgetInstance = { "BullCowUserWidgetInstance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullCowPlayerController, BullCowUserWidgetInstance), Z_Construct_UClass_UBullCowUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BullCowUserWidgetInstance_MetaData), NewProp_BullCowUserWidgetInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABullCowPlayerController_Statics::NewProp_EndGameUserWidgetClass = { "EndGameUserWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullCowPlayerController, EndGameUserWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UEndGameUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndGameUserWidgetClass_MetaData), NewProp_EndGameUserWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullCowPlayerController_Statics::NewProp_EndGameUserWidgetInstance = { "EndGameUserWidgetInstance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullCowPlayerController, EndGameUserWidgetInstance), Z_Construct_UClass_UEndGameUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndGameUserWidgetInstance_MetaData), NewProp_EndGameUserWidgetInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABullCowPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullCowPlayerController_Statics::NewProp_PlayerScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullCowPlayerController_Statics::NewProp_NotificationText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullCowPlayerController_Statics::NewProp_BullCowUserWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullCowPlayerController_Statics::NewProp_BullCowUserWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullCowPlayerController_Statics::NewProp_EndGameUserWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullCowPlayerController_Statics::NewProp_EndGameUserWidgetInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABullCowPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABullCowPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_BullsAndCows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABullCowPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABullCowPlayerController_Statics::ClassParams = {
	&ABullCowPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABullCowPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABullCowPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABullCowPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABullCowPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABullCowPlayerController()
{
	if (!Z_Registration_Info_UClass_ABullCowPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABullCowPlayerController.OuterSingleton, Z_Construct_UClass_ABullCowPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABullCowPlayerController.OuterSingleton;
}
template<> BULLSANDCOWS_API UClass* StaticClass<ABullCowPlayerController>()
{
	return ABullCowPlayerController::StaticClass();
}
void ABullCowPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_PlayerScore(TEXT("PlayerScore"));
	static const FName Name_NotificationText(TEXT("NotificationText"));
	const bool bIsValid = true
		&& Name_PlayerScore == ClassReps[(int32)ENetFields_Private::PlayerScore].Property->GetFName()
		&& Name_NotificationText == ClassReps[(int32)ENetFields_Private::NotificationText].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABullCowPlayerController"));
}
ABullCowPlayerController::ABullCowPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABullCowPlayerController);
ABullCowPlayerController::~ABullCowPlayerController() {}
// End Class ABullCowPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_PlayerController_BullCowPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABullCowPlayerController, ABullCowPlayerController::StaticClass, TEXT("ABullCowPlayerController"), &Z_Registration_Info_UClass_ABullCowPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABullCowPlayerController), 1642573575U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_PlayerController_BullCowPlayerController_h_1305940846(TEXT("/Script/BullsAndCows"),
	Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_PlayerController_BullCowPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_PlayerController_BullCowPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
