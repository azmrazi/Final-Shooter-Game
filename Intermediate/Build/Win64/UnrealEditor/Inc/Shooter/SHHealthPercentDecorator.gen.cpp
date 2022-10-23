// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/Decorators/SHHealthPercentDecorator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHHealthPercentDecorator() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USHHealthPercentDecorator_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USHHealthPercentDecorator();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void USHHealthPercentDecorator::StaticRegisterNativesUSHHealthPercentDecorator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USHHealthPercentDecorator);
	UClass* Z_Construct_UClass_USHHealthPercentDecorator_NoRegister()
	{
		return USHHealthPercentDecorator::StaticClass();
	}
	struct Z_Construct_UClass_USHHealthPercentDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USHHealthPercentDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHHealthPercentDecorator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/Decorators/SHHealthPercentDecorator.h" },
		{ "ModuleRelativePath", "Public/AI/Decorators/SHHealthPercentDecorator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHHealthPercentDecorator_Statics::NewProp_HealthPercent_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/Decorators/SHHealthPercentDecorator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USHHealthPercentDecorator_Statics::NewProp_HealthPercent = { "HealthPercent", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USHHealthPercentDecorator, HealthPercent), METADATA_PARAMS(Z_Construct_UClass_USHHealthPercentDecorator_Statics::NewProp_HealthPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHHealthPercentDecorator_Statics::NewProp_HealthPercent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USHHealthPercentDecorator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHHealthPercentDecorator_Statics::NewProp_HealthPercent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USHHealthPercentDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USHHealthPercentDecorator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USHHealthPercentDecorator_Statics::ClassParams = {
		&USHHealthPercentDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USHHealthPercentDecorator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USHHealthPercentDecorator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USHHealthPercentDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USHHealthPercentDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USHHealthPercentDecorator()
	{
		if (!Z_Registration_Info_UClass_USHHealthPercentDecorator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USHHealthPercentDecorator.OuterSingleton, Z_Construct_UClass_USHHealthPercentDecorator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USHHealthPercentDecorator.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<USHHealthPercentDecorator>()
	{
		return USHHealthPercentDecorator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USHHealthPercentDecorator);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Decorators_SHHealthPercentDecorator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Decorators_SHHealthPercentDecorator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USHHealthPercentDecorator, USHHealthPercentDecorator::StaticClass, TEXT("USHHealthPercentDecorator"), &Z_Registration_Info_UClass_USHHealthPercentDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USHHealthPercentDecorator), 1332134729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Decorators_SHHealthPercentDecorator_h_2344094361(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Decorators_SHHealthPercentDecorator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Decorators_SHHealthPercentDecorator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
