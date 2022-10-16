// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Public/Components/SHWeaponComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHWeaponComponent() {}
// Cross Module References
	SHOOTER_API UClass* Z_Construct_UClass_USHWeaponComponent_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_USHWeaponComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Shooter();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FAmmoData();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponUIData();
	SHOOTER_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	SHOOTER_API UClass* Z_Construct_UClass_ASHBaseWeapon_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USHWeaponComponent::execGetWeaponAmmoData)
	{
		P_GET_STRUCT_REF(FAmmoData,Z_Param_Out_AmmoData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWeaponAmmoData(Z_Param_Out_AmmoData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USHWeaponComponent::execGetWeaponUIData)
	{
		P_GET_STRUCT_REF(FWeaponUIData,Z_Param_Out_UIData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWeaponUIData(Z_Param_Out_UIData);
		P_NATIVE_END;
	}
	void USHWeaponComponent::StaticRegisterNativesUSHWeaponComponent()
	{
		UClass* Class = USHWeaponComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWeaponAmmoData", &USHWeaponComponent::execGetWeaponAmmoData },
			{ "GetWeaponUIData", &USHWeaponComponent::execGetWeaponUIData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USHWeaponComponent_GetWeaponAmmoData_Statics
	{
		struct SHWeaponComponent_eventGetWeaponAmmoData_Parms
		{
			FAmmoData AmmoData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AmmoData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USHWeaponComponent_GetWeaponAmmoData_Statics::NewProp_AmmoData = { "AmmoData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SHWeaponComponent_eventGetWeaponAmmoData_Parms, AmmoData), Z_Construct_UScriptStruct_FAmmoData, METADATA_PARAMS(nullptr, 0) }; // 2560505190
	void Z_Construct_UFunction_USHWeaponComponent_GetWeaponAmmoData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SHWeaponComponent_eventGetWeaponAmmoData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USHWeaponComponent_GetWeaponAmmoData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SHWeaponComponent_eventGetWeaponAmmoData_Parms), &Z_Construct_UFunction_USHWeaponComponent_GetWeaponAmmoData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USHWeaponComponent_GetWeaponAmmoData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USHWeaponComponent_GetWeaponAmmoData_Statics::NewProp_AmmoData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USHWeaponComponent_GetWeaponAmmoData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USHWeaponComponent_GetWeaponAmmoData_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Components/SHWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USHWeaponComponent_GetWeaponAmmoData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USHWeaponComponent, nullptr, "GetWeaponAmmoData", nullptr, nullptr, sizeof(Z_Construct_UFunction_USHWeaponComponent_GetWeaponAmmoData_Statics::SHWeaponComponent_eventGetWeaponAmmoData_Parms), Z_Construct_UFunction_USHWeaponComponent_GetWeaponAmmoData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USHWeaponComponent_GetWeaponAmmoData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USHWeaponComponent_GetWeaponAmmoData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USHWeaponComponent_GetWeaponAmmoData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USHWeaponComponent_GetWeaponAmmoData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USHWeaponComponent_GetWeaponAmmoData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USHWeaponComponent_GetWeaponUIData_Statics
	{
		struct SHWeaponComponent_eventGetWeaponUIData_Parms
		{
			FWeaponUIData UIData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_UIData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USHWeaponComponent_GetWeaponUIData_Statics::NewProp_UIData = { "UIData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SHWeaponComponent_eventGetWeaponUIData_Parms, UIData), Z_Construct_UScriptStruct_FWeaponUIData, METADATA_PARAMS(nullptr, 0) }; // 3634516111
	void Z_Construct_UFunction_USHWeaponComponent_GetWeaponUIData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SHWeaponComponent_eventGetWeaponUIData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USHWeaponComponent_GetWeaponUIData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SHWeaponComponent_eventGetWeaponUIData_Parms), &Z_Construct_UFunction_USHWeaponComponent_GetWeaponUIData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USHWeaponComponent_GetWeaponUIData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USHWeaponComponent_GetWeaponUIData_Statics::NewProp_UIData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USHWeaponComponent_GetWeaponUIData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USHWeaponComponent_GetWeaponUIData_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Components/SHWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USHWeaponComponent_GetWeaponUIData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USHWeaponComponent, nullptr, "GetWeaponUIData", nullptr, nullptr, sizeof(Z_Construct_UFunction_USHWeaponComponent_GetWeaponUIData_Statics::SHWeaponComponent_eventGetWeaponUIData_Parms), Z_Construct_UFunction_USHWeaponComponent_GetWeaponUIData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USHWeaponComponent_GetWeaponUIData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USHWeaponComponent_GetWeaponUIData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USHWeaponComponent_GetWeaponUIData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USHWeaponComponent_GetWeaponUIData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USHWeaponComponent_GetWeaponUIData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USHWeaponComponent);
	UClass* Z_Construct_UClass_USHWeaponComponent_NoRegister()
	{
		return USHWeaponComponent::StaticClass();
	}
	struct Z_Construct_UClass_USHWeaponComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WeaponData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponEquipSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponEquipSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponArmorySocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponArmorySocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipAnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipAnimMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weapons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Weapons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentReloadAnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentReloadAnimMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USHWeaponComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USHWeaponComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USHWeaponComponent_GetWeaponAmmoData, "GetWeaponAmmoData" }, // 1936526368
		{ &Z_Construct_UFunction_USHWeaponComponent_GetWeaponUIData, "GetWeaponUIData" }, // 3335308945
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHWeaponComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/SHWeaponComponent.h" },
		{ "ModuleRelativePath", "Public/Components/SHWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponData_Inner = { "WeaponData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWeaponData, METADATA_PARAMS(nullptr, 0) }; // 863554647
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponData_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Components/SHWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponData = { "WeaponData", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USHWeaponComponent, WeaponData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponData_MetaData)) }; // 863554647
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponEquipSocketName_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Components/SHWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponEquipSocketName = { "WeaponEquipSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USHWeaponComponent, WeaponEquipSocketName), METADATA_PARAMS(Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponEquipSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponEquipSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponArmorySocketName_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Components/SHWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponArmorySocketName = { "WeaponArmorySocketName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USHWeaponComponent, WeaponArmorySocketName), METADATA_PARAMS(Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponArmorySocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponArmorySocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_EquipAnimMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Components/SHWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_EquipAnimMontage = { "EquipAnimMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USHWeaponComponent, EquipAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_EquipAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_EquipAnimMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SHWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USHWeaponComponent, CurrentWeapon), Z_Construct_UClass_ASHBaseWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_CurrentWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_CurrentWeapon_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_Weapons_Inner = { "Weapons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASHBaseWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_Weapons_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SHWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_Weapons = { "Weapons", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USHWeaponComponent, Weapons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_Weapons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_Weapons_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_CurrentReloadAnimMontage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SHWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_CurrentReloadAnimMontage = { "CurrentReloadAnimMontage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USHWeaponComponent, CurrentReloadAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_CurrentReloadAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_CurrentReloadAnimMontage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USHWeaponComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponEquipSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_WeaponArmorySocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_EquipAnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_CurrentWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_Weapons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_Weapons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USHWeaponComponent_Statics::NewProp_CurrentReloadAnimMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USHWeaponComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USHWeaponComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USHWeaponComponent_Statics::ClassParams = {
		&USHWeaponComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USHWeaponComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USHWeaponComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USHWeaponComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USHWeaponComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USHWeaponComponent()
	{
		if (!Z_Registration_Info_UClass_USHWeaponComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USHWeaponComponent.OuterSingleton, Z_Construct_UClass_USHWeaponComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USHWeaponComponent.OuterSingleton;
	}
	template<> SHOOTER_API UClass* StaticClass<USHWeaponComponent>()
	{
		return USHWeaponComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USHWeaponComponent);
	struct Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USHWeaponComponent, USHWeaponComponent::StaticClass, TEXT("USHWeaponComponent"), &Z_Registration_Info_UClass_USHWeaponComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USHWeaponComponent), 1466253281U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_1192149750(TEXT("/Script/Shooter"),
		Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
