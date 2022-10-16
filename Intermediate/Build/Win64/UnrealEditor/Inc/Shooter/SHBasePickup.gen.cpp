// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Pickups/SHBasePickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHBasePickup() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ASHBasePickup_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ASHBasePickup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void ASHBasePickup::StaticRegisterNativesASHBasePickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASHBasePickup);
	UClass* Z_Construct_UClass_ASHBasePickup_NoRegister()
	{
		return ASHBasePickup::StaticClass();
	}
	struct Z_Construct_UClass_ASHBasePickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASHBasePickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHBasePickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickups/SHBasePickup.h" },
		{ "ModuleRelativePath", "Public/Pickups/SHBasePickup.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASHBasePickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASHBasePickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASHBasePickup_Statics::ClassParams = {
		&ASHBasePickup::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASHBasePickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASHBasePickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASHBasePickup()
	{
		if (!Z_Registration_Info_UClass_ASHBasePickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASHBasePickup.OuterSingleton, Z_Construct_UClass_ASHBasePickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASHBasePickup.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<ASHBasePickup>()
	{
		return ASHBasePickup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASHBasePickup);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Pickups_SHBasePickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Pickups_SHBasePickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASHBasePickup, ASHBasePickup::StaticClass, TEXT("ASHBasePickup"), &Z_Registration_Info_UClass_ASHBasePickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASHBasePickup), 439002966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Pickups_SHBasePickup_h_2340439726(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Pickups_SHBasePickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Pickups_SHBasePickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
