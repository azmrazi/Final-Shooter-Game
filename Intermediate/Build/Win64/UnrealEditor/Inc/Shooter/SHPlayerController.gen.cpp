// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Player/SHPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHPlayerController() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ASHPlayerController_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ASHPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void ASHPlayerController::StaticRegisterNativesASHPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASHPlayerController);
	UClass* Z_Construct_UClass_ASHPlayerController_NoRegister()
	{
		return ASHPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ASHPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASHPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/SHPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/SHPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASHPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASHPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASHPlayerController_Statics::ClassParams = {
		&ASHPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASHPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASHPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASHPlayerController()
	{
		if (!Z_Registration_Info_UClass_ASHPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASHPlayerController.OuterSingleton, Z_Construct_UClass_ASHPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASHPlayerController.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<ASHPlayerController>()
	{
		return ASHPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASHPlayerController);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Player_SHPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Player_SHPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASHPlayerController, ASHPlayerController::StaticClass, TEXT("ASHPlayerController"), &Z_Registration_Info_UClass_ASHPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASHPlayerController), 3193835295U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Player_SHPlayerController_h_4053191323(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Player_SHPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Player_SHPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
