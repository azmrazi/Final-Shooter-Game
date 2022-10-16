// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Animations/SHAnimNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHAnimNotify() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USHAnimNotify_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USHAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void USHAnimNotify::StaticRegisterNativesUSHAnimNotify()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USHAnimNotify);
	UClass* Z_Construct_UClass_USHAnimNotify_NoRegister()
	{
		return USHAnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_USHAnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USHAnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHAnimNotify_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animations/SHAnimNotify.h" },
		{ "ModuleRelativePath", "Public/Animations/SHAnimNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USHAnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USHAnimNotify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USHAnimNotify_Statics::ClassParams = {
		&USHAnimNotify::StaticClass,
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
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USHAnimNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USHAnimNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USHAnimNotify()
	{
		if (!Z_Registration_Info_UClass_USHAnimNotify.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USHAnimNotify.OuterSingleton, Z_Construct_UClass_USHAnimNotify_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USHAnimNotify.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<USHAnimNotify>()
	{
		return USHAnimNotify::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USHAnimNotify);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Animations_SHAnimNotify_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Animations_SHAnimNotify_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USHAnimNotify, USHAnimNotify::StaticClass, TEXT("USHAnimNotify"), &Z_Registration_Info_UClass_USHAnimNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USHAnimNotify), 2078837935U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Animations_SHAnimNotify_h_2329913158(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Animations_SHAnimNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Animations_SHAnimNotify_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
