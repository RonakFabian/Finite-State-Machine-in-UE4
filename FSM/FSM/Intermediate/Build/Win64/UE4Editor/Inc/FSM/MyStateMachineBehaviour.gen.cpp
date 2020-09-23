// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSM/MyStateMachineBehaviour.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyStateMachineBehaviour() {}
// Cross Module References
	FSM_API UClass* Z_Construct_UClass_UMyStateMachineBehaviour_NoRegister();
	FSM_API UClass* Z_Construct_UClass_UMyStateMachineBehaviour();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FSM();
	FSM_API UClass* Z_Construct_UClass_UMyState_NoRegister();
// End Cross Module References
	void UMyStateMachineBehaviour::StaticRegisterNativesUMyStateMachineBehaviour()
	{
	}
	UClass* Z_Construct_UClass_UMyStateMachineBehaviour_NoRegister()
	{
		return UMyStateMachineBehaviour::StaticClass();
	}
	struct Z_Construct_UClass_UMyStateMachineBehaviour_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyStateMachineBehaviour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FSM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyStateMachineBehaviour_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyStateMachineBehaviour.h" },
		{ "ModuleRelativePath", "MyStateMachineBehaviour.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyStateMachineBehaviour_Statics::NewProp_CurrentState_MetaData[] = {
		{ "ModuleRelativePath", "MyStateMachineBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyStateMachineBehaviour_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyStateMachineBehaviour, CurrentState), Z_Construct_UClass_UMyState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyStateMachineBehaviour_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyStateMachineBehaviour_Statics::NewProp_CurrentState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyStateMachineBehaviour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStateMachineBehaviour_Statics::NewProp_CurrentState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyStateMachineBehaviour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyStateMachineBehaviour>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyStateMachineBehaviour_Statics::ClassParams = {
		&UMyStateMachineBehaviour::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyStateMachineBehaviour_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyStateMachineBehaviour_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyStateMachineBehaviour_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyStateMachineBehaviour_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyStateMachineBehaviour()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyStateMachineBehaviour_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyStateMachineBehaviour, 3133145465);
	template<> FSM_API UClass* StaticClass<UMyStateMachineBehaviour>()
	{
		return UMyStateMachineBehaviour::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyStateMachineBehaviour(Z_Construct_UClass_UMyStateMachineBehaviour, &UMyStateMachineBehaviour::StaticClass, TEXT("/Script/FSM"), TEXT("UMyStateMachineBehaviour"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyStateMachineBehaviour);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
