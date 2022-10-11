// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Weapon/SHProjectTile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHProjectTile() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ASHProjectTile_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ASHProjectTile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	void ASHProjectTile::StaticRegisterNativesASHProjectTile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASHProjectTile);
	UClass* Z_Construct_UClass_ASHProjectTile_NoRegister()
	{
		return ASHProjectTile::StaticClass();
	}
	struct Z_Construct_UClass_ASHProjectTile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASHProjectTile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHProjectTile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/SHProjectTile.h" },
		{ "ModuleRelativePath", "Public/Weapon/SHProjectTile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHProjectTile_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/SHProjectTile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASHProjectTile_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASHProjectTile, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASHProjectTile_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASHProjectTile_Statics::NewProp_CollisionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHProjectTile_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon/SHProjectTile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASHProjectTile_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASHProjectTile, MovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASHProjectTile_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASHProjectTile_Statics::NewProp_MovementComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASHProjectTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASHProjectTile_Statics::NewProp_CollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASHProjectTile_Statics::NewProp_MovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASHProjectTile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASHProjectTile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASHProjectTile_Statics::ClassParams = {
		&ASHProjectTile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASHProjectTile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASHProjectTile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASHProjectTile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASHProjectTile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASHProjectTile()
	{
		if (!Z_Registration_Info_UClass_ASHProjectTile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASHProjectTile.OuterSingleton, Z_Construct_UClass_ASHProjectTile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASHProjectTile.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<ASHProjectTile>()
	{
		return ASHProjectTile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASHProjectTile);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_SHProjectTile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_SHProjectTile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASHProjectTile, ASHProjectTile::StaticClass, TEXT("ASHProjectTile"), &Z_Registration_Info_UClass_ASHProjectTile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASHProjectTile), 900014478U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_SHProjectTile_h_1004467034(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_SHProjectTile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_SHProjectTile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
