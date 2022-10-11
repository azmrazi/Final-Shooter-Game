// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Components/SHWeaponComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHWeaponComponent() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USHWeaponComponent_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USHWeaponComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTER_API UClass* Z_Construct_UClass_ASHBaseWeapon_NoRegister();
// End Cross Module References
	void USHWeaponComponent::StaticRegisterNativesUSHWeaponComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USHWeaponComponent);
	UClass* Z_Construct_UClass_USHWeaponComponent_NoRegister()
	{
		return USHWeaponComponent::StaticClass();
	}
	struct Z_Construct_UClass_USHWeaponComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAttachPointName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponAttachPointName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USHWeaponComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHWeaponComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/SHWeaponComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SHWeaponComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Components/SHWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USHWeaponComponent, WeaponClass), Z_Construct_UClass_ASHBaseWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponAttachPointName_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Components/SHWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponAttachPointName = { "WeaponAttachPointName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USHWeaponComponent, WeaponAttachPointName), METADATA_PARAMS(Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponAttachPointName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponAttachPointName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SHWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USHWeaponComponent, CurrentWeapon), Z_Construct_UClass_ASHBaseWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_CurrentWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_CurrentWeapon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USHWeaponComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponAttachPointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_CurrentWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USHWeaponComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USHWeaponComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USHWeaponComponent_Statics::ClassParams = {
		&USHWeaponComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USHWeaponComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USHWeaponComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USHWeaponComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USHWeaponComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USHWeaponComponent()
	{
		if (!Z_Registration_Info_UClass_USHWeaponComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USHWeaponComponent.OuterSingleton, Z_Construct_UClass_USHWeaponComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USHWeaponComponent.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<USHWeaponComponent>()
	{
		return USHWeaponComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USHWeaponComponent);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USHWeaponComponent, USHWeaponComponent::StaticClass, TEXT("USHWeaponComponent"), &Z_Registration_Info_UClass_USHWeaponComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USHWeaponComponent), 3840484374U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_2087062006(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
