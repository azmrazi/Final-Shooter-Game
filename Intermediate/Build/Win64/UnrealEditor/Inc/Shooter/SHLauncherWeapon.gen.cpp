// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Weapon/SHLauncherWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHLauncherWeapon() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ASHLauncherWeapon_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ASHLauncherWeapon();
	SHOOTER_API UClass* Z_Construct_UClass_ASHBaseWeapon();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTER_API UClass* Z_Construct_UClass_ASHProjectTile_NoRegister();
// End Cross Module References
	void ASHLauncherWeapon::StaticRegisterNativesASHLauncherWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASHLauncherWeapon);
	UClass* Z_Construct_UClass_ASHLauncherWeapon_NoRegister()
	{
		return ASHLauncherWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASHLauncherWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASHLauncherWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASHBaseWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHLauncherWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/SHLauncherWeapon.h" },
		{ "ModuleRelativePath", "Public/Weapon/SHLauncherWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHLauncherWeapon_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapon/SHLauncherWeapon.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASHLauncherWeapon_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASHLauncherWeapon, ProjectileClass), Z_Construct_UClass_ASHProjectTile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASHLauncherWeapon_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASHLauncherWeapon_Statics::NewProp_ProjectileClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASHLauncherWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASHLauncherWeapon_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASHLauncherWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASHLauncherWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASHLauncherWeapon_Statics::ClassParams = {
		&ASHLauncherWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASHLauncherWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASHLauncherWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASHLauncherWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASHLauncherWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASHLauncherWeapon()
	{
		if (!Z_Registration_Info_UClass_ASHLauncherWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASHLauncherWeapon.OuterSingleton, Z_Construct_UClass_ASHLauncherWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASHLauncherWeapon.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<ASHLauncherWeapon>()
	{
		return ASHLauncherWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASHLauncherWeapon);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_SHLauncherWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_SHLauncherWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASHLauncherWeapon, ASHLauncherWeapon::StaticClass, TEXT("ASHLauncherWeapon"), &Z_Registration_Info_UClass_ASHLauncherWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASHLauncherWeapon), 3694008656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_SHLauncherWeapon_h_338047197(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_SHLauncherWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_SHLauncherWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
