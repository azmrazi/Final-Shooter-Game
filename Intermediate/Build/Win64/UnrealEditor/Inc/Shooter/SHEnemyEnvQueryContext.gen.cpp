// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/EQS/SHEnemyEnvQueryContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHEnemyEnvQueryContext() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USHEnemyEnvQueryContext_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USHEnemyEnvQueryContext();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void USHEnemyEnvQueryContext::StaticRegisterNativesUSHEnemyEnvQueryContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USHEnemyEnvQueryContext);
	UClass* Z_Construct_UClass_USHEnemyEnvQueryContext_NoRegister()
	{
		return USHEnemyEnvQueryContext::StaticClass();
	}
	struct Z_Construct_UClass_USHEnemyEnvQueryContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyActorKeyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EnemyActorKeyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USHEnemyEnvQueryContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHEnemyEnvQueryContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/EQS/SHEnemyEnvQueryContext.h" },
		{ "ModuleRelativePath", "Public/AI/EQS/SHEnemyEnvQueryContext.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHEnemyEnvQueryContext_Statics::NewProp_EnemyActorKeyName_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/EQS/SHEnemyEnvQueryContext.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USHEnemyEnvQueryContext_Statics::NewProp_EnemyActorKeyName = { "EnemyActorKeyName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USHEnemyEnvQueryContext, EnemyActorKeyName), METADATA_PARAMS(Z_Construct_UClass_USHEnemyEnvQueryContext_Statics::NewProp_EnemyActorKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHEnemyEnvQueryContext_Statics::NewProp_EnemyActorKeyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USHEnemyEnvQueryContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHEnemyEnvQueryContext_Statics::NewProp_EnemyActorKeyName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USHEnemyEnvQueryContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USHEnemyEnvQueryContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USHEnemyEnvQueryContext_Statics::ClassParams = {
		&USHEnemyEnvQueryContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USHEnemyEnvQueryContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USHEnemyEnvQueryContext_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USHEnemyEnvQueryContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USHEnemyEnvQueryContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USHEnemyEnvQueryContext()
	{
		if (!Z_Registration_Info_UClass_USHEnemyEnvQueryContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USHEnemyEnvQueryContext.OuterSingleton, Z_Construct_UClass_USHEnemyEnvQueryContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USHEnemyEnvQueryContext.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<USHEnemyEnvQueryContext>()
	{
		return USHEnemyEnvQueryContext::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USHEnemyEnvQueryContext);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_EQS_SHEnemyEnvQueryContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_EQS_SHEnemyEnvQueryContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USHEnemyEnvQueryContext, USHEnemyEnvQueryContext::StaticClass, TEXT("USHEnemyEnvQueryContext"), &Z_Registration_Info_UClass_USHEnemyEnvQueryContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USHEnemyEnvQueryContext), 1713670006U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_EQS_SHEnemyEnvQueryContext_h_3566755616(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_EQS_SHEnemyEnvQueryContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_EQS_SHEnemyEnvQueryContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
