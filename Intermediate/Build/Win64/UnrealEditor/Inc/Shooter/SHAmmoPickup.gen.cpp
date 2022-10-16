// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Pickups/SHAmmoPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHAmmoPickup() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ASHAmmoPickup_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ASHAmmoPickup();
	SHOOTER_API UClass* Z_Construct_UClass_ASHBasePickup();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void ASHAmmoPickup::StaticRegisterNativesASHAmmoPickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASHAmmoPickup);
	UClass* Z_Construct_UClass_ASHAmmoPickup_NoRegister()
	{
		return ASHAmmoPickup::StaticClass();
	}
	struct Z_Construct_UClass_ASHAmmoPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASHAmmoPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASHBasePickup,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHAmmoPickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Pickups/SHAmmoPickup.h" },
		{ "ModuleRelativePath", "Public/Pickups/SHAmmoPickup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASHAmmoPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASHAmmoPickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASHAmmoPickup_Statics::ClassParams = {
		&ASHAmmoPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASHAmmoPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASHAmmoPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASHAmmoPickup()
	{
		if (!Z_Registration_Info_UClass_ASHAmmoPickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASHAmmoPickup.OuterSingleton, Z_Construct_UClass_ASHAmmoPickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASHAmmoPickup.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<ASHAmmoPickup>()
	{
		return ASHAmmoPickup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASHAmmoPickup);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Pickups_SHAmmoPickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Pickups_SHAmmoPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASHAmmoPickup, ASHAmmoPickup::StaticClass, TEXT("ASHAmmoPickup"), &Z_Registration_Info_UClass_ASHAmmoPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASHAmmoPickup), 1448514740U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Pickups_SHAmmoPickup_h_526764035(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Pickups_SHAmmoPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Pickups_SHAmmoPickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
