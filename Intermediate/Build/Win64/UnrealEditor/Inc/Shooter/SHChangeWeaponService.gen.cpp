// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/Services/SHChangeWeaponService.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHChangeWeaponService() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USHChangeWeaponService_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USHChangeWeaponService();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void USHChangeWeaponService::StaticRegisterNativesUSHChangeWeaponService()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USHChangeWeaponService);
	UClass* Z_Construct_UClass_USHChangeWeaponService_NoRegister()
	{
		return USHChangeWeaponService::StaticClass();
	}
	struct Z_Construct_UClass_USHChangeWeaponService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Probability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USHChangeWeaponService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHChangeWeaponService_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/Services/SHChangeWeaponService.h" },
		{ "ModuleRelativePath", "Public/AI/Services/SHChangeWeaponService.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHChangeWeaponService_Statics::NewProp_Probability_MetaData[] = {
		{ "Category", "AI" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/AI/Services/SHChangeWeaponService.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USHChangeWeaponService_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USHChangeWeaponService, Probability), METADATA_PARAMS(Z_Construct_UClass_USHChangeWeaponService_Statics::NewProp_Probability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHChangeWeaponService_Statics::NewProp_Probability_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USHChangeWeaponService_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHChangeWeaponService_Statics::NewProp_Probability,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USHChangeWeaponService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USHChangeWeaponService>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USHChangeWeaponService_Statics::ClassParams = {
		&USHChangeWeaponService::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USHChangeWeaponService_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USHChangeWeaponService_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USHChangeWeaponService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USHChangeWeaponService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USHChangeWeaponService()
	{
		if (!Z_Registration_Info_UClass_USHChangeWeaponService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USHChangeWeaponService.OuterSingleton, Z_Construct_UClass_USHChangeWeaponService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USHChangeWeaponService.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<USHChangeWeaponService>()
	{
		return USHChangeWeaponService::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USHChangeWeaponService);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Services_SHChangeWeaponService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Services_SHChangeWeaponService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USHChangeWeaponService, USHChangeWeaponService::StaticClass, TEXT("USHChangeWeaponService"), &Z_Registration_Info_UClass_USHChangeWeaponService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USHChangeWeaponService), 2556402645U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Services_SHChangeWeaponService_h_2607250967(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Services_SHChangeWeaponService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Services_SHChangeWeaponService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
