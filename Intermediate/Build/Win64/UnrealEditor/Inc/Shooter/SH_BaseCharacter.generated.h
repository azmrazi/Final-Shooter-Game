// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef SHOOTER_SH_BaseCharacter_generated_h
#error "SH_BaseCharacter.generated.h already included, missing '#pragma once' in SH_BaseCharacter.h"
#endif
#define SHOOTER_SH_BaseCharacter_generated_h

#define FID_Shooter_5_0___2_Source_Shooter_Public_Player_SH_BaseCharacter_h_19_SPARSE_DATA
#define FID_Shooter_5_0___2_Source_Shooter_Public_Player_SH_BaseCharacter_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnGroundLanded); \
	DECLARE_FUNCTION(execGetMovementDirection);


#define FID_Shooter_5_0___2_Source_Shooter_Public_Player_SH_BaseCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnGroundLanded); \
	DECLARE_FUNCTION(execGetMovementDirection);


#define FID_Shooter_5_0___2_Source_Shooter_Public_Player_SH_BaseCharacter_h_19_EVENT_PARMS
#define FID_Shooter_5_0___2_Source_Shooter_Public_Player_SH_BaseCharacter_h_19_CALLBACK_WRAPPERS
#define FID_Shooter_5_0___2_Source_Shooter_Public_Player_SH_BaseCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASH_BaseCharacter(); \
	friend struct Z_Construct_UClass_ASH_BaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ASH_BaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASH_BaseCharacter)


#define FID_Shooter_5_0___2_Source_Shooter_Public_Player_SH_BaseCharacter_h_19_INCLASS \
private: \
	static void StaticRegisterNativesASH_BaseCharacter(); \
	friend struct Z_Construct_UClass_ASH_BaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ASH_BaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Shooter"), NO_API) \
	DECLARE_SERIALIZER(ASH_BaseCharacter)


#define FID_Shooter_5_0___2_Source_Shooter_Public_Player_SH_BaseCharacter_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASH_BaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASH_BaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASH_BaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASH_BaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASH_BaseCharacter(ASH_BaseCharacter&&); \
	NO_API ASH_BaseCharacter(const ASH_BaseCharacter&); \
public:


#define FID_Shooter_5_0___2_Source_Shooter_Public_Player_SH_BaseCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASH_BaseCharacter(ASH_BaseCharacter&&); \
	NO_API ASH_BaseCharacter(const ASH_BaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASH_BaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASH_BaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASH_BaseCharacter)


#define FID_Shooter_5_0___2_Source_Shooter_Public_Player_SH_BaseCharacter_h_16_PROLOG \
	FID_Shooter_5_0___2_Source_Shooter_Public_Player_SH_BaseCharacter_h_19_EVENT_PARMS


#define FID_Shooter_5_0___2_Source_Shooter_Public_Player_SH_BaseCharacter_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Shooter_5_0___2_Source_Shooter_Public_Player_SH_BaseCharacter_h_19_SPARSE_DATA \
	FID_Shooter_5_0___2_Source_Shooter_Public_Player_SH_BaseCharacter_h_19_RPC_WRAPPERS \
	FID_Shooter_5_0___2_Source_Shooter_Public_Player_SH_BaseCharacter_h_19_CALLBACK_WRAPPERS \
	FID_Shooter_5_0___2_Source_Shooter_Public_Player_SH_BaseCharacter_h_19_INCLASS \
	FID_Shooter_5_0___2_Source_Shooter_Public_Player_SH_BaseCharacter_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Shooter_5_0___2_Source_Shooter_Public_Player_SH_BaseCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Shooter_5_0___2_Source_Shooter_Public_Player_SH_BaseCharacter_h_19_SPARSE_DATA \
	FID_Shooter_5_0___2_Source_Shooter_Public_Player_SH_BaseCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Shooter_5_0___2_Source_Shooter_Public_Player_SH_BaseCharacter_h_19_CALLBACK_WRAPPERS \
	FID_Shooter_5_0___2_Source_Shooter_Public_Player_SH_BaseCharacter_h_19_INCLASS_NO_PURE_DECLS \
	FID_Shooter_5_0___2_Source_Shooter_Public_Player_SH_BaseCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_API UClass* StaticClass<class ASH_BaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Shooter_5_0___2_Source_Shooter_Public_Player_SH_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
