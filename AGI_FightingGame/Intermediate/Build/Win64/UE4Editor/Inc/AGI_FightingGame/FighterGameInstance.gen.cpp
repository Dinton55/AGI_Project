// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FighterGameInstance.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFighterGameInstance() {}
// Cross Module References
	AGI_FIGHTINGGAME_API UClass* Z_Construct_UClass_UFighterGameInstance_NoRegister();
	AGI_FIGHTINGGAME_API UClass* Z_Construct_UClass_UFighterGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_AGI_FightingGame();
	AGI_FIGHTINGGAME_API UClass* Z_Construct_UClass_UBasicStateMachine_NoRegister();
// End Cross Module References
	void UFighterGameInstance::StaticRegisterNativesUFighterGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UFighterGameInstance_NoRegister()
	{
		return UFighterGameInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UFighterGameInstance()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UGameInstance();
			Z_Construct_UPackage__Script_AGI_FightingGame();
			OuterClass = UFighterGameInstance::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100088u;


				UProperty* NewProp_StateMachine = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StateMachine"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(StateMachine, UFighterGameInstance), 0x0010000000000005, Z_Construct_UClass_UBasicStateMachine_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<UFighterGameInstance> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FighterGameInstance.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FighterGameInstance.h"));
				MetaData->SetValue(NewProp_StateMachine, TEXT("Category"), TEXT("FighterGameInstance"));
				MetaData->SetValue(NewProp_StateMachine, TEXT("ModuleRelativePath"), TEXT("FighterGameInstance.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFighterGameInstance, 2393377133);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFighterGameInstance(Z_Construct_UClass_UFighterGameInstance, &UFighterGameInstance::StaticClass, TEXT("/Script/AGI_FightingGame"), TEXT("UFighterGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFighterGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
