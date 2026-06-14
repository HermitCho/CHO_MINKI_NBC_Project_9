// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BullsAndCows/GameState/BullCowGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBullCowGameStateBase() {}

// Begin Cross Module References
BULLSANDCOWS_API UClass* Z_Construct_UClass_ABullCowGameStateBase();
BULLSANDCOWS_API UClass* Z_Construct_UClass_ABullCowGameStateBase_NoRegister();
BULLSANDCOWS_API UEnum* Z_Construct_UEnum_BullsAndCows_EMatchState();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
UPackage* Z_Construct_UPackage__Script_BullsAndCows();
// End Cross Module References

// Begin Enum EMatchState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMatchState;
static UEnum* EMatchState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMatchState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMatchState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BullsAndCows_EMatchState, (UObject*)Z_Construct_UPackage__Script_BullsAndCows(), TEXT("EMatchState"));
	}
	return Z_Registration_Info_UEnum_EMatchState.OuterSingleton;
}
template<> BULLSANDCOWS_API UEnum* StaticEnum<EMatchState>()
{
	return EMatchState_StaticEnum();
}
struct Z_Construct_UEnum_BullsAndCows_EMatchState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "End.Name", "EMatchState::End" },
		{ "Ending.Name", "EMatchState::Ending" },
		{ "ModuleRelativePath", "GameState/BullCowGameStateBase.h" },
		{ "None.Name", "EMatchState::None" },
		{ "Playing.Name", "EMatchState::Playing" },
		{ "Waiting.Name", "EMatchState::Waiting" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMatchState::None", (int64)EMatchState::None },
		{ "EMatchState::Waiting", (int64)EMatchState::Waiting },
		{ "EMatchState::Playing", (int64)EMatchState::Playing },
		{ "EMatchState::Ending", (int64)EMatchState::Ending },
		{ "EMatchState::End", (int64)EMatchState::End },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BullsAndCows_EMatchState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BullsAndCows,
	nullptr,
	"EMatchState",
	"EMatchState",
	Z_Construct_UEnum_BullsAndCows_EMatchState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BullsAndCows_EMatchState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BullsAndCows_EMatchState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BullsAndCows_EMatchState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BullsAndCows_EMatchState()
{
	if (!Z_Registration_Info_UEnum_EMatchState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMatchState.InnerSingleton, Z_Construct_UEnum_BullsAndCows_EMatchState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMatchState.InnerSingleton;
}
// End Enum EMatchState

// Begin Class ABullCowGameStateBase
void ABullCowGameStateBase::StaticRegisterNativesABullCowGameStateBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABullCowGameStateBase);
UClass* Z_Construct_UClass_ABullCowGameStateBase_NoRegister()
{
	return ABullCowGameStateBase::StaticClass();
}
struct Z_Construct_UClass_ABullCowGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameState/BullCowGameStateBase.h" },
		{ "ModuleRelativePath", "GameState/BullCowGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlivePlayerControllerCount_MetaData[] = {
		{ "Category", "BullCowGameStateBase" },
		{ "ModuleRelativePath", "GameState/BullCowGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchState_MetaData[] = {
		{ "Category", "BullCowGameStateBase" },
		{ "ModuleRelativePath", "GameState/BullCowGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AlivePlayerControllerCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MatchState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MatchState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABullCowGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABullCowGameStateBase_Statics::NewProp_AlivePlayerControllerCount = { "AlivePlayerControllerCount", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullCowGameStateBase, AlivePlayerControllerCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlivePlayerControllerCount_MetaData), NewProp_AlivePlayerControllerCount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABullCowGameStateBase_Statics::NewProp_MatchState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABullCowGameStateBase_Statics::NewProp_MatchState = { "MatchState", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABullCowGameStateBase, MatchState), Z_Construct_UEnum_BullsAndCows_EMatchState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchState_MetaData), NewProp_MatchState_MetaData) }; // 3682865634
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABullCowGameStateBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullCowGameStateBase_Statics::NewProp_AlivePlayerControllerCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullCowGameStateBase_Statics::NewProp_MatchState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABullCowGameStateBase_Statics::NewProp_MatchState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABullCowGameStateBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABullCowGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BullsAndCows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABullCowGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABullCowGameStateBase_Statics::ClassParams = {
	&ABullCowGameStateBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABullCowGameStateBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABullCowGameStateBase_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABullCowGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABullCowGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABullCowGameStateBase()
{
	if (!Z_Registration_Info_UClass_ABullCowGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABullCowGameStateBase.OuterSingleton, Z_Construct_UClass_ABullCowGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABullCowGameStateBase.OuterSingleton;
}
template<> BULLSANDCOWS_API UClass* StaticClass<ABullCowGameStateBase>()
{
	return ABullCowGameStateBase::StaticClass();
}
void ABullCowGameStateBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_AlivePlayerControllerCount(TEXT("AlivePlayerControllerCount"));
	static const FName Name_MatchState(TEXT("MatchState"));
	const bool bIsValid = true
		&& Name_AlivePlayerControllerCount == ClassReps[(int32)ENetFields_Private::AlivePlayerControllerCount].Property->GetFName()
		&& Name_MatchState == ClassReps[(int32)ENetFields_Private::MatchState].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABullCowGameStateBase"));
}
ABullCowGameStateBase::ABullCowGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABullCowGameStateBase);
ABullCowGameStateBase::~ABullCowGameStateBase() {}
// End Class ABullCowGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_GameState_BullCowGameStateBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMatchState_StaticEnum, TEXT("EMatchState"), &Z_Registration_Info_UEnum_EMatchState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3682865634U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABullCowGameStateBase, ABullCowGameStateBase::StaticClass, TEXT("ABullCowGameStateBase"), &Z_Registration_Info_UClass_ABullCowGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABullCowGameStateBase), 1729760602U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_GameState_BullCowGameStateBase_h_1257270905(TEXT("/Script/BullsAndCows"),
	Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_GameState_BullCowGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_GameState_BullCowGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_GameState_BullCowGameStateBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_GameState_BullCowGameStateBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
