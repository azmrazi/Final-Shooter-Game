// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Weapon/SHRifleWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHRifleWeapon() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ASHRifleWeapon_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ASHRifleWeapon();
	SHOOTER_API UClass* Z_Construct_UClass_ASHBaseWeapon();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void ASHRifleWeapon::StaticRegisterNativesASHRifleWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASHRifleWeapon);
	UClass* Z_Construct_UClass_ASHRifleWeapon_NoRegister()
	{
		return ASHRifleWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASHRifleWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenShots_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenShots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletSpread_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletSpread;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASHRifleWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASHBaseWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHRifleWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Weapon/SHRifleWeapon.h" },
		{ "ModuleRelativePath", "Public/Weapon/SHRifleWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHRifleWeapon_Statics::NewProp_TimeBetweenShots_MetaData[] = {
		{ "Category", "SHRifleWeapon" },
		{ "ModuleRelativePath", "Public/Weapon/SHRifleWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASHRifleWeapon_Statics::NewProp_TimeBetweenShots = { "TimeBetweenShots", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASHRifleWeapon, TimeBetweenShots), METADATA_PARAMS(Z_Construct_UClass_ASHRifleWeapon_Statics::NewProp_TimeBetweenShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASHRifleWeapon_Statics::NewProp_TimeBetweenShots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHRifleWeapon_Statics::NewProp_BulletSpread_MetaData[] = {
		{ "Category", "SHRifleWeapon" },
		{ "ModuleRelativePath", "Public/Weapon/SHRifleWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASHRifleWeapon_Statics::NewProp_BulletSpread = { "BulletSpread", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASHRifleWeapon, BulletSpread), METADATA_PARAMS(Z_Construct_UClass_ASHRifleWeapon_Statics::NewProp_BulletSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASHRifleWeapon_Statics::NewProp_BulletSpread_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHRifleWeapon_Statics::NewProp_DamageAmount_MetaData[] = {
		{ "Category", "SHRifleWeapon" },
		{ "ModuleRelativePath", "Public/Weapon/SHRifleWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASHRifleWeapon_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASHRifleWeapon, DamageAmount), METADATA_PARAMS(Z_Construct_UClass_ASHRifleWeapon_Statics::NewProp_DamageAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASHRifleWeapon_Statics::NewProp_DamageAmount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASHRifleWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASHRifleWeapon_Statics::NewProp_TimeBetweenShots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASHRifleWeapon_Statics::NewProp_BulletSpread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASHRifleWeapon_Statics::NewProp_DamageAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASHRifleWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASHRifleWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASHRifleWeapon_Statics::ClassParams = {
		&ASHRifleWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASHRifleWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASHRifleWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASHRifleWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASHRifleWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASHRifleWeapon()
	{
		if (!Z_Registration_Info_UClass_ASHRifleWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASHRifleWeapon.OuterSingleton, Z_Construct_UClass_ASHRifleWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASHRifleWeapon.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<ASHRifleWeapon>()
	{
		return ASHRifleWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASHRifleWeapon);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_SHRifleWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_SHRifleWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASHRifleWeapon, ASHRifleWeapon::StaticClass, TEXT("ASHRifleWeapon"), &Z_Registration_Info_UClass_ASHRifleWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASHRifleWeapon), 3764144189U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_SHRifleWeapon_h_3656827572(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_SHRifleWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_SHRifleWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
