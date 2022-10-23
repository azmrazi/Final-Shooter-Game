// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/SHAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHAIController() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ASHAIController_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ASHAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	SHOOTER_API UClass* Z_Construct_UClass_UMyAIPerceptionComponent_NoRegister();
// End Cross Module References
	void ASHAIController::StaticRegisterNativesASHAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASHAIController);
	UClass* Z_Construct_UClass_ASHAIController_NoRegister()
	{
		return ASHAIController::StaticClass();
	}
	struct Z_Construct_UClass_ASHAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SHPerceptionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SHPerceptionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusOnKeyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FocusOnKeyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASHAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/SHAIController.h" },
		{ "ModuleRelativePath", "Public/AI/SHAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHAIController_Statics::NewProp_SHPerceptionComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/SHAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASHAIController_Statics::NewProp_SHPerceptionComponent = { "SHPerceptionComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASHAIController, SHPerceptionComponent), Z_Construct_UClass_UMyAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASHAIController_Statics::NewProp_SHPerceptionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASHAIController_Statics::NewProp_SHPerceptionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASHAIController_Statics::NewProp_FocusOnKeyName_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/SHAIController.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASHAIController_Statics::NewProp_FocusOnKeyName = { "FocusOnKeyName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASHAIController, FocusOnKeyName), METADATA_PARAMS(Z_Construct_UClass_ASHAIController_Statics::NewProp_FocusOnKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASHAIController_Statics::NewProp_FocusOnKeyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASHAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASHAIController_Statics::NewProp_SHPerceptionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASHAIController_Statics::NewProp_FocusOnKeyName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASHAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASHAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASHAIController_Statics::ClassParams = {
		&ASHAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASHAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASHAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASHAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASHAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASHAIController()
	{
		if (!Z_Registration_Info_UClass_ASHAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASHAIController.OuterSingleton, Z_Construct_UClass_ASHAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASHAIController.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<ASHAIController>()
	{
		return ASHAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASHAIController);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_SHAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_SHAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASHAIController, ASHAIController::StaticClass, TEXT("ASHAIController"), &Z_Registration_Info_UClass_ASHAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASHAIController), 2804098508U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_SHAIController_h_2676662188(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_SHAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_SHAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
