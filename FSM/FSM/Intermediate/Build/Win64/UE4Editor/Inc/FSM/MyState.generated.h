// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FSM_MyState_generated_h
#error "MyState.generated.h already included, missing '#pragma once' in MyState.h"
#endif
#define FSM_MyState_generated_h

#define FSM_Source_FSM_MyState_h_12_SPARSE_DATA
#define FSM_Source_FSM_MyState_h_12_RPC_WRAPPERS
#define FSM_Source_FSM_MyState_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FSM_Source_FSM_MyState_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyState(); \
	friend struct Z_Construct_UClass_UMyState_Statics; \
public: \
	DECLARE_CLASS(UMyState, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FSM"), NO_API) \
	DECLARE_SERIALIZER(UMyState)


#define FSM_Source_FSM_MyState_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUMyState(); \
	friend struct Z_Construct_UClass_UMyState_Statics; \
public: \
	DECLARE_CLASS(UMyState, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FSM"), NO_API) \
	DECLARE_SERIALIZER(UMyState)


#define FSM_Source_FSM_MyState_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyState(UMyState&&); \
	NO_API UMyState(const UMyState&); \
public:


#define FSM_Source_FSM_MyState_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyState(UMyState&&); \
	NO_API UMyState(const UMyState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyState)


#define FSM_Source_FSM_MyState_h_12_PRIVATE_PROPERTY_OFFSET
#define FSM_Source_FSM_MyState_h_9_PROLOG
#define FSM_Source_FSM_MyState_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSM_Source_FSM_MyState_h_12_PRIVATE_PROPERTY_OFFSET \
	FSM_Source_FSM_MyState_h_12_SPARSE_DATA \
	FSM_Source_FSM_MyState_h_12_RPC_WRAPPERS \
	FSM_Source_FSM_MyState_h_12_INCLASS \
	FSM_Source_FSM_MyState_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSM_Source_FSM_MyState_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSM_Source_FSM_MyState_h_12_PRIVATE_PROPERTY_OFFSET \
	FSM_Source_FSM_MyState_h_12_SPARSE_DATA \
	FSM_Source_FSM_MyState_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FSM_Source_FSM_MyState_h_12_INCLASS_NO_PURE_DECLS \
	FSM_Source_FSM_MyState_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FSM_API UClass* StaticClass<class UMyState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSM_Source_FSM_MyState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
