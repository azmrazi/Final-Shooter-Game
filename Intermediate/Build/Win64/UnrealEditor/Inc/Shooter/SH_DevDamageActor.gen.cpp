// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Dev/SH_DevDamageActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSH_DevDamageActor() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_ASH_DevDamageActor_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ASH_DevDamageActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
// End Cross Module References
	void ASH_DevDamageActor::StaticRegisterNativesASH_DevDamageActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASH_DevDamageActor);
	UClass* Z_Construct_UClass_ASH_DevDamageActor_NoRegister()
	{
		return ASH_DevDamageActor::StaticClass();
	}
	struct Z_Construct_UClass_ASH_DevDamageActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SphereColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoFullDamage_MetaData[];
#endif
		static void NewProp_DoFullDamage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoFullDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASH_DevDamageActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASH_DevDamageActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Dev/SH_DevDamageActor.h" },
		{ "ModuleRelativePath", "Public/Dev/SH_DevDamageActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "SH_DevDamageActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dev/SH_DevDamageActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASH_DevDamageActor, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "SH_DevDamageActor" },
		{ "ModuleRelativePath", "Public/Dev/SH_DevDamageActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASH_DevDamageActor, Radius), METADATA_PARAMS(Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_SphereColor_MetaData[] = {
		{ "Category", "SH_DevDamageActor" },
		{ "ModuleRelativePath", "Public/Dev/SH_DevDamageActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_SphereColor = { "SphereColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASH_DevDamageActor, SphereColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_SphereColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_SphereColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "SH_DevDamageActor" },
		{ "ModuleRelativePath", "Public/Dev/SH_DevDamageActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASH_DevDamageActor, Damage), METADATA_PARAMS(Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_DoFullDamage_MetaData[] = {
		{ "Category", "SH_DevDamageActor" },
		{ "ModuleRelativePath", "Public/Dev/SH_DevDamageActor.h" },
	};
#endif
	void Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_DoFullDamage_SetBit(void* Obj)
	{
		((ASH_DevDamageActor*)Obj)->DoFullDamage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_DoFullDamage = { "DoFullDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASH_DevDamageActor), &Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_DoFullDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_DoFullDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_DoFullDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "SH_DevDamageActor" },
		{ "ModuleRelativePath", "Public/Dev/SH_DevDamageActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASH_DevDamageActor, DamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_DamageType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASH_DevDamageActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_SphereColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_DoFullDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASH_DevDamageActor_Statics::NewProp_DamageType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASH_DevDamageActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASH_DevDamageActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASH_DevDamageActor_Statics::ClassParams = {
		&ASH_DevDamageActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASH_DevDamageActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASH_DevDamageActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASH_DevDamageActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASH_DevDamageActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASH_DevDamageActor()
	{
		if (!Z_Registration_Info_UClass_ASH_DevDamageActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASH_DevDamageActor.OuterSingleton, Z_Construct_UClass_ASH_DevDamageActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASH_DevDamageActor.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<ASH_DevDamageActor>()
	{
		return ASH_DevDamageActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASH_DevDamageActor);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Dev_SH_DevDamageActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Dev_SH_DevDamageActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASH_DevDamageActor, ASH_DevDamageActor::StaticClass, TEXT("ASH_DevDamageActor"), &Z_Registration_Info_UClass_ASH_DevDamageActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASH_DevDamageActor), 4034917698U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Dev_SH_DevDamageActor_h_473627843(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Dev_SH_DevDamageActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Dev_SH_DevDamageActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
