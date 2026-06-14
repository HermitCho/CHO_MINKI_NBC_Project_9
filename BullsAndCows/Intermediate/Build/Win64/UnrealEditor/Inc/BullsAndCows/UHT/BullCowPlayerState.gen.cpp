// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BullsAndCows/PlayerState/BullCowPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBullCowPlayerState() {}

// Begin Cross Module References
BULLSANDCOWS_API UClass* Z_Construct_UClass_ABullCowPlayerState();
BULLSANDCOWS_API UClass* Z_Construct_UClass_ABullCowPlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
UPackage* Z_Construct_UPackage__Script_BullsAndCows();
// End Cross Module References

// Begin Class ABullCowPlayerState Function GetTryCountString
struct Z_Construct_UFunction_ABullCowPlayerState_GetTryCountString_Statics
{
	struct BullCowPlayerState_eventGetTryCountString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "PlayerState/BullCowPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABullCowPlayerState_GetTryCountString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BullCowPlayerState_eventGetTryCountString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABullCowPlayerState_GetTryCountString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABullCowPlayerState_GetTryCountString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullCowPlayerState_GetTryCountString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABullCowPlayerState_GetTryCountString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABullCowPlayerState, nullptr, "GetTryCountString", nullptr, nullptr, Z_Construct_UFunction_ABullCowPlayerState_GetTryCountString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABullCowPlayerState_GetTryCountString_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABullCowPlayerState_GetTryCountString_Statics::BullCowPlayerState_eventGetTryCountString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullCowPlayerState_GetTryCountString_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABullCowPlayerState_GetTryCountString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABullCowPlayerState_GetTryCountString_Statics::BullCowPlayerState_eventGetTryCountString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABullCowPlayerState_GetTryCountString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABullCowPlayerState_GetTryCountString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABullCowPlayerState::execGetTryCountString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetTryCountString();
	P_NATIVE_END;
}
// End Class ABullCowPlayerState Function GetTryCountString

// Begin Class ABullCowPlayerState
void ABullCowPlayerState::StaticRegisterNativesABullCowPlayerState()
{
	UClass* Class = ABullCowPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTryCountString", &ABullCowPlayerState::execGetTryCountString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABullCowPlayerState);
UClass* Z_Construct_UClass_ABullCowPlayerState_NoRegister()
{
	return ABullCowPlayerState::StaticClass();
}
struct Z_Construct_UClass_ABullCowPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlayerState/BullCowPlayerState.h" },
		{ "ModuleRelativePath", "PlayerState/BullCowPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerScore_MetaData[] = {
		{ "Category", "Game Data" },
		{ "ModuleRelativePath", "PlayerState/BullCowPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTry_MetaData[] = {
		{ "Category", "Game Data" },
		{ "ModuleRelativePath", "PlayerState/BullCowPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGuessCount_MetaData[] = {
		{ "Category", "Game Data" },
		{ "ModuleRelativePath", "PlayerState/BullCowPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasActedThisTurn_MetaData[] = {
		{ "Category", "Game Data" },
		{ "ModuleRelativePath", "PlayerState/BullCowPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentGuessCount;
	static void NewProp_bHasActedThisTurn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasActedThisTurn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABullCowPlayerState_GetTryCountString, "GetTryCountString" }, // 2457202052
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABullCowPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABullCowPlayerState_Statics::NewProp_PlayerScore = { "PlayerScore", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullCowPlayerState, PlayerScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerScore_MetaData), NewProp_PlayerScore_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABullCowPlayerState_Statics::NewProp_MaxTry = { "MaxTry", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullCowPlayerState, MaxTry), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTry_MetaData), NewProp_MaxTry_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABullCowPlayerState_Statics::NewProp_CurrentGuessCount = { "CurrentGuessCount", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullCowPlayerState, CurrentGuessCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGuessCount_MetaData), NewProp_CurrentGuessCount_MetaData) };
void Z_Construct_UClass_ABullCowPlayerState_Statics::NewProp_bHasActedThisTurn_SetBit(void* Obj)
{
	((ABullCowPlayerState*)Obj)->bHasActedThisTurn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABullCowPlayerState_Statics::NewProp_bHasActedThisTurn = { "bHasActedThisTurn", nullptr, (EPropertyFlags)0x0010000000020025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABullCowPlayerState), &Z_Construct_UClass_ABullCowPlayerState_Statics::NewProp_bHasActedThisTurn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasActedThisTurn_MetaData), NewProp_bHasActedThisTurn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABullCowPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullCowPlayerState_Statics::NewProp_PlayerScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullCowPlayerState_Statics::NewProp_MaxTry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullCowPlayerState_Statics::NewProp_CurrentGuessCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullCowPlayerState_Statics::NewProp_bHasActedThisTurn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABullCowPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABullCowPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_BullsAndCows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABullCowPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABullCowPlayerState_Statics::ClassParams = {
	&ABullCowPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABullCowPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABullCowPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABullCowPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ABullCowPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABullCowPlayerState()
{
	if (!Z_Registration_Info_UClass_ABullCowPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABullCowPlayerState.OuterSingleton, Z_Construct_UClass_ABullCowPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABullCowPlayerState.OuterSingleton;
}
template<> BULLSANDCOWS_API UClass* StaticClass<ABullCowPlayerState>()
{
	return ABullCowPlayerState::StaticClass();
}
void ABullCowPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_PlayerScore(TEXT("PlayerScore"));
	static const FName Name_MaxTry(TEXT("MaxTry"));
	static const FName Name_CurrentGuessCount(TEXT("CurrentGuessCount"));
	static const FName Name_bHasActedThisTurn(TEXT("bHasActedThisTurn"));
	const bool bIsValid = true
		&& Name_PlayerScore == ClassReps[(int32)ENetFields_Private::PlayerScore].Property->GetFName()
		&& Name_MaxTry == ClassReps[(int32)ENetFields_Private::MaxTry].Property->GetFName()
		&& Name_CurrentGuessCount == ClassReps[(int32)ENetFields_Private::CurrentGuessCount].Property->GetFName()
		&& Name_bHasActedThisTurn == ClassReps[(int32)ENetFields_Private::bHasActedThisTurn].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABullCowPlayerState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABullCowPlayerState);
ABullCowPlayerState::~ABullCowPlayerState() {}
// End Class ABullCowPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_PlayerState_BullCowPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABullCowPlayerState, ABullCowPlayerState::StaticClass, TEXT("ABullCowPlayerState"), &Z_Registration_Info_UClass_ABullCowPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABullCowPlayerState), 270126037U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_PlayerState_BullCowPlayerState_h_2947069507(TEXT("/Script/BullsAndCows"),
	Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_PlayerState_BullCowPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_PlayerState_BullCowPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
