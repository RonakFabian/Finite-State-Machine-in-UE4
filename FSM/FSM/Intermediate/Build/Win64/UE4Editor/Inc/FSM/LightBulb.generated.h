// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FSM_LightBulb_generated_h
#error "LightBulb.generated.h already included, missing '#pragma once' in LightBulb.h"
#endif
#define FSM_LightBulb_generated_h

#define FSM_Source_FSM_LightBulb_h_19_SPARSE_DATA
#define FSM_Source_FSM_LightBulb_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleState(); \
		P_NATIVE_END; \
	}


#define FSM_Source_FSM_LightBulb_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleState(); \
		P_NATIVE_END; \
	}


#define FSM_Source_FSM_LightBulb_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightBulb(); \
	friend struct Z_Construct_UClass_ALightBulb_Statics; \
public: \
	DECLARE_CLASS(ALightBulb, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FSM"), NO_API) \
	DECLARE_SERIALIZER(ALightBulb)


#define FSM_Source_FSM_LightBulb_h_19_INCLASS \
private: \
	static void StaticRegisterNativesALightBulb(); \
	friend struct Z_Construct_UClass_ALightBulb_Statics; \
public: \
	DECLARE_CLASS(ALightBulb, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FSM"), NO_API) \
	DECLARE_SERIALIZER(ALightBulb)


#define FSM_Source_FSM_LightBulb_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightBulb(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightBulb) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightBulb); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightBulb); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightBulb(ALightBulb&&); \
	NO_API ALightBulb(const ALightBulb&); \
public:


#define FSM_Source_FSM_LightBulb_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightBulb(ALightBulb&&); \
	NO_API ALightBulb(const ALightBulb&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightBulb); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightBulb); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALightBulb)


#define FSM_Source_FSM_LightBulb_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__isON() { return STRUCT_OFFSET(ALightBulb, isON); }


#define FSM_Source_FSM_LightBulb_h_16_PROLOG
#define FSM_Source_FSM_LightBulb_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSM_Source_FSM_LightBulb_h_19_PRIVATE_PROPERTY_OFFSET \
	FSM_Source_FSM_LightBulb_h_19_SPARSE_DATA \
	FSM_Source_FSM_LightBulb_h_19_RPC_WRAPPERS \
	FSM_Source_FSM_LightBulb_h_19_INCLASS \
	FSM_Source_FSM_LightBulb_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSM_Source_FSM_LightBulb_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSM_Source_FSM_LightBulb_h_19_PRIVATE_PROPERTY_OFFSET \
	FSM_Source_FSM_LightBulb_h_19_SPARSE_DATA \
	FSM_Source_FSM_LightBulb_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FSM_Source_FSM_LightBulb_h_19_INCLASS_NO_PURE_DECLS \
	FSM_Source_FSM_LightBulb_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FSM_API UClass* StaticClass<class ALightBulb>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSM_Source_FSM_LightBulb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
