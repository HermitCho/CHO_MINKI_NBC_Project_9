// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BullsAndCows/GameState/TitleGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTitleGameState() {}

// Begin Cross Module References
BULLSANDCOWS_API UClass* Z_Construct_UClass_ATitleGameState();
BULLSANDCOWS_API UClass* Z_Construct_UClass_ATitleGameState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
UPackage* Z_Construct_UPackage__Script_BullsAndCows();
// End Cross Module References

// Begin Class ATitleGameState Function OnRep_PlayerCount
struct Z_Construct_UFunction_ATitleGameState_OnRep_PlayerCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameState/TitleGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATitleGameState_OnRep_PlayerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATitleGameState, nullptr, "OnRep_PlayerCount", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATitleGameState_OnRep_PlayerCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATitleGameState_OnRep_PlayerCount_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATitleGameState_OnRep_PlayerCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATitleGameState_OnRep_PlayerCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATitleGameState::execOnRep_PlayerCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PlayerCount();
	P_NATIVE_END;
}
// End Class ATitleGameState Function OnRep_PlayerCount

// Begin Class ATitleGameState
void ATitleGameState::StaticRegisterNativesATitleGameState()
{
	UClass* Class = ATitleGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_PlayerCount", &ATitleGameState::execOnRep_PlayerCount },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATitleGameState);
UClass* Z_Construct_UClass_ATitleGameState_NoRegister()
{
	return ATitleGameState::StaticClass();
}
struct Z_Construct_UClass_ATitleGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameState/TitleGameState.h" },
		{ "ModuleRelativePath", "GameState/TitleGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayerCount_MetaData[] = {
		{ "ModuleRelativePath", "GameState/TitleGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredPlayerCount_MetaData[] = {
		{ "Category", "TitleGameState" },
		{ "ModuleRelativePath", "GameState/TitleGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPlayerCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredPlayerCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATitleGameState_OnRep_PlayerCount, "OnRep_PlayerCount" }, // 3711007534
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATitleGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATitleGameState_Statics::NewProp_CurrentPlayerCount = { "CurrentPlayerCount", "OnRep_PlayerCount", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATitleGameState, CurrentPlayerCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPlayerCount_MetaData), NewProp_CurrentPlayerCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATitleGameState_Statics::NewProp_RequiredPlayerCount = { "RequiredPlayerCount", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATitleGameState, RequiredPlayerCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredPlayerCount_MetaData), NewProp_RequiredPlayerCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATitleGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATitleGameState_Statics::NewProp_CurrentPlayerCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATitleGameState_Statics::NewProp_RequiredPlayerCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATitleGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATitleGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BullsAndCows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATitleGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATitleGameState_Statics::ClassParams = {
	&ATitleGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATitleGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATitleGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATitleGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ATitleGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATitleGameState()
{
	if (!Z_Registration_Info_UClass_ATitleGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATitleGameState.OuterSingleton, Z_Construct_UClass_ATitleGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATitleGameState.OuterSingleton;
}
template<> BULLSANDCOWS_API UClass* StaticClass<ATitleGameState>()
{
	return ATitleGameState::StaticClass();
}
void ATitleGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentPlayerCount(TEXT("CurrentPlayerCount"));
	const bool bIsValid = true
		&& Name_CurrentPlayerCount == ClassReps[(int32)ENetFields_Private::CurrentPlayerCount].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATitleGameState"));
}
ATitleGameState::ATitleGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATitleGameState);
ATitleGameState::~ATitleGameState() {}
// End Class ATitleGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_GameState_TitleGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATitleGameState, ATitleGameState::StaticClass, TEXT("ATitleGameState"), &Z_Registration_Info_UClass_ATitleGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATitleGameState), 2447003159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_GameState_TitleGameState_h_509420779(TEXT("/Script/BullsAndCows"),
	Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_GameState_TitleGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_GameState_TitleGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
