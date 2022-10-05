// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dev/DevGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDevGameModeBase() {}
// Cross Module References
	DEV_API UClass* Z_Construct_UClass_ADevGameModeBase_NoRegister();
	DEV_API UClass* Z_Construct_UClass_ADevGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Dev();
// End Cross Module References
	void ADevGameModeBase::StaticRegisterNativesADevGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADevGameModeBase);
	UClass* Z_Construct_UClass_ADevGameModeBase_NoRegister()
	{
		return ADevGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADevGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADevGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Dev,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DevGameModeBase.h" },
		{ "ModuleRelativePath", "DevGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADevGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADevGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADevGameModeBase_Statics::ClassParams = {
		&ADevGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADevGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADevGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADevGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ADevGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADevGameModeBase.OuterSingleton, Z_Construct_UClass_ADevGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADevGameModeBase.OuterSingleton;
	}
	template<> DEV_API UClass* StaticClass<ADevGameModeBase>()
	{
		return ADevGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADevGameModeBase);
	struct Z_CompiledInDeferFile_FID_Dev_Source_Dev_DevGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_Source_Dev_DevGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADevGameModeBase, ADevGameModeBase::StaticClass, TEXT("ADevGameModeBase"), &Z_Registration_Info_UClass_ADevGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADevGameModeBase), 168631666U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_Source_Dev_DevGameModeBase_h_3386283402(TEXT("/Script/Dev"),
		Z_CompiledInDeferFile_FID_Dev_Source_Dev_DevGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_Source_Dev_DevGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
