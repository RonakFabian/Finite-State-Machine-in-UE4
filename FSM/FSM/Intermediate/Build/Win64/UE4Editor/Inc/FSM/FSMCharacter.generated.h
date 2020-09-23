// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FSM_FSMCharacter_generated_h
#error "FSMCharacter.generated.h already included, missing '#pragma once' in FSMCharacter.h"
#endif
#define FSM_FSMCharacter_generated_h

#define FSM_Source_FSM_FSMCharacter_h_14_SPARSE_DATA
#define FSM_Source_FSM_FSMCharacter_h_14_RPC_WRAPPERS
#define FSM_Source_FSM_FSMCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FSM_Source_FSM_FSMCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFSMCharacter(); \
	friend struct Z_Construct_UClass_AFSMCharacter_Statics; \
public: \
	DECLARE_CLASS(AFSMCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FSM"), NO_API) \
	DECLARE_SERIALIZER(AFSMCharacter)


#define FSM_Source_FSM_FSMCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFSMCharacter(); \
	friend struct Z_Construct_UClass_AFSMCharacter_Statics; \
public: \
	DECLARE_CLASS(AFSMCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FSM"), NO_API) \
	DECLARE_SERIALIZER(AFSMCharacter)


#define FSM_Source_FSM_FSMCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFSMCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFSMCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFSMCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFSMCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFSMCharacter(AFSMCharacter&&); \
	NO_API AFSMCharacter(const AFSMCharacter&); \
public:


#define FSM_Source_FSM_FSMCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFSMCharacter(AFSMCharacter&&); \
	NO_API AFSMCharacter(const AFSMCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFSMCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFSMCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFSMCharacter)


#define FSM_Source_FSM_FSMCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFSMCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFSMCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFSMCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFSMCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFSMCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFSMCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFSMCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFSMCharacter, L_MotionController); }


#define FSM_Source_FSM_FSMCharacter_h_11_PROLOG
#define FSM_Source_FSM_FSMCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSM_Source_FSM_FSMCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FSM_Source_FSM_FSMCharacter_h_14_SPARSE_DATA \
	FSM_Source_FSM_FSMCharacter_h_14_RPC_WRAPPERS \
	FSM_Source_FSM_FSMCharacter_h_14_INCLASS \
	FSM_Source_FSM_FSMCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSM_Source_FSM_FSMCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSM_Source_FSM_FSMCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FSM_Source_FSM_FSMCharacter_h_14_SPARSE_DATA \
	FSM_Source_FSM_FSMCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FSM_Source_FSM_FSMCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FSM_Source_FSM_FSMCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FSM_API UClass* StaticClass<class AFSMCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSM_Source_FSM_FSMCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
