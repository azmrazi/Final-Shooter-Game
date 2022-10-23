// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Components/SHAIWeaponComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHAIWeaponComponent() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USHAIWeaponComponent_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USHAIWeaponComponent();
	SHOOTER_API UClass* Z_Construct_UClass_USHWeaponComponent();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void USHAIWeaponComponent::StaticRegisterNativesUSHAIWeaponComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USHAIWeaponComponent);
	UClass* Z_Construct_UClass_USHAIWeaponComponent_NoRegister()
	{
		return USHAIWeaponComponent::StaticClass();
	}
	struct Z_Construct_UClass_USHAIWeaponComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USHAIWeaponComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USHWeaponComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHAIWeaponComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Components/SHAIWeaponComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SHAIWeaponComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USHAIWeaponComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USHAIWeaponComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USHAIWeaponComponent_Statics::ClassParams = {
		&USHAIWeaponComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USHAIWeaponComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USHAIWeaponComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USHAIWeaponComponent()
	{
		if (!Z_Registration_Info_UClass_USHAIWeaponComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USHAIWeaponComponent.OuterSingleton, Z_Construct_UClass_USHAIWeaponComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USHAIWeaponComponent.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<USHAIWeaponComponent>()
	{
		return USHAIWeaponComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USHAIWeaponComponent);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHAIWeaponComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHAIWeaponComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USHAIWeaponComponent, USHAIWeaponComponent::StaticClass, TEXT("USHAIWeaponComponent"), &Z_Registration_Info_UClass_USHAIWeaponComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USHAIWeaponComponent), 2677329119U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHAIWeaponComponent_h_106145572(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHAIWeaponComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHAIWeaponComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
