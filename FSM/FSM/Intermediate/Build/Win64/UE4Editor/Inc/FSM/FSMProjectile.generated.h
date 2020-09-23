// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FSM_FSMProjectile_generated_h
#error "FSMProjectile.generated.h already included, missing '#pragma once' in FSMProjectile.h"
#endif
#define FSM_FSMProjectile_generated_h

#define FSM_Source_FSM_FSMProjectile_h_12_SPARSE_DATA
#define FSM_Source_FSM_FSMProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define FSM_Source_FSM_FSMProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define FSM_Source_FSM_FSMProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFSMProjectile(); \
	friend struct Z_Construct_UClass_AFSMProjectile_Statics; \
public: \
	DECLARE_CLASS(AFSMProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FSM"), NO_API) \
	DECLARE_SERIALIZER(AFSMProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FSM_Source_FSM_FSMProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFSMProjectile(); \
	friend struct Z_Construct_UClass_AFSMProjectile_Statics; \
public: \
	DECLARE_CLASS(AFSMProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FSM"), NO_API) \
	DECLARE_SERIALIZER(AFSMProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FSM_Source_FSM_FSMProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFSMProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFSMProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFSMProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFSMProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFSMProjectile(AFSMProjectile&&); \
	NO_API AFSMProjectile(const AFSMProjectile&); \
public:


#define FSM_Source_FSM_FSMProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFSMProjectile(AFSMProjectile&&); \
	NO_API AFSMProjectile(const AFSMProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFSMProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFSMProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFSMProjectile)


#define FSM_Source_FSM_FSMProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFSMProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFSMProjectile, ProjectileMovement); }


#define FSM_Source_FSM_FSMProjectile_h_9_PROLOG
#define FSM_Source_FSM_FSMProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSM_Source_FSM_FSMProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FSM_Source_FSM_FSMProjectile_h_12_SPARSE_DATA \
	FSM_Source_FSM_FSMProjectile_h_12_RPC_WRAPPERS \
	FSM_Source_FSM_FSMProjectile_h_12_INCLASS \
	FSM_Source_FSM_FSMProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSM_Source_FSM_FSMProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSM_Source_FSM_FSMProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FSM_Source_FSM_FSMProjectile_h_12_SPARSE_DATA \
	FSM_Source_FSM_FSMProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FSM_Source_FSM_FSMProjectile_h_12_INCLASS_NO_PURE_DECLS \
	FSM_Source_FSM_FSMProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FSM_API UClass* StaticClass<class AFSMProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSM_Source_FSM_FSMProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
