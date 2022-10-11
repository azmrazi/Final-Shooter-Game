// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/UI/SHGameHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHGameHUD() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ASHGameHUD_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ASHGameHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void ASHGameHUD::StaticRegisterNativesASHGameHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASHGameHUD);
	UClass* Z_Construct_UClass_ASHGameHUD_NoRegister()
	{
		return ASHGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_ASHGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASHGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHGameHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/SHGameHUD.h" },
		{ "ModuleRelativePath", "Public/UI/SHGameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASHGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASHGameHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASHGameHUD_Statics::ClassParams = {
		&ASHGameHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASHGameHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASHGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASHGameHUD()
	{
		if (!Z_Registration_Info_UClass_ASHGameHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASHGameHUD.OuterSingleton, Z_Construct_UClass_ASHGameHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASHGameHUD.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<ASHGameHUD>()
	{
		return ASHGameHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASHGameHUD);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_UI_SHGameHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_UI_SHGameHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASHGameHUD, ASHGameHUD::StaticClass, TEXT("ASHGameHUD"), &Z_Registration_Info_UClass_ASHGameHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASHGameHUD), 256071186U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_UI_SHGameHUD_h_2270853951(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_UI_SHGameHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_UI_SHGameHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
