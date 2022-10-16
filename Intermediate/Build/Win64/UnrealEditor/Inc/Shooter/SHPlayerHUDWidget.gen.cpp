// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/UI/SHPlayerHUDWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHPlayerHUDWidget() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USHPlayerHUDWidget_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USHPlayerHUDWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Shooter();
// End Cross Module References
	void USHPlayerHUDWidget::StaticRegisterNativesUSHPlayerHUDWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USHPlayerHUDWidget);
	UClass* Z_Construct_UClass_USHPlayerHUDWidget_NoRegister()
	{
		return USHPlayerHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_USHPlayerHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USHPlayerHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHPlayerHUDWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/SHPlayerHUDWidget.h" },
		{ "ModuleRelativePath", "Public/UI/SHPlayerHUDWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USHPlayerHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USHPlayerHUDWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USHPlayerHUDWidget_Statics::ClassParams = {
		&USHPlayerHUDWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USHPlayerHUDWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USHPlayerHUDWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USHPlayerHUDWidget()
	{
		if (!Z_Registration_Info_UClass_USHPlayerHUDWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USHPlayerHUDWidget.OuterSingleton, Z_Construct_UClass_USHPlayerHUDWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USHPlayerHUDWidget.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<USHPlayerHUDWidget>()
	{
		return USHPlayerHUDWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USHPlayerHUDWidget);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_UI_SHPlayerHUDWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_UI_SHPlayerHUDWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USHPlayerHUDWidget, USHPlayerHUDWidget::StaticClass, TEXT("USHPlayerHUDWidget"), &Z_Registration_Info_UClass_USHPlayerHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USHPlayerHUDWidget), 2014736114U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_UI_SHPlayerHUDWidget_h_1347598884(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_UI_SHPlayerHUDWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_UI_SHPlayerHUDWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
