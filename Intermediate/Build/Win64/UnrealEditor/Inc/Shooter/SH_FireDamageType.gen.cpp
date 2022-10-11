// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Dev/SH_FireDamageType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSH_FireDamageType() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USH_FireDamageType_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USH_FireDamageType();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void USH_FireDamageType::StaticRegisterNativesUSH_FireDamageType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USH_FireDamageType);
	UClass* Z_Construct_UClass_USH_FireDamageType_NoRegister()
	{
		return USH_FireDamageType::StaticClass();
	}
	struct Z_Construct_UClass_USH_FireDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USH_FireDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USH_FireDamageType_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Dev/SH_FireDamageType.h" },
		{ "ModuleRelativePath", "Public/Dev/SH_FireDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USH_FireDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USH_FireDamageType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USH_FireDamageType_Statics::ClassParams = {
		&USH_FireDamageType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_USH_FireDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USH_FireDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USH_FireDamageType()
	{
		if (!Z_Registration_Info_UClass_USH_FireDamageType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USH_FireDamageType.OuterSingleton, Z_Construct_UClass_USH_FireDamageType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USH_FireDamageType.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<USH_FireDamageType>()
	{
		return USH_FireDamageType::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USH_FireDamageType);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Dev_SH_FireDamageType_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Dev_SH_FireDamageType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USH_FireDamageType, USH_FireDamageType::StaticClass, TEXT("USH_FireDamageType"), &Z_Registration_Info_UClass_USH_FireDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USH_FireDamageType), 3720969674U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Dev_SH_FireDamageType_h_1769633465(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Dev_SH_FireDamageType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Dev_SH_FireDamageType_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
