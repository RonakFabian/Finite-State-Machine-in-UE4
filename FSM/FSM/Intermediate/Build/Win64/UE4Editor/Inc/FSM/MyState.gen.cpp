// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSM/MyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyState() {}
// Cross Module References
	FSM_API UClass* Z_Construct_UClass_UMyState_NoRegister();
	FSM_API UClass* Z_Construct_UClass_UMyState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FSM();
	FSM_API UClass* Z_Construct_UClass_ALightBulb_NoRegister();
	FSM_API UClass* Z_Construct_UClass_UMyStateMachineBehaviour_NoRegister();
// End Cross Module References
	void UMyState::StaticRegisterNativesUMyState()
	{
	}
	UClass* Z_Construct_UClass_UMyState_NoRegister()
	{
		return UMyState::StaticClass();
	}
	struct Z_Construct_UClass_UMyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightBulb_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightBulb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachineBehaviour_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateMachineBehaviour;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FSM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyState.h" },
		{ "ModuleRelativePath", "MyState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyState_Statics::NewProp_LightBulb_MetaData[] = {
		{ "ModuleRelativePath", "MyState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyState_Statics::NewProp_LightBulb = { "LightBulb", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyState, LightBulb), Z_Construct_UClass_ALightBulb_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyState_Statics::NewProp_LightBulb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyState_Statics::NewProp_LightBulb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyState_Statics::NewProp_StateMachineBehaviour_MetaData[] = {
		{ "ModuleRelativePath", "MyState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyState_Statics::NewProp_StateMachineBehaviour = { "StateMachineBehaviour", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyState, StateMachineBehaviour), Z_Construct_UClass_UMyStateMachineBehaviour_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyState_Statics::NewProp_StateMachineBehaviour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyState_Statics::NewProp_StateMachineBehaviour_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyState_Statics::NewProp_LightBulb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyState_Statics::NewProp_StateMachineBehaviour,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyState_Statics::ClassParams = {
		&UMyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyState_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyState, 3225479537);
	template<> FSM_API UClass* StaticClass<UMyState>()
	{
		return UMyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyState(Z_Construct_UClass_UMyState, &UMyState::StaticClass, TEXT("/Script/FSM"), TEXT("UMyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
