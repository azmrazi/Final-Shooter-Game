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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
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
	DEFINE_FUNCTION(USH_HealthComponent::execIsPlayerSpectating)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerSpectating();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USH_HealthComponent::execIsPlayerAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerAlive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USH_HealthComponent::execGetHealthPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthPercent();
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
			{ "GetHealthPercent", &USH_HealthComponent::execGetHealthPercent },
			{ "IsDead", &USH_HealthComponent::execIsDead },
			{ "IsPlayerAlive", &USH_HealthComponent::execIsPlayerAlive },
			{ "IsPlayerSpectating", &USH_HealthComponent::execIsPlayerSpectating },
			{ "OnTakeAnyDamage", &USH_HealthComponent::execOnTakeAnyDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USH_HealthComponent_GetHealthPercent_Statics
	{
		struct SH_HealthComponent_eventGetHealthPercent_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USH_HealthComponent_GetHealthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SH_HealthComponent_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USH_HealthComponent_GetHealthPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_HealthComponent_GetHealthPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USH_HealthComponent_GetHealthPercent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/Components/SH_HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_HealthComponent_GetHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_HealthComponent, nullptr, "GetHealthPercent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USH_HealthComponent_GetHealthPercent_Statics::SH_HealthComponent_eventGetHealthPercent_Parms), Z_Construct_UFunction_USH_HealthComponent_GetHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_HealthComponent_GetHealthPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USH_HealthComponent_GetHealthPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_HealthComponent_GetHealthPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USH_HealthComponent_GetHealthPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USH_HealthComponent_GetHealthPercent_Statics::FuncParams);
		}
		return ReturnFunction;
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
		{ "Category", "Health" },
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
	struct Z_Construct_UFunction_USH_HealthComponent_IsPlayerAlive_Statics
	{
		struct SH_HealthComponent_eventIsPlayerAlive_Parms
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
	void Z_Construct_UFunction_USH_HealthComponent_IsPlayerAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SH_HealthComponent_eventIsPlayerAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USH_HealthComponent_IsPlayerAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SH_HealthComponent_eventIsPlayerAlive_Parms), &Z_Construct_UFunction_USH_HealthComponent_IsPlayerAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USH_HealthComponent_IsPlayerAlive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_HealthComponent_IsPlayerAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USH_HealthComponent_IsPlayerAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Components/SH_HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_HealthComponent_IsPlayerAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_HealthComponent, nullptr, "IsPlayerAlive", nullptr, nullptr, sizeof(Z_Construct_UFunction_USH_HealthComponent_IsPlayerAlive_Statics::SH_HealthComponent_eventIsPlayerAlive_Parms), Z_Construct_UFunction_USH_HealthComponent_IsPlayerAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_HealthComponent_IsPlayerAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USH_HealthComponent_IsPlayerAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_HealthComponent_IsPlayerAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USH_HealthComponent_IsPlayerAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USH_HealthComponent_IsPlayerAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USH_HealthComponent_IsPlayerSpectating_Statics
	{
		struct SH_HealthComponent_eventIsPlayerSpectating_Parms
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
	void Z_Construct_UFunction_USH_HealthComponent_IsPlayerSpectating_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SH_HealthComponent_eventIsPlayerSpectating_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USH_HealthComponent_IsPlayerSpectating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SH_HealthComponent_eventIsPlayerSpectating_Parms), &Z_Construct_UFunction_USH_HealthComponent_IsPlayerSpectating_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USH_HealthComponent_IsPlayerSpectating_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USH_HealthComponent_IsPlayerSpectating_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USH_HealthComponent_IsPlayerSpectating_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Components/SH_HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_HealthComponent_IsPlayerSpectating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_HealthComponent, nullptr, "IsPlayerSpectating", nullptr, nullptr, sizeof(Z_Construct_UFunction_USH_HealthComponent_IsPlayerSpectating_Statics::SH_HealthComponent_eventIsPlayerSpectating_Parms), Z_Construct_UFunction_USH_HealthComponent_IsPlayerSpectating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_HealthComponent_IsPlayerSpectating_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USH_HealthComponent_IsPlayerSpectating_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_HealthComponent_IsPlayerSpectating_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USH_HealthComponent_IsPlayerSpectating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USH_HealthComponent_IsPlayerSpectating_Statics::FuncParams);
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
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Components/SH_HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USH_HealthComponent, nullptr, "OnTakeAnyDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::SH_HealthComponent_eventOnTakeAnyDamage_Parms), Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage_Statics::Function_MetaDataParams)) };
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraShake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraShake;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USH_HealthComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USH_HealthComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USH_HealthComponent_GetHealthPercent, "GetHealthPercent" }, // 335071551
		{ &Z_Construct_UFunction_USH_HealthComponent_IsDead, "IsDead" }, // 3004925552
		{ &Z_Construct_UFunction_USH_HealthComponent_IsPlayerAlive, "IsPlayerAlive" }, // 2926110874
		{ &Z_Construct_UFunction_USH_HealthComponent_IsPlayerSpectating, "IsPlayerSpectating" }, // 136137182
		{ &Z_Construct_UFunction_USH_HealthComponent_OnTakeAnyDamage, "OnTakeAnyDamage" }, // 1826383594
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_CameraShake_MetaData[] = {
		{ "Category", "VFX" },
		{ "ModuleRelativePath", "Public/Components/SH_HealthComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_CameraShake = { "CameraShake", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USH_HealthComponent, CameraShake), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_CameraShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_CameraShake_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USH_HealthComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_AutoHeal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_HealUpdateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_HealDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_HealModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USH_HealthComponent_Statics::NewProp_CameraShake,
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
		{ Z_Construct_UClass_USH_HealthComponent, USH_HealthComponent::StaticClass, TEXT("USH_HealthComponent"), &Z_Registration_Info_UClass_USH_HealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USH_HealthComponent), 3394145630U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_2915182943(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
