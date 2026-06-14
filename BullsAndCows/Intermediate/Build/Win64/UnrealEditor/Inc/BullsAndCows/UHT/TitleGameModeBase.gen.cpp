// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BullsAndCows/GameMode/TitleGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTitleGameModeBase() {}

// Begin Cross Module References
BULLSANDCOWS_API UClass* Z_Construct_UClass_ATitleGameModeBase();
BULLSANDCOWS_API UClass* Z_Construct_UClass_ATitleGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BullsAndCows();
// End Cross Module References

// Begin Class ATitleGameModeBase
void ATitleGameModeBase::StaticRegisterNativesATitleGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATitleGameModeBase);
UClass* Z_Construct_UClass_ATitleGameModeBase_NoRegister()
{
	return ATitleGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ATitleGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/TitleGameModeBase.h" },
		{ "ModuleRelativePath", "GameMode/TitleGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayLevelPath_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "GameMode/TitleGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameplayLevelPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATitleGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATitleGameModeBase_Statics::NewProp_GameplayLevelPath = { "GameplayLevelPath", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATitleGameModeBase, GameplayLevelPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayLevelPath_MetaData), NewProp_GameplayLevelPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATitleGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATitleGameModeBase_Statics::NewProp_GameplayLevelPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATitleGameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATitleGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BullsAndCows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATitleGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATitleGameModeBase_Statics::ClassParams = {
	&ATitleGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATitleGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATitleGameModeBase_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATitleGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ATitleGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATitleGameModeBase()
{
	if (!Z_Registration_Info_UClass_ATitleGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATitleGameModeBase.OuterSingleton, Z_Construct_UClass_ATitleGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATitleGameModeBase.OuterSingleton;
}
template<> BULLSANDCOWS_API UClass* StaticClass<ATitleGameModeBase>()
{
	return ATitleGameModeBase::StaticClass();
}
ATitleGameModeBase::ATitleGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATitleGameModeBase);
ATitleGameModeBase::~ATitleGameModeBase() {}
// End Class ATitleGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_GameMode_TitleGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATitleGameModeBase, ATitleGameModeBase::StaticClass, TEXT("ATitleGameModeBase"), &Z_Registration_Info_UClass_ATitleGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATitleGameModeBase), 1430611439U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_GameMode_TitleGameModeBase_h_1329959765(TEXT("/Script/BullsAndCows"),
	Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_GameMode_TitleGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BullsAndCows_Source_BullsAndCows_GameMode_TitleGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
