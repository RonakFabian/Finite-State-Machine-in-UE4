// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSM/LightBulb.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightBulb() {}
// Cross Module References
	FSM_API UClass* Z_Construct_UClass_ALightBulb_NoRegister();
	FSM_API UClass* Z_Construct_UClass_ALightBulb();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FSM();
	FSM_API UFunction* Z_Construct_UFunction_ALightBulb_ToggleState();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	FSM_API UClass* Z_Construct_UClass_USwitchOffState_NoRegister();
	FSM_API UClass* Z_Construct_UClass_USwitchOnState_NoRegister();
	FSM_API UClass* Z_Construct_UClass_UMyStateMachineBehaviour_NoRegister();
// End Cross Module References
	void ALightBulb::StaticRegisterNativesALightBulb()
	{
		UClass* Class = ALightBulb::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToggleState", &ALightBulb::execToggleState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALightBulb_ToggleState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALightBulb_ToggleState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LightBulb.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALightBulb_ToggleState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightBulb, nullptr, "ToggleState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALightBulb_ToggleState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALightBulb_ToggleState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALightBulb_ToggleState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALightBulb_ToggleState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALightBulb_NoRegister()
	{
		return ALightBulb::StaticClass();
	}
	struct Z_Construct_UClass_ALightBulb_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointLightComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointLightComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Switch_Off_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Switch_Off_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Switch_On_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Switch_On_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyStateMachineBehaviour_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyStateMachineBehaviour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isON_MetaData[];
#endif
		static void NewProp_isON_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isON;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightBulb_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FSM,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALightBulb_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALightBulb_ToggleState, "ToggleState" }, // 363105539
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightBulb_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LightBulb.h" },
		{ "ModuleRelativePath", "LightBulb.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightBulb_Statics::NewProp_PointLightComponent_MetaData[] = {
		{ "Category", "LightBulb" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LightBulb.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightBulb_Statics::NewProp_PointLightComponent = { "PointLightComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightBulb, PointLightComponent), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightBulb_Statics::NewProp_PointLightComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightBulb_Statics::NewProp_PointLightComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightBulb_Statics::NewProp_Switch_Off_State_MetaData[] = {
		{ "ModuleRelativePath", "LightBulb.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightBulb_Statics::NewProp_Switch_Off_State = { "Switch_Off_State", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightBulb, Switch_Off_State), Z_Construct_UClass_USwitchOffState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightBulb_Statics::NewProp_Switch_Off_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightBulb_Statics::NewProp_Switch_Off_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightBulb_Statics::NewProp_Switch_On_State_MetaData[] = {
		{ "ModuleRelativePath", "LightBulb.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightBulb_Statics::NewProp_Switch_On_State = { "Switch_On_State", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightBulb, Switch_On_State), Z_Construct_UClass_USwitchOnState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightBulb_Statics::NewProp_Switch_On_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightBulb_Statics::NewProp_Switch_On_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightBulb_Statics::NewProp_MyStateMachineBehaviour_MetaData[] = {
		{ "ModuleRelativePath", "LightBulb.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightBulb_Statics::NewProp_MyStateMachineBehaviour = { "MyStateMachineBehaviour", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALightBulb, MyStateMachineBehaviour), Z_Construct_UClass_UMyStateMachineBehaviour_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightBulb_Statics::NewProp_MyStateMachineBehaviour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightBulb_Statics::NewProp_MyStateMachineBehaviour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightBulb_Statics::NewProp_isON_MetaData[] = {
		{ "ModuleRelativePath", "LightBulb.h" },
	};
#endif
	void Z_Construct_UClass_ALightBulb_Statics::NewProp_isON_SetBit(void* Obj)
	{
		((ALightBulb*)Obj)->isON = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALightBulb_Statics::NewProp_isON = { "isON", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALightBulb), &Z_Construct_UClass_ALightBulb_Statics::NewProp_isON_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALightBulb_Statics::NewProp_isON_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightBulb_Statics::NewProp_isON_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALightBulb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightBulb_Statics::NewProp_PointLightComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightBulb_Statics::NewProp_Switch_Off_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightBulb_Statics::NewProp_Switch_On_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightBulb_Statics::NewProp_MyStateMachineBehaviour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightBulb_Statics::NewProp_isON,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightBulb_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightBulb>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALightBulb_Statics::ClassParams = {
		&ALightBulb::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALightBulb_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALightBulb_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALightBulb_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALightBulb_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALightBulb()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALightBulb_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALightBulb, 1883952288);
	template<> FSM_API UClass* StaticClass<ALightBulb>()
	{
		return ALightBulb::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALightBulb(Z_Construct_UClass_ALightBulb, &ALightBulb::StaticClass, TEXT("/Script/FSM"), TEXT("ALightBulb"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightBulb);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
