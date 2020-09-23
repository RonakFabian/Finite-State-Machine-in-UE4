// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FSM_FSMHUD_generated_h
#error "FSMHUD.generated.h already included, missing '#pragma once' in FSMHUD.h"
#endif
#define FSM_FSMHUD_generated_h

#define FSM_Source_FSM_FSMHUD_h_12_SPARSE_DATA
#define FSM_Source_FSM_FSMHUD_h_12_RPC_WRAPPERS
#define FSM_Source_FSM_FSMHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FSM_Source_FSM_FSMHUD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFSMHUD(); \
	friend struct Z_Construct_UClass_AFSMHUD_Statics; \
public: \
	DECLARE_CLASS(AFSMHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FSM"), NO_API) \
	DECLARE_SERIALIZER(AFSMHUD)


#define FSM_Source_FSM_FSMHUD_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFSMHUD(); \
	friend struct Z_Construct_UClass_AFSMHUD_Statics; \
public: \
	DECLARE_CLASS(AFSMHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FSM"), NO_API) \
	DECLARE_SERIALIZER(AFSMHUD)


#define FSM_Source_FSM_FSMHUD_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFSMHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFSMHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFSMHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFSMHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFSMHUD(AFSMHUD&&); \
	NO_API AFSMHUD(const AFSMHUD&); \
public:


#define FSM_Source_FSM_FSMHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFSMHUD(AFSMHUD&&); \
	NO_API AFSMHUD(const AFSMHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFSMHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFSMHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFSMHUD)


#define FSM_Source_FSM_FSMHUD_h_12_PRIVATE_PROPERTY_OFFSET
#define FSM_Source_FSM_FSMHUD_h_9_PROLOG
#define FSM_Source_FSM_FSMHUD_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSM_Source_FSM_FSMHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	FSM_Source_FSM_FSMHUD_h_12_SPARSE_DATA \
	FSM_Source_FSM_FSMHUD_h_12_RPC_WRAPPERS \
	FSM_Source_FSM_FSMHUD_h_12_INCLASS \
	FSM_Source_FSM_FSMHUD_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSM_Source_FSM_FSMHUD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSM_Source_FSM_FSMHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	FSM_Source_FSM_FSMHUD_h_12_SPARSE_DATA \
	FSM_Source_FSM_FSMHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FSM_Source_FSM_FSMHUD_h_12_INCLASS_NO_PURE_DECLS \
	FSM_Source_FSM_FSMHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FSM_API UClass* StaticClass<class AFSMHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSM_Source_FSM_FSMHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
