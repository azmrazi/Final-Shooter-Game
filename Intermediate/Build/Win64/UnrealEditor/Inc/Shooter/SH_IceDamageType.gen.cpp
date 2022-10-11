// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Dev/SH_IceDamageType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSH_IceDamageType() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USH_IceDamageType_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USH_IceDamageType();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void USH_IceDamageType::StaticRegisterNativesUSH_IceDamageType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USH_IceDamageType);
	UClass* Z_Construct_UClass_USH_IceDamageType_NoRegister()
	{
		return USH_IceDamageType::StaticClass();
	}
	struct Z_Construct_UClass_USH_IceDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USH_IceDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USH_IceDamageType_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Dev/SH_IceDamageType.h" },
		{ "ModuleRelativePath", "Public/Dev/SH_IceDamageType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USH_IceDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USH_IceDamageType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USH_IceDamageType_Statics::ClassParams = {
		&USH_IceDamageType::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USH_IceDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USH_IceDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USH_IceDamageType()
	{
		if (!Z_Registration_Info_UClass_USH_IceDamageType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USH_IceDamageType.OuterSingleton, Z_Construct_UClass_USH_IceDamageType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USH_IceDamageType.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<USH_IceDamageType>()
	{
		return USH_IceDamageType::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USH_IceDamageType);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Dev_SH_IceDamageType_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Dev_SH_IceDamageType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USH_IceDamageType, USH_IceDamageType::StaticClass, TEXT("USH_IceDamageType"), &Z_Registration_Info_UClass_USH_IceDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USH_IceDamageType), 4096083245U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Dev_SH_IceDamageType_h_154124601(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Dev_SH_IceDamageType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Dev_SH_IceDamageType_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
