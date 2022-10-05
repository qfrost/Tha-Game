// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDev_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Dev;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Dev()
	{
		if (!Z_Registration_Info_UPackage__Script_Dev.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Dev",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x89BB13A5,
				0x93639456,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Dev.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Dev.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Dev(Z_Construct_UPackage__Script_Dev, TEXT("/Script/Dev"), Z_Registration_Info_UPackage__Script_Dev, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x89BB13A5, 0x93639456));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
