// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CharStateManager.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharStateManager() {}
// Cross Module References
	AGI_FIGHTINGGAME_API UClass* Z_Construct_UClass_UCharStateManager_NoRegister();
	AGI_FIGHTINGGAME_API UClass* Z_Construct_UClass_UCharStateManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AGI_FightingGame();
// End Cross Module References
	void UCharStateManager::StaticRegisterNativesUCharStateManager()
	{
	}
	UClass* Z_Construct_UClass_UCharStateManager_NoRegister()
	{
		return UCharStateManager::StaticClass();
	}
	UClass* Z_Construct_UClass_UCharStateManager()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_AGI_FightingGame();
			OuterClass = UCharStateManager::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<UCharStateManager> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CharStateManager.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CharStateManager.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("/ Different states\nUENUM(BlueprintType)\nenum class ECoreState : uint8\n{\n       IDLE            UMETA(DisplayName = \"Idle_State\"),\n       MOVING          UMETA(DisplayName = \"Moving_State\"),\n       CROUCHING       UMETA(DisplayName = \"Crouching_State\"),\n       JUMPING         UMETA(DisplayName = \"Jumping_State\"),\n       BLOCKING        UMETA(DisplayName = \"Block_State\")\n};\n\nUENUM(BlueprintType)\nenum class EPlayerInput : uint8\n{\n       PUNCHING        UMETA(DisplayName = \"Punching_Move\"),\n       KICKING         UMETA(DisplayName = \"Kicking_Move\"),\n       IDLE            UMETA(DisplayName = \"Idle_Move\")\n};\n\nUENUM(BlueprintType)\nenum class EFinalState\n{\n\n};"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharStateManager, 2415506239);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharStateManager(Z_Construct_UClass_UCharStateManager, &UCharStateManager::StaticClass, TEXT("/Script/AGI_FightingGame"), TEXT("UCharStateManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharStateManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
