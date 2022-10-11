// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Weapon/SHBaseWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHBaseWeapon() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ASHBaseWeapon_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ASHBaseWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void ASHBaseWeapon::StaticRegisterNativesASHBaseWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASHBaseWeapon);
	UClass* Z_Construct_UClass_ASHBaseWeapon_NoRegister()
	{
		return ASHBaseWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASHBaseWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MuzzleSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceMaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceMaxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASHBaseWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHBaseWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/SHBaseWeapon.h" },
		{ "ModuleRelativePath", "Public/Weapon/SHBaseWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHBaseWeapon_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/SHBaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASHBaseWeapon_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASHBaseWeapon, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASHBaseWeapon_Statics::NewProp_WeaponMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASHBaseWeapon_Statics::NewProp_WeaponMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHBaseWeapon_Statics::NewProp_MuzzleSocketName_MetaData[] = {
		{ "Category", "SHBaseWeapon" },
		{ "ModuleRelativePath", "Public/Weapon/SHBaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASHBaseWeapon_Statics::NewProp_MuzzleSocketName = { "MuzzleSocketName", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASHBaseWeapon, MuzzleSocketName), METADATA_PARAMS(Z_Construct_UClass_ASHBaseWeapon_Statics::NewProp_MuzzleSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASHBaseWeapon_Statics::NewProp_MuzzleSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHBaseWeapon_Statics::NewProp_TraceMaxDistance_MetaData[] = {
		{ "Category", "SHBaseWeapon" },
		{ "Comment", "// Called when the game starts or when spawned\n" },
		{ "ModuleRelativePath", "Public/Weapon/SHBaseWeapon.h" },
		{ "ToolTip", "Called when the game starts or when spawned" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASHBaseWeapon_Statics::NewProp_TraceMaxDistance = { "TraceMaxDistance", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASHBaseWeapon, TraceMaxDistance), METADATA_PARAMS(Z_Construct_UClass_ASHBaseWeapon_Statics::NewProp_TraceMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASHBaseWeapon_Statics::NewProp_TraceMaxDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHBaseWeapon_Statics::NewProp_DamageAmount_MetaData[] = {
		{ "Category", "SHBaseWeapon" },
		{ "ModuleRelativePath", "Public/Weapon/SHBaseWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASHBaseWeapon_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASHBaseWeapon, DamageAmount), METADATA_PARAMS(Z_Construct_UClass_ASHBaseWeapon_Statics::NewProp_DamageAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASHBaseWeapon_Statics::NewProp_DamageAmount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASHBaseWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASHBaseWeapon_Statics::NewProp_WeaponMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASHBaseWeapon_Statics::NewProp_MuzzleSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASHBaseWeapon_Statics::NewProp_TraceMaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASHBaseWeapon_Statics::NewProp_DamageAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASHBaseWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASHBaseWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASHBaseWeapon_Statics::ClassParams = {
		&ASHBaseWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASHBaseWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASHBaseWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASHBaseWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASHBaseWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASHBaseWeapon()
	{
		if (!Z_Registration_Info_UClass_ASHBaseWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASHBaseWeapon.OuterSingleton, Z_Construct_UClass_ASHBaseWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASHBaseWeapon.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<ASHBaseWeapon>()
	{
		return ASHBaseWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASHBaseWeapon);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_SHBaseWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_SHBaseWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASHBaseWeapon, ASHBaseWeapon::StaticClass, TEXT("ASHBaseWeapon"), &Z_Registration_Info_UClass_ASHBaseWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASHBaseWeapon), 3551450776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_SHBaseWeapon_h_1436175469(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_SHBaseWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_SHBaseWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
