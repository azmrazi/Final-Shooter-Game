// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Animations/SHEquipFinishedAnimNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHEquipFinishedAnimNotify() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USHEquipFinishedAnimNotify_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USHEquipFinishedAnimNotify();
	SHOOTER_API UClass* Z_Construct_UClass_USHAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void USHEquipFinishedAnimNotify::StaticRegisterNativesUSHEquipFinishedAnimNotify()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USHEquipFinishedAnimNotify);
	UClass* Z_Construct_UClass_USHEquipFinishedAnimNotify_NoRegister()
	{
		return USHEquipFinishedAnimNotify::StaticClass();
	}
	struct Z_Construct_UClass_USHEquipFinishedAnimNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USHEquipFinishedAnimNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USHAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHEquipFinishedAnimNotify_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animations/SHEquipFinishedAnimNotify.h" },
		{ "ModuleRelativePath", "Public/Animations/SHEquipFinishedAnimNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USHEquipFinishedAnimNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USHEquipFinishedAnimNotify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USHEquipFinishedAnimNotify_Statics::ClassParams = {
		&USHEquipFinishedAnimNotify::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USHEquipFinishedAnimNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USHEquipFinishedAnimNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USHEquipFinishedAnimNotify()
	{
		if (!Z_Registration_Info_UClass_USHEquipFinishedAnimNotify.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USHEquipFinishedAnimNotify.OuterSingleton, Z_Construct_UClass_USHEquipFinishedAnimNotify_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USHEquipFinishedAnimNotify.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<USHEquipFinishedAnimNotify>()
	{
		return USHEquipFinishedAnimNotify::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USHEquipFinishedAnimNotify);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Animations_SHEquipFinishedAnimNotify_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Animations_SHEquipFinishedAnimNotify_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USHEquipFinishedAnimNotify, USHEquipFinishedAnimNotify::StaticClass, TEXT("USHEquipFinishedAnimNotify"), &Z_Registration_Info_UClass_USHEquipFinishedAnimNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USHEquipFinishedAnimNotify), 1821766931U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Animations_SHEquipFinishedAnimNotify_h_761168158(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Animations_SHEquipFinishedAnimNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Animations_SHEquipFinishedAnimNotify_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
