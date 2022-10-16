// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAmmoData;
struct FWeaponUIData;
#ifdef SHOOTER_SHWeaponComponent_generated_h
#error "SHWeaponComponent.generated.h already included, missing '#pragma once' in SHWeaponComponent.h"
#endif
#define SHOOTER_SHWeaponComponent_generated_h

#define FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_15_SPARSE_DATA
#define FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWeaponAmmoData); \
	DECLARE_FUNCTION(execGetWeaponUIData);


#define FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWeaponAmmoData); \
	DECLARE_FUNCTION(execGetWeaponUIData);


#define FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSHWeaponComponent(); \
	friend struct Z_Construct_UClass_USHWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(USHWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(USHWeaponComponent)


#define FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSHWeaponComponent(); \
	friend struct Z_Construct_UClass_USHWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(USHWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(USHWeaponComponent)


#define FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USHWeaponComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USHWeaponComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USHWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USHWeaponComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USHWeaponComponent(USHWeaponComponent&&); \
	NO_API USHWeaponComponent(const USHWeaponComponent&); \
public:


#define FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USHWeaponComponent(USHWeaponComponent&&); \
	NO_API USHWeaponComponent(const USHWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USHWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USHWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USHWeaponComponent)


#define FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_12_PROLOG
#define FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_15_SPARSE_DATA \
	FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_15_RPC_WRAPPERS \
	FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_15_INCLASS \
	FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_15_SPARSE_DATA \
	FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class USHWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Shooter_5_0___2_Source_Shooter_Public_Components_SHWeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
