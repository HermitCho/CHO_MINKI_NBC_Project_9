// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BullsAndCows/GameMode/BullCowGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBullCowGameModeBase() {}

// Begin Cross Module References
BULLSANDCOWS_API UClass* Z_Construct_UClass_ABullCowGameModeBase();
BULLSANDCOWS_API UClass* Z_Construct_UClass_ABullCowGameModeBase_NoRegister();
BULLSANDCOWS_API UClass* Z_Construct_UClass_ABullCowPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BullsAndCows();
// End Cross Module References

// Begin Class ABullCowGameModeBase Function OnMainTimerElapsed
struct Z_Construct_UFunction_ABullCowGameModeBase_OnMainTimerElapsed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameMode/BullCowGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABullCowGameModeBase_OnMainTimerElapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABullCowGameModeBase, nullptr, "OnMainTimerElapsed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABullCowGameModeBase_OnMainTimerElapsed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABullCowGameModeBase_OnMainTimerElapsed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABullCowGameModeBase_OnMainTimerElapsed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABullCowGameModeBase_OnMainTimerElapsed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABullCowGameModeBase::execOnMainTimerElapsed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMainTimerElapsed();
	P_NATIVE_END;
}
// End Class ABullCowGameModeBase Function OnMainTimerElapsed

// Begin Class ABullCowGameModeBase
void ABullCowGameModeBase::StaticRegisterNativesABullCowGameModeBase()
{
	UClass* Class = ABullCowGameModeBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnMainTimerElapsed", &ABullCowGameModeBase::execOnMainTimerElapsed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABullCowGameModeBase);
UClass* Z_Construct_UClass_ABullCowGameModeBase_NoRegister()
{
	return ABullCowGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ABullCowGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/BullCowGameModeBase.h" },
		{ "ModuleRelativePath", "GameMode/BullCowGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaitingTime_MetaData[] = {
		{ "Category", "BullCowGameModeBase" },
		{ "ModuleRelativePath", "GameMode/BullCowGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGameTime_MetaData[] = {
		{ "Category", "BullCowGameModeBase" },
		{ "ModuleRelativePath", "GameMode/BullCowGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainWaitingTime_MetaData[] = {
		{ "Category", "Game Rules" },
		{ "ModuleRelativePath", "GameMode/BullCowGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainPlayingTime_MetaData[] = {
		{ "Category", "Game Rules" },
		{ "ModuleRelativePath", "GameMode/BullCowGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndingTime_MetaData[] = {
		{ "Category", "BullCowGameModeBase" },
		{ "ModuleRelativePath", "GameMode/BullCowGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetScore_MetaData[] = {
		{ "Category", "Rules" },
		{ "ModuleRelativePath", "GameMode/BullCowGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllPlayerControllers_MetaData[] = {
		{ "ModuleRelativePath", "GameMode/BullCowGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WaitingTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InGameTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainWaitingTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainPlayingTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndingTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetScore;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllPlayerControllers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllPlayerControllers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABullCowGameModeBase_OnMainTimerElapsed, "OnMainTimerElapsed" }, // 993064181
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABullCowGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABullCowGameModeBase_Statics::NewProp_WaitingTime = { "WaitingTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullCowGameModeBase, WaitingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaitingTime_MetaData), NewProp_WaitingTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABullCowGameModeBase_Statics::NewProp_InGameTime = { "InGameTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullCowGameModeBase, InGameTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGameTime_MetaData), NewProp_InGameTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABullCowGameModeBase_Statics::NewProp_RemainWaitingTime = { "RemainWaitingTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullCowGameModeBase, RemainWaitingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainWaitingTime_MetaData), NewProp_RemainWaitingTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABullCowGameModeBase_Statics::NewProp_RemainPlayingTime = { "RemainPlayingTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullCowGameModeBase, RemainPlayingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainPlayingTime_MetaData), NewProp_RemainPlayingTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABullCowGameModeBase_Statics::NewProp_EndingTime = { "EndingTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullCowGameModeBase, EndingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndingTime_MetaData), NewProp_EndingTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABullCowGameModeBase_Statics::NewProp_TargetScore = { "TargetScore", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullCowGameModeBase, TargetScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetScore_MetaData), NewProp_TargetScore_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABullCowGameModeBase_Statics::NewProp_AllPlayerControllers_Inner = { "AllPlayerControllers", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABullCowPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABullCowGameModeBase_Statics::NewProp_AllPlayerControllers = { "AllPlayerControllers", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullCowGameModeBase, AllPlayerControllers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllPlayerControllers_MetaData), NewProp_AllPlayerControllers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABullCowGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullCowGameModeBase_Statics::NewProp_WaitingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullCowGameModeBase_Statics::NewProp_InGameTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullCowGameModeBase_Statics::NewProp_RemainWaitingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullCowGameModeBase_Statics::NewProp_RemainPlayingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullCowGameModeBase_Statics::NewProp_EndingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullCowGameModeBase_Statics::NewProp_TargetScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullCowGameModeBase_Statics::NewProp_AllPlayerControllers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullCowGameModeBase_Statics::NewProp_AllPlayerControllers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABullCowGameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABullCowGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BullsAndCows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABullCowGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABullCowGameModeBase_Statics::ClassParams = {
	&ABullCowGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABullCowGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABullCowGameModeBase_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABullCowGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABullCowGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABullCowGameModeBase()
{
	if (!Z_Registration_Info_UClass_ABullCowGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABullCowGameModeBase.OuterSingleton, Z_Construct_UClass_ABullCowGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABullCowGameModeBase.OuterSingleton;
}
template<> BULLSANDCOWS_API UClass* StaticClass<ABullCowGameModeBase>()
{
	return ABullCowGameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABullCowGameModeBase);
ABullCowGameModeBase::~ABullCowGameModeBase() {}
// End Class ABullCowGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_GameMode_BullCowGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABullCowGameModeBase, ABullCowGameModeBase::StaticClass, TEXT("ABullCowGameModeBase"), &Z_Registration_Info_UClass_ABullCowGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABullCowGameModeBase), 3488190486U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_GameMode_BullCowGameModeBase_h_1299193513(TEXT("/Script/BullsAndCows"),
	Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_GameMode_BullCowGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_GameMode_BullCowGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
