// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBullsAndCows_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BullsAndCows;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BullsAndCows()
	{
		if (!Z_Registration_Info_UPackage__Script_BullsAndCows.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BullsAndCows",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xF2192194,
				0x54AA7EED,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BullsAndCows.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BullsAndCows.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BullsAndCows(Z_Construct_UPackage__Script_BullsAndCows, TEXT("/Script/BullsAndCows"), Z_Registration_Info_UPackage__Script_BullsAndCows, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF2192194, 0x54AA7EED));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
