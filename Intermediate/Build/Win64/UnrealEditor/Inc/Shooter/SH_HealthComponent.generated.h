// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDamageType;
class AController;
#ifdef SHOOTER_SH_HealthComponent_generated_h
#error "SH_HealthComponent.generated.h already included, missing '#pragma once' in SH_HealthComponent.h"
#endif
#define SHOOTER_SH_HealthComponent_generated_h

#define FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_16_SPARSE_DATA
#define FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTakeAnyDamage); \
	DECLARE_FUNCTION(execIsPlayerSpectating); \
	DECLARE_FUNCTION(execIsPlayerAlive); \
	DECLARE_FUNCTION(execGetHealthPercent); \
	DECLARE_FUNCTION(execIsDead);


#define FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTakeAnyDamage); \
	DECLARE_FUNCTION(execIsPlayerSpectating); \
	DECLARE_FUNCTION(execIsPlayerAlive); \
	DECLARE_FUNCTION(execGetHealthPercent); \
	DECLARE_FUNCTION(execIsDead);


#define FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSH_HealthComponent(); \
	friend struct Z_Construct_UClass_USH_HealthComponent_Statics; \
public: \
	DECLARE_CLASS(USH_HealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(USH_HealthComponent)


#define FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUSH_HealthComponent(); \
	friend struct Z_Construct_UClass_USH_HealthComponent_Statics; \
public: \
	DECLARE_CLASS(USH_HealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(USH_HealthComponent)


#define FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USH_HealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USH_HealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USH_HealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USH_HealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USH_HealthComponent(USH_HealthComponent&&); \
	NO_API USH_HealthComponent(const USH_HealthComponent&); \
public:


#define FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USH_HealthComponent(USH_HealthComponent&&); \
	NO_API USH_HealthComponent(const USH_HealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USH_HealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USH_HealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USH_HealthComponent)


#define FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_13_PROLOG
#define FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_16_SPARSE_DATA \
	FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_16_RPC_WRAPPERS \
	FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_16_INCLASS \
	FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_16_SPARSE_DATA \
	FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class USH_HealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Shooter_5_0___2_Source_Shooter_Public_Components_SH_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
