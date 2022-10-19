// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Weapon/Components/SHWeaponFXComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHWeaponFXComponent() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ASHWeaponFXComponent_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ASHWeaponFXComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void ASHWeaponFXComponent::StaticRegisterNativesASHWeaponFXComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASHWeaponFXComponent);
	UClass* Z_Construct_UClass_ASHWeaponFXComponent_NoRegister()
	{
		return ASHWeaponFXComponent::StaticClass();
	}
	struct Z_Construct_UClass_ASHWeaponFXComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASHWeaponFXComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHWeaponFXComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon/Components/SHWeaponFXComponent.h" },
		{ "ModuleRelativePath", "Public/Weapon/Components/SHWeaponFXComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASHWeaponFXComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASHWeaponFXComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASHWeaponFXComponent_Statics::ClassParams = {
		&ASHWeaponFXComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASHWeaponFXComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASHWeaponFXComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASHWeaponFXComponent()
	{
		if (!Z_Registration_Info_UClass_ASHWeaponFXComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASHWeaponFXComponent.OuterSingleton, Z_Construct_UClass_ASHWeaponFXComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASHWeaponFXComponent.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<ASHWeaponFXComponent>()
	{
		return ASHWeaponFXComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASHWeaponFXComponent);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_Components_SHWeaponFXComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_Components_SHWeaponFXComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASHWeaponFXComponent, ASHWeaponFXComponent::StaticClass, TEXT("ASHWeaponFXComponent"), &Z_Registration_Info_UClass_ASHWeaponFXComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASHWeaponFXComponent), 2136535939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_Components_SHWeaponFXComponent_h_3717512187(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_Components_SHWeaponFXComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_Components_SHWeaponFXComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
