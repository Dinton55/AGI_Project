// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BasicStateMachine.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicStateMachine() {}
// Cross Module References
	AGI_FIGHTINGGAME_API UFunction* Z_Construct_UDelegateFunction_AGI_FightingGame_StateChangeDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AGI_FightingGame();
	AGI_FIGHTINGGAME_API UFunction* Z_Construct_UFunction_UBasicStateMachine_AddInitialStates();
	AGI_FIGHTINGGAME_API UClass* Z_Construct_UClass_UBasicStateMachine();
	AGI_FIGHTINGGAME_API UFunction* Z_Construct_UFunction_UBasicStateMachine_SetState();
	AGI_FIGHTINGGAME_API UClass* Z_Construct_UClass_UBasicStateMachine_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_AGI_FightingGame_StateChangeDelegate__DelegateSignature()
	{
		struct _Script_AGI_FightingGame_eventStateChangeDelegate_Parms
		{
			FString NewState;
			FString OldState;
		};
		UObject* Outer = Z_Construct_UPackage__Script_AGI_FightingGame();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StateChangeDelegate__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_AGI_FightingGame_eventStateChangeDelegate_Parms));
			UProperty* NewProp_OldState = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OldState"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(OldState, _Script_AGI_FightingGame_eventStateChangeDelegate_Parms), 0x0010000000000080);
			UProperty* NewProp_NewState = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewState"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(NewState, _Script_AGI_FightingGame_eventStateChangeDelegate_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BasicStateMachine.h"));
#endif
		}
		return ReturnFunction;
	}
	void UBasicStateMachine::StaticRegisterNativesUBasicStateMachine()
	{
		UClass* Class = UBasicStateMachine::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddInitialStates", (Native)&UBasicStateMachine::execAddInitialStates },
			{ "SetState", (Native)&UBasicStateMachine::execSetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UBasicStateMachine_AddInitialStates()
	{
		struct BasicStateMachine_eventAddInitialStates_Parms
		{
			TArray<FString> InitialStates;
		};
		UObject* Outer = Z_Construct_UClass_UBasicStateMachine();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddInitialStates"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420401, 65535, sizeof(BasicStateMachine_eventAddInitialStates_Parms));
			UProperty* NewProp_InitialStates = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("InitialStates"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(InitialStates, BasicStateMachine_eventAddInitialStates_Parms), 0x0010000000000180);
			UProperty* NewProp_InitialStates_Inner = new(EC_InternalUseOnlyConstructor, NewProp_InitialStates, TEXT("InitialStates"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BasicStateMachine.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBasicStateMachine_SetState()
	{
		struct BasicStateMachine_eventSetState_Parms
		{
			FString DesiredState;
		};
		UObject* Outer = Z_Construct_UClass_UBasicStateMachine();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetState"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(BasicStateMachine_eventSetState_Parms));
			UProperty* NewProp_DesiredState = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DesiredState"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(DesiredState, BasicStateMachine_eventSetState_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BasicStateMachine.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBasicStateMachine_NoRegister()
	{
		return UBasicStateMachine::StaticClass();
	}
	UClass* Z_Construct_UClass_UBasicStateMachine()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_AGI_FightingGame();
			OuterClass = UBasicStateMachine::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UBasicStateMachine_AddInitialStates());
				OuterClass->LinkChild(Z_Construct_UFunction_UBasicStateMachine_SetState());

				UProperty* NewProp_OnStateChanged = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnStateChanged"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnStateChanged, UBasicStateMachine), 0x0010000010080000, Z_Construct_UDelegateFunction_AGI_FightingGame_StateChangeDelegate__DelegateSignature());
				UProperty* NewProp_States = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("States"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(States, UBasicStateMachine), 0x0010000000000005);
				UProperty* NewProp_States_Inner = new(EC_InternalUseOnlyConstructor, NewProp_States, TEXT("States"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UBasicStateMachine_AddInitialStates(), "AddInitialStates"); // 1884444872
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UBasicStateMachine_SetState(), "SetState"); // 1950713157
				static TCppClassTypeInfo<TCppClassTypeTraits<UBasicStateMachine> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BasicStateMachine.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BasicStateMachine.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Basic state machine for game states, such as the menus etc"));
				MetaData->SetValue(NewProp_OnStateChanged, TEXT("Category"), TEXT("StateChange"));
				MetaData->SetValue(NewProp_OnStateChanged, TEXT("ModuleRelativePath"), TEXT("BasicStateMachine.h"));
				MetaData->SetValue(NewProp_States, TEXT("Category"), TEXT("States"));
				MetaData->SetValue(NewProp_States, TEXT("ModuleRelativePath"), TEXT("BasicStateMachine.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBasicStateMachine, 2149120412);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBasicStateMachine(Z_Construct_UClass_UBasicStateMachine, &UBasicStateMachine::StaticClass, TEXT("/Script/AGI_FightingGame"), TEXT("UBasicStateMachine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasicStateMachine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
