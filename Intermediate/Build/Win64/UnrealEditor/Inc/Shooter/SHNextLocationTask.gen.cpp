// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/AI/Tasks/SHNextLocationTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHNextLocationTask() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USHNextLocationTask_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USHNextLocationTask();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void USHNextLocationTask::StaticRegisterNativesUSHNextLocationTask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USHNextLocationTask);
	UClass* Z_Construct_UClass_USHNextLocationTask_NoRegister()
	{
		return USHNextLocationTask::StaticClass();
	}
	struct Z_Construct_UClass_USHNextLocationTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimLocationKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AimLocationKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelfCenter_MetaData[];
#endif
		static void NewProp_SelfCenter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SelfCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterActorKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CenterActorKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USHNextLocationTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHNextLocationTask_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/Tasks/SHNextLocationTask.h" },
		{ "ModuleRelativePath", "Public/AI/Tasks/SHNextLocationTask.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHNextLocationTask_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/Tasks/SHNextLocationTask.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USHNextLocationTask_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USHNextLocationTask, Radius), METADATA_PARAMS(Z_Construct_UClass_USHNextLocationTask_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHNextLocationTask_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHNextLocationTask_Statics::NewProp_AimLocationKey_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/Tasks/SHNextLocationTask.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USHNextLocationTask_Statics::NewProp_AimLocationKey = { "AimLocationKey", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USHNextLocationTask, AimLocationKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USHNextLocationTask_Statics::NewProp_AimLocationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHNextLocationTask_Statics::NewProp_AimLocationKey_MetaData)) }; // 454597379
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHNextLocationTask_Statics::NewProp_SelfCenter_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/Tasks/SHNextLocationTask.h" },
	};
#endif
	void Z_Construct_UClass_USHNextLocationTask_Statics::NewProp_SelfCenter_SetBit(void* Obj)
	{
		((USHNextLocationTask*)Obj)->SelfCenter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USHNextLocationTask_Statics::NewProp_SelfCenter = { "SelfCenter", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USHNextLocationTask), &Z_Construct_UClass_USHNextLocationTask_Statics::NewProp_SelfCenter_SetBit, METADATA_PARAMS(Z_Construct_UClass_USHNextLocationTask_Statics::NewProp_SelfCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHNextLocationTask_Statics::NewProp_SelfCenter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHNextLocationTask_Statics::NewProp_CenterActorKey_MetaData[] = {
		{ "Category", "AI" },
		{ "EditCondition", "!SelfCenter" },
		{ "ModuleRelativePath", "Public/AI/Tasks/SHNextLocationTask.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USHNextLocationTask_Statics::NewProp_CenterActorKey = { "CenterActorKey", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USHNextLocationTask, CenterActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_USHNextLocationTask_Statics::NewProp_CenterActorKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHNextLocationTask_Statics::NewProp_CenterActorKey_MetaData)) }; // 454597379
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USHNextLocationTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHNextLocationTask_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHNextLocationTask_Statics::NewProp_AimLocationKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHNextLocationTask_Statics::NewProp_SelfCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHNextLocationTask_Statics::NewProp_CenterActorKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USHNextLocationTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USHNextLocationTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USHNextLocationTask_Statics::ClassParams = {
		&USHNextLocationTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USHNextLocationTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USHNextLocationTask_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USHNextLocationTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USHNextLocationTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USHNextLocationTask()
	{
		if (!Z_Registration_Info_UClass_USHNextLocationTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USHNextLocationTask.OuterSingleton, Z_Construct_UClass_USHNextLocationTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USHNextLocationTask.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<USHNextLocationTask>()
	{
		return USHNextLocationTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USHNextLocationTask);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Tasks_SHNextLocationTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Tasks_SHNextLocationTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USHNextLocationTask, USHNextLocationTask::StaticClass, TEXT("USHNextLocationTask"), &Z_Registration_Info_UClass_USHNextLocationTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USHNextLocationTask), 1428730785U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Tasks_SHNextLocationTask_h_3663569255(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Tasks_SHNextLocationTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_AI_Tasks_SHNextLocationTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
