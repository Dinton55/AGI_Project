// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AGI_FightingGameGameMode.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGI_FightingGameGameMode() {}
// Cross Module References
	AGI_FIGHTINGGAME_API UClass* Z_Construct_UClass_AAGI_FightingGameGameMode_NoRegister();
	AGI_FIGHTINGGAME_API UClass* Z_Construct_UClass_AAGI_FightingGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AGI_FightingGame();
// End Cross Module References
	void AAGI_FightingGameGameMode::StaticRegisterNativesAAGI_FightingGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_AAGI_FightingGameGameMode_NoRegister()
	{
		return AAGI_FightingGameGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AAGI_FightingGameGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_AGI_FightingGame();
			OuterClass = AAGI_FightingGameGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<AAGI_FightingGameGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AGI_FightingGameGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AGI_FightingGameGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAGI_FightingGameGameMode, 1376625986);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAGI_FightingGameGameMode(Z_Construct_UClass_AAGI_FightingGameGameMode, &AAGI_FightingGameGameMode::StaticClass, TEXT("/Script/AGI_FightingGame"), TEXT("AAGI_FightingGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAGI_FightingGameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
