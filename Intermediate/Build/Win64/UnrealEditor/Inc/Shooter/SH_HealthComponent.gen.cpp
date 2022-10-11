// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Components/SH_HealthComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSH_HealthComponent() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USH_HealthComponent_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USH_HealthComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USH_HealthComponent::execOnTakeAnyDamage)
	{
		P_GET_OBJECT(AActor,Z_Param_DamageActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTakeAnyDamage(Z_Param_DamageActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USH_HealthComponent::execIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDead();
		P_NATIVE_END;
	}
	void USH_HealthComponent::StaticRegisterNativesUSH_HealthComponent()
	{
		UClass* Class = USH_HealthComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsDead", &USH_HealthComponent::execIsDead },
			{ "OnTakeAnyDamage", &USH_HealthComponent::execOnTakeAnyDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USH_HealthComponent_IsDead_Statics
	{
		struct SH_HealthComponent_eventIsDead_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USH_HealthComponent_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SH_HealthComponent_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USH_HealthComponent_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SH_HealthComponent_eventIsDead_Parms), &Z_Construct_UFunction_USH_HealthComponent_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USH_HealthComponent_IsDead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_HealthComponent_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USH_HealthComponent_IsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SH_HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_HealthComponent_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_HealthComponent, nullptr, "IsDead", nullptr, nullptr, sizeof(Z_Construct_UFunction_USH_HealthComponent_IsDead_Statics::SH_HealthComponent_eventIsDead_Parms), Z_Construct_UFunction_USH_HealthComponent_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_HealthComponent_IsDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USH_HealthComponent_IsDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_HealthComponent_IsDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USH_HealthComponent_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USH_HealthComponent_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics
	{
		struct SH_HealthComponent_eventOnTakeAnyDamage_Parms
		{
			AActor* DamageActor;
			float Damage;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageActor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageActor = { "DamageActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SH_HealthComponent_eventOnTakeAnyDamage_Parms, DamageActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SH_HealthComponent_eventOnTakeAnyDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SH_HealthComponent_eventOnTakeAnyDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SH_HealthComponent_eventOnTakeAnyDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SH_HealthComponent_eventOnTakeAnyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::NewProp_InstigatedBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SH_HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_HealthComponent, nullptr, "OnTakeAnyDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::SH_HealthComponent_eventOnTakeAnyDamage_Parms), Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USH_HealthComponent);
	UClass* Z_Construct_UClass_USH_HealthComponent_NoRegister()
	{
		return USH_HealthComponent::StaticClass();
	}
	struct Z_Construct_UClass_USH_HealthComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoHeal_MetaData[];
#endif
		static void NewProp_AutoHeal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoHeal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealUpdateTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealUpdateTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealModifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USH_HealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USH_HealthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USH_HealthComponent_IsDead, "IsDead" }, // 903175415
		{ &Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage, "OnTakeAnyDamage" }, // 2446575559
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USH_HealthComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/SH_HealthComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SH_HealthComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Called when the game starts\n" },
		{ "ModuleRelativePath", "Public/Components/SH_HealthComponent.h" },
		{ "ToolTip", "Called when the game starts" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USH_HealthComponent, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_AutoHeal_MetaData[] = {
		{ "Category", "Heal" },
		{ "ModuleRelativePath", "Public/Components/SH_HealthComponent.h" },
	};
#endif
	void Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_AutoHeal_SetBit(void* Obj)
	{
		((USH_HealthComponent*)Obj)->AutoHeal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_AutoHeal = { "AutoHeal", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USH_HealthComponent), &Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_AutoHeal_SetBit, METADATA_PARAMS(Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_AutoHeal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_AutoHeal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_HealUpdateTime_MetaData[] = {
		{ "Category", "Heal" },
		{ "ModuleRelativePath", "Public/Components/SH_HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_HealUpdateTime = { "HealUpdateTime", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USH_HealthComponent, HealUpdateTime), METADATA_PARAMS(Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_HealUpdateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_HealUpdateTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_HealDelay_MetaData[] = {
		{ "Category", "Heal" },
		{ "ModuleRelativePath", "Public/Components/SH_HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_HealDelay = { "HealDelay", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USH_HealthComponent, HealDelay), METADATA_PARAMS(Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_HealDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_HealDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_HealModifier_MetaData[] = {
		{ "Category", "Heal" },
		{ "ModuleRelativePath", "Public/Components/SH_HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_HealModifier = { "HealModifier", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USH_HealthComponent, HealModifier), METADATA_PARAMS(Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_HealModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_HealModifier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USH_HealthComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_AutoHeal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_HealUpdateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_HealDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_HealModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USH_HealthComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USH_HealthComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USH_HealthComponent_Statics::ClassParams = {
		&USH_HealthComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USH_HealthComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USH_HealthComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USH_HealthComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USH_HealthComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USH_HealthComponent()
	{
		if (!Z_Registration_Info_UClass_USH_HealthComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USH_HealthComponent.OuterSingleton, Z_Construct_UClass_USH_HealthComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USH_HealthComponent.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<USH_HealthComponent>()
	{
		return USH_HealthComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USH_HealthComponent);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USH_HealthComponent, USH_HealthComponent::StaticClass, TEXT("USH_HealthComponent"), &Z_Registration_Info_UClass_USH_HealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USH_HealthComponent), 3376093699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_3543664715(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
