// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSM/SwitchOffState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwitchOffState() {}
// Cross Module References
	FSM_API UClass* Z_Construct_UClass_USwitchOffState_NoRegister();
	FSM_API UClass* Z_Construct_UClass_USwitchOffState();
	FSM_API UClass* Z_Construct_UClass_UMyState();
	UPackage* Z_Construct_UPackage__Script_FSM();
// End Cross Module References
	void USwitchOffState::StaticRegisterNativesUSwitchOffState()
	{
	}
	UClass* Z_Construct_UClass_USwitchOffState_NoRegister()
	{
		return USwitchOffState::StaticClass();
	}
	struct Z_Construct_UClass_USwitchOffState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USwitchOffState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMyState,
		(UObject* (*)())Z_Construct_UPackage__Script_FSM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchOffState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SwitchOffState.h" },
		{ "ModuleRelativePath", "SwitchOffState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USwitchOffState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USwitchOffState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USwitchOffState_Statics::ClassParams = {
		&USwitchOffState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USwitchOffState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchOffState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USwitchOffState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USwitchOffState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USwitchOffState, 588933746);
	template<> FSM_API UClass* StaticClass<USwitchOffState>()
	{
		return USwitchOffState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USwitchOffState(Z_Construct_UClass_USwitchOffState, &USwitchOffState::StaticClass, TEXT("/Script/FSM"), TEXT("USwitchOffState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USwitchOffState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
