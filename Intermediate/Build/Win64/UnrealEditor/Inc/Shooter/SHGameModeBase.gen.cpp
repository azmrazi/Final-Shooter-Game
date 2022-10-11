// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/SHGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHGameModeBase() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ASHGameModeBase_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ASHGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void ASHGameModeBase::StaticRegisterNativesASHGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASHGameModeBase);
	UClass* Z_Construct_UClass_ASHGameModeBase_NoRegister()
	{
		return ASHGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASHGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASHGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SHGameModeBase.h" },
		{ "ModuleRelativePath", "Public/SHGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASHGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASHGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASHGameModeBase_Statics::ClassParams = {
		&ASHGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASHGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASHGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASHGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASHGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASHGameModeBase.OuterSingleton, Z_Construct_UClass_ASHGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASHGameModeBase.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<ASHGameModeBase>()
	{
		return ASHGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASHGameModeBase);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_SHGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_SHGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASHGameModeBase, ASHGameModeBase::StaticClass, TEXT("ASHGameModeBase"), &Z_Registration_Info_UClass_ASHGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASHGameModeBase), 1174218035U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_SHGameModeBase_h_1670341206(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_SHGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_SHGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
