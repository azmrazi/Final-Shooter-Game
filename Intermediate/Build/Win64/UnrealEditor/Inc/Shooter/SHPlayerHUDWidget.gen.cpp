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
	static FName NAME_USHPlayerHUDWidget_OnTakeDamage = FName(TEXT("OnTakeDamage"));
	void USHPlayerHUDWidget::OnTakeDamage()
	{
		ProcessEvent(FindFunctionChecked(NAME_USHPlayerHUDWidget_OnTakeDamage),NULL);
	}
	void USHPlayerHUDWidget::StaticRegisterNativesUSHPlayerHUDWidget()
	{
	}
	struct Z_Construct_UFunction_USHPlayerHUDWidget_OnTakeDamage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USHPlayerHUDWidget_OnTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/UI/SHPlayerHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USHPlayerHUDWidget_OnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USHPlayerHUDWidget, nullptr, "OnTakeDamage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USHPlayerHUDWidget_OnTakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USHPlayerHUDWidget_OnTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USHPlayerHUDWidget_OnTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USHPlayerHUDWidget_OnTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USHPlayerHUDWidget);
	UClass* Z_Construct_UClass_USHPlayerHUDWidget_NoRegister()
	{
		return USHPlayerHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_USHPlayerHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_USHPlayerHUDWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USHPlayerHUDWidget_OnTakeDamage, "OnTakeDamage" }, // 2436089019
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_USHPlayerHUDWidget, USHPlayerHUDWidget::StaticClass, TEXT("USHPlayerHUDWidget"), &Z_Registration_Info_UClass_USHPlayerHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USHPlayerHUDWidget), 4194509890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_UI_SHPlayerHUDWidget_h_2589296570(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_UI_SHPlayerHUDWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_UI_SHPlayerHUDWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
