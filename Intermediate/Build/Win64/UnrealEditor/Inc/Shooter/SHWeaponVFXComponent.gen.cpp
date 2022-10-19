// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Weapon/Components/SHWeaponVFXComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHWeaponVFXComponent() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USHWeaponVFXComponent_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USHWeaponVFXComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FImpactData();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
// End Cross Module References
	void USHWeaponVFXComponent::StaticRegisterNativesUSHWeaponVFXComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USHWeaponVFXComponent);
	UClass* Z_Construct_UClass_USHWeaponVFXComponent_NoRegister()
	{
		return USHWeaponVFXComponent::StaticClass();
	}
	struct Z_Construct_UClass_USHWeaponVFXComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultImpactData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultImpactData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactDataMap_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactDataMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ImpactDataMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USHWeaponVFXComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHWeaponVFXComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Weapon/Components/SHWeaponVFXComponent.h" },
		{ "ModuleRelativePath", "Public/Weapon/Components/SHWeaponVFXComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHWeaponVFXComponent_Statics::NewProp_DefaultImpactData_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/Weapon/Components/SHWeaponVFXComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USHWeaponVFXComponent_Statics::NewProp_DefaultImpactData = { "DefaultImpactData", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USHWeaponVFXComponent, DefaultImpactData), Z_Construct_UScriptStruct_FImpactData, METADATA_PARAMS(Z_Construct_UClass_USHWeaponVFXComponent_Statics::NewProp_DefaultImpactData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHWeaponVFXComponent_Statics::NewProp_DefaultImpactData_MetaData)) }; // 3499948109
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USHWeaponVFXComponent_Statics::NewProp_ImpactDataMap_ValueProp = { "ImpactDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FImpactData, METADATA_PARAMS(nullptr, 0) }; // 3499948109
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USHWeaponVFXComponent_Statics::NewProp_ImpactDataMap_Key_KeyProp = { "ImpactDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHWeaponVFXComponent_Statics::NewProp_ImpactDataMap_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/Weapon/Components/SHWeaponVFXComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USHWeaponVFXComponent_Statics::NewProp_ImpactDataMap = { "ImpactDataMap", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USHWeaponVFXComponent, ImpactDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USHWeaponVFXComponent_Statics::NewProp_ImpactDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHWeaponVFXComponent_Statics::NewProp_ImpactDataMap_MetaData)) }; // 3499948109
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USHWeaponVFXComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHWeaponVFXComponent_Statics::NewProp_DefaultImpactData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHWeaponVFXComponent_Statics::NewProp_ImpactDataMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHWeaponVFXComponent_Statics::NewProp_ImpactDataMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHWeaponVFXComponent_Statics::NewProp_ImpactDataMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USHWeaponVFXComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USHWeaponVFXComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USHWeaponVFXComponent_Statics::ClassParams = {
		&USHWeaponVFXComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USHWeaponVFXComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USHWeaponVFXComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USHWeaponVFXComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USHWeaponVFXComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USHWeaponVFXComponent()
	{
		if (!Z_Registration_Info_UClass_USHWeaponVFXComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USHWeaponVFXComponent.OuterSingleton, Z_Construct_UClass_USHWeaponVFXComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USHWeaponVFXComponent.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<USHWeaponVFXComponent>()
	{
		return USHWeaponVFXComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USHWeaponVFXComponent);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_Components_SHWeaponVFXComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_Components_SHWeaponVFXComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USHWeaponVFXComponent, USHWeaponVFXComponent::StaticClass, TEXT("USHWeaponVFXComponent"), &Z_Registration_Info_UClass_USHWeaponVFXComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USHWeaponVFXComponent), 2203297734U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_Components_SHWeaponVFXComponent_h_2486053791(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_Components_SHWeaponVFXComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Weapon_Components_SHWeaponVFXComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
