// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "P2_Controller.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP2_Controller() {}
// Cross Module References
	AGI_FIGHTINGGAME_API UClass* Z_Construct_UClass_AP2_Controller_NoRegister();
	AGI_FIGHTINGGAME_API UClass* Z_Construct_UClass_AP2_Controller();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_AGI_FightingGame();
// End Cross Module References
	void AP2_Controller::StaticRegisterNativesAP2_Controller()
	{
	}
	UClass* Z_Construct_UClass_AP2_Controller_NoRegister()
	{
		return AP2_Controller::StaticClass();
	}
	UClass* Z_Construct_UClass_AP2_Controller()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerController();
			Z_Construct_UPackage__Script_AGI_FightingGame();
			OuterClass = AP2_Controller::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900284u;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AP2_Controller> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("P2_Controller.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("P2_Controller.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AP2_Controller, 3209345950);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AP2_Controller(Z_Construct_UClass_AP2_Controller, &AP2_Controller::StaticClass, TEXT("/Script/AGI_FightingGame"), TEXT("AP2_Controller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AP2_Controller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
