// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/Services/SHFindEnemyService.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHFindEnemyService() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USHFindEnemyService_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USHFindEnemyService();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void USHFindEnemyService::StaticRegisterNativesUSHFindEnemyService()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USHFindEnemyService);
	UClass* Z_Construct_UClass_USHFindEnemyService_NoRegister()
	{
		return USHFindEnemyService::StaticClass();
	}
	struct Z_Construct_UClass_USHFindEnemyService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyActorKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnemyActorKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USHFindEnemyService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHFindEnemyService_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/Services/SHFindEnemyService.h" },
		{ "ModuleRelativePath", "Public/AI/Services/SHFindEnemyService.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHFindEnemyService_Statics::NewProp_EnemyActorKey_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/Services/SHFindEnemyService.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USHFindEnemyService_Statics::NewProp_EnemyActorKey = { "EnemyActorKey", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USHFindEnemyService, EnemyActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USHFindEnemyService_Statics::NewProp_EnemyActorKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHFindEnemyService_Statics::NewProp_EnemyActorKey_MetaData)) }; // 454597379
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USHFindEnemyService_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHFindEnemyService_Statics::NewProp_EnemyActorKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USHFindEnemyService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USHFindEnemyService>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USHFindEnemyService_Statics::ClassParams = {
		&USHFindEnemyService::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USHFindEnemyService_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USHFindEnemyService_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USHFindEnemyService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USHFindEnemyService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USHFindEnemyService()
	{
		if (!Z_Registration_Info_UClass_USHFindEnemyService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USHFindEnemyService.OuterSingleton, Z_Construct_UClass_USHFindEnemyService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USHFindEnemyService.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<USHFindEnemyService>()
	{
		return USHFindEnemyService::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USHFindEnemyService);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Services_SHFindEnemyService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Services_SHFindEnemyService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USHFindEnemyService, USHFindEnemyService::StaticClass, TEXT("USHFindEnemyService"), &Z_Registration_Info_UClass_USHFindEnemyService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USHFindEnemyService), 1585544780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Services_SHFindEnemyService_h_2164661119(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Services_SHFindEnemyService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Services_SHFindEnemyService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
