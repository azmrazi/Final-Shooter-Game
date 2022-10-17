// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Pickups/SHHealthPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHHealthPickup() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ASHHealthPickup_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ASHHealthPickup();
	SHOOTER_API UClass* Z_Construct_UClass_ASHBasePickup();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void ASHHealthPickup::StaticRegisterNativesASHHealthPickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASHHealthPickup);
	UClass* Z_Construct_UClass_ASHHealthPickup_NoRegister()
	{
		return ASHHealthPickup::StaticClass();
	}
	struct Z_Construct_UClass_ASHHealthPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASHHealthPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASHBasePickup,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHHealthPickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Pickups/SHHealthPickup.h" },
		{ "ModuleRelativePath", "Public/Pickups/SHHealthPickup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHHealthPickup_Statics::NewProp_HealthAmount_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/Pickups/SHHealthPickup.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASHHealthPickup_Statics::NewProp_HealthAmount = { "HealthAmount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASHHealthPickup, HealthAmount), METADATA_PARAMS(Z_Construct_UClass_ASHHealthPickup_Statics::NewProp_HealthAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASHHealthPickup_Statics::NewProp_HealthAmount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASHHealthPickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASHHealthPickup_Statics::NewProp_HealthAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASHHealthPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASHHealthPickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASHHealthPickup_Statics::ClassParams = {
		&ASHHealthPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASHHealthPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASHHealthPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASHHealthPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASHHealthPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASHHealthPickup()
	{
		if (!Z_Registration_Info_UClass_ASHHealthPickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASHHealthPickup.OuterSingleton, Z_Construct_UClass_ASHHealthPickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASHHealthPickup.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<ASHHealthPickup>()
	{
		return ASHHealthPickup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASHHealthPickup);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Pickups_SHHealthPickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Pickups_SHHealthPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASHHealthPickup, ASHHealthPickup::StaticClass, TEXT("ASHHealthPickup"), &Z_Registration_Info_UClass_ASHHealthPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASHHealthPickup), 1238678719U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Pickups_SHHealthPickup_h_2684509627(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Pickups_SHHealthPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Pickups_SHHealthPickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
