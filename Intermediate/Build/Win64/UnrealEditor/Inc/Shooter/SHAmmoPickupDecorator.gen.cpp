// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/Decorators/SHAmmoPickupDecorator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHAmmoPickupDecorator() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USHAmmoPickupDecorator_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USHAmmoPickupDecorator();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTER_API UClass* Z_Construct_UClass_ASHBaseWeapon_NoRegister();
// End Cross Module References
	void USHAmmoPickupDecorator::StaticRegisterNativesUSHAmmoPickupDecorator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USHAmmoPickupDecorator);
	UClass* Z_Construct_UClass_USHAmmoPickupDecorator_NoRegister()
	{
		return USHAmmoPickupDecorator::StaticClass();
	}
	struct Z_Construct_UClass_USHAmmoPickupDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USHAmmoPickupDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHAmmoPickupDecorator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/Decorators/SHAmmoPickupDecorator.h" },
		{ "ModuleRelativePath", "Public/AI/Decorators/SHAmmoPickupDecorator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHAmmoPickupDecorator_Statics::NewProp_WeaponType_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/Decorators/SHAmmoPickupDecorator.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USHAmmoPickupDecorator_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USHAmmoPickupDecorator, WeaponType), Z_Construct_UClass_ASHBaseWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USHAmmoPickupDecorator_Statics::NewProp_WeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHAmmoPickupDecorator_Statics::NewProp_WeaponType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USHAmmoPickupDecorator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHAmmoPickupDecorator_Statics::NewProp_WeaponType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USHAmmoPickupDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USHAmmoPickupDecorator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USHAmmoPickupDecorator_Statics::ClassParams = {
		&USHAmmoPickupDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USHAmmoPickupDecorator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USHAmmoPickupDecorator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USHAmmoPickupDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USHAmmoPickupDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USHAmmoPickupDecorator()
	{
		if (!Z_Registration_Info_UClass_USHAmmoPickupDecorator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USHAmmoPickupDecorator.OuterSingleton, Z_Construct_UClass_USHAmmoPickupDecorator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USHAmmoPickupDecorator.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<USHAmmoPickupDecorator>()
	{
		return USHAmmoPickupDecorator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USHAmmoPickupDecorator);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Decorators_SHAmmoPickupDecorator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Decorators_SHAmmoPickupDecorator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USHAmmoPickupDecorator, USHAmmoPickupDecorator::StaticClass, TEXT("USHAmmoPickupDecorator"), &Z_Registration_Info_UClass_USHAmmoPickupDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USHAmmoPickupDecorator), 918963020U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Decorators_SHAmmoPickupDecorator_h_201797035(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Decorators_SHAmmoPickupDecorator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Decorators_SHAmmoPickupDecorator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
