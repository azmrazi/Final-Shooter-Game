// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/SH_AICharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSH_AICharacter() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ASH_AICharacter_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ASH_AICharacter();
	SHOOTER_API UClass* Z_Construct_UClass_ASH_BaseCharacter();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void ASH_AICharacter::StaticRegisterNativesASH_AICharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASH_AICharacter);
	UClass* Z_Construct_UClass_ASH_AICharacter_NoRegister()
	{
		return ASH_AICharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASH_AICharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UbehaviorTreeAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UbehaviorTreeAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASH_AICharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASH_BaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASH_AICharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/SH_AICharacter.h" },
		{ "ModuleRelativePath", "Public/AI/SH_AICharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASH_AICharacter_Statics::NewProp_UbehaviorTreeAsset_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/SH_AICharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASH_AICharacter_Statics::NewProp_UbehaviorTreeAsset = { "UbehaviorTreeAsset", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASH_AICharacter, UbehaviorTreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASH_AICharacter_Statics::NewProp_UbehaviorTreeAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASH_AICharacter_Statics::NewProp_UbehaviorTreeAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASH_AICharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASH_AICharacter_Statics::NewProp_UbehaviorTreeAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASH_AICharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASH_AICharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASH_AICharacter_Statics::ClassParams = {
		&ASH_AICharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASH_AICharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASH_AICharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASH_AICharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASH_AICharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASH_AICharacter()
	{
		if (!Z_Registration_Info_UClass_ASH_AICharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASH_AICharacter.OuterSingleton, Z_Construct_UClass_ASH_AICharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASH_AICharacter.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<ASH_AICharacter>()
	{
		return ASH_AICharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASH_AICharacter);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_SH_AICharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_SH_AICharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASH_AICharacter, ASH_AICharacter::StaticClass, TEXT("ASH_AICharacter"), &Z_Registration_Info_UClass_ASH_AICharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASH_AICharacter), 756722658U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_SH_AICharacter_h_802711251(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_SH_AICharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_SH_AICharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
