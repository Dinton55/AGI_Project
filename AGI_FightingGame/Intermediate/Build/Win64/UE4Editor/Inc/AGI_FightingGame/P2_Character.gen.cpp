// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "P2_Character.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP2_Character() {}
// Cross Module References
	AGI_FIGHTINGGAME_API UEnum* Z_Construct_UEnum_AGI_FightingGame_EP2CurrentState();
	UPackage* Z_Construct_UPackage__Script_AGI_FightingGame();
	AGI_FIGHTINGGAME_API UFunction* Z_Construct_UFunction_AP2_Character_P2_TakeDamage();
	AGI_FIGHTINGGAME_API UClass* Z_Construct_UClass_AP2_Character();
	AGI_FIGHTINGGAME_API UClass* Z_Construct_UClass_AP2_Character_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
static UEnum* EP2CurrentState_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_AGI_FightingGame_EP2CurrentState, Z_Construct_UPackage__Script_AGI_FightingGame(), TEXT("EP2CurrentState"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EP2CurrentState(EP2CurrentState_StaticEnum, TEXT("/Script/AGI_FightingGame"), TEXT("EP2CurrentState"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_AGI_FightingGame_EP2CurrentState()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AGI_FightingGame();
		extern uint32 Get_Z_Construct_UEnum_AGI_FightingGame_EP2CurrentState_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EP2CurrentState"), 0, Get_Z_Construct_UEnum_AGI_FightingGame_EP2CurrentState_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EP2CurrentState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EP2CurrentState::IDLE"), 0);
			EnumNames.Emplace(TEXT("EP2CurrentState::MOVING"), 1);
			EnumNames.Emplace(TEXT("EP2CurrentState::CROUCHING"), 2);
			EnumNames.Emplace(TEXT("EP2CurrentState::JUMPING"), 3);
			EnumNames.Emplace(TEXT("EP2CurrentState::BLOCKING"), 4);
			EnumNames.Emplace(TEXT("EP2CurrentState::PUNCHING"), 5);
			EnumNames.Emplace(TEXT("EP2CurrentState::KICKING"), 6);
			EnumNames.Emplace(TEXT("EP2CurrentState::UPPERCUT"), 7);
			EnumNames.Emplace(TEXT("EP2CurrentState::SWEEPKICK"), 8);
			EnumNames.Emplace(TEXT("EP2CurrentState::MOVEPUNCH"), 9);
			EnumNames.Emplace(TEXT("EP2CurrentState::MOVEKICK"), 10);
			EnumNames.Emplace(TEXT("EP2CurrentState::JUMPPUNCH"), 11);
			EnumNames.Emplace(TEXT("EP2CurrentState::JUMPKICK"), 12);
			EnumNames.Emplace(TEXT("EP2CurrentState::EP2CurrentState_MAX"), 13);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EP2CurrentState");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BLOCKING.DisplayName"), TEXT("Block_State"));
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("CROUCHING.DisplayName"), TEXT("Crouching_State"));
			MetaData->SetValue(ReturnEnum, TEXT("IDLE.DisplayName"), TEXT("Idle_State"));
			MetaData->SetValue(ReturnEnum, TEXT("JUMPING.DisplayName"), TEXT("Jumping_State"));
			MetaData->SetValue(ReturnEnum, TEXT("JUMPKICK.DisplayName"), TEXT("Jumping_Kick"));
			MetaData->SetValue(ReturnEnum, TEXT("JUMPPUNCH.DisplayName"), TEXT("Jumping_Punch"));
			MetaData->SetValue(ReturnEnum, TEXT("JUMPPUNCH.ToolTip"), TEXT("Jumping Actions"));
			MetaData->SetValue(ReturnEnum, TEXT("KICKING.DisplayName"), TEXT("Kicking_Move"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("P2_Character.h"));
			MetaData->SetValue(ReturnEnum, TEXT("MOVEKICK.DisplayName"), TEXT("Moving_Kick"));
			MetaData->SetValue(ReturnEnum, TEXT("MOVEPUNCH.DisplayName"), TEXT("Moving_Punch"));
			MetaData->SetValue(ReturnEnum, TEXT("MOVEPUNCH.ToolTip"), TEXT("Moving Actions"));
			MetaData->SetValue(ReturnEnum, TEXT("MOVING.DisplayName"), TEXT("Moving_State"));
			MetaData->SetValue(ReturnEnum, TEXT("PUNCHING.DisplayName"), TEXT("Punching_Move"));
			MetaData->SetValue(ReturnEnum, TEXT("PUNCHING.ToolTip"), TEXT("Idle Actions"));
			MetaData->SetValue(ReturnEnum, TEXT("SWEEPKICK.DisplayName"), TEXT("SweepKick_Move"));
			MetaData->SetValue(ReturnEnum, TEXT("UPPERCUT.DisplayName"), TEXT("Uppercut_Move"));
			MetaData->SetValue(ReturnEnum, TEXT("UPPERCUT.ToolTip"), TEXT("Crouching Actions"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_AGI_FightingGame_EP2CurrentState_CRC() { return 983886603U; }
	void AP2_Character::StaticRegisterNativesAP2_Character()
	{
		UClass* Class = AP2_Character::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "P2_TakeDamage", (Native)&AP2_Character::execP2_TakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AP2_Character_P2_TakeDamage()
	{
		struct P2_Character_eventP2_TakeDamage_Parms
		{
			int32 Damage;
		};
		UObject* Outer = Z_Construct_UClass_AP2_Character();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("P2_TakeDamage"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04080401, 65535, sizeof(P2_Character_eventP2_TakeDamage_Parms));
			UProperty* NewProp_Damage = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Damage"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(Damage, P2_Character_eventP2_TakeDamage_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Health"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("P2_Character.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AP2_Character_NoRegister()
	{
		return AP2_Character::StaticClass();
	}
	UClass* Z_Construct_UClass_AP2_Character()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_AGI_FightingGame();
			OuterClass = AP2_Character::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AP2_Character_P2_TakeDamage());

				UProperty* NewProp_health = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("health"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(health, AP2_Character), 0x0020080000020005);
				UProperty* NewProp_RightFoot = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RightFoot"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RightFoot, AP2_Character), 0x00200800000a000d, Z_Construct_UClass_USphereComponent_NoRegister());
				UProperty* NewProp_LeftFoot = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LeftFoot"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LeftFoot, AP2_Character), 0x00200800000a000d, Z_Construct_UClass_USphereComponent_NoRegister());
				UProperty* NewProp_RightHand = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RightHand"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RightHand, AP2_Character), 0x00200800000a000d, Z_Construct_UClass_USphereComponent_NoRegister());
				UProperty* NewProp_LeftHand = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LeftHand"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LeftHand, AP2_Character), 0x00200800000a000d, Z_Construct_UClass_USphereComponent_NoRegister());
				UProperty* NewProp_MovingKickTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MovingKickTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MovingKickTime, AP2_Character), 0x0020080000000005);
				UProperty* NewProp_MovingPunchTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MovingPunchTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MovingPunchTime, AP2_Character), 0x0020080000000005);
				UProperty* NewProp_CrouchKickTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CrouchKickTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CrouchKickTime, AP2_Character), 0x0020080000000005);
				UProperty* NewProp_CrouchPunchTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CrouchPunchTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CrouchPunchTime, AP2_Character), 0x0020080000000005);
				UProperty* NewProp_JumpKickTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("JumpKickTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(JumpKickTime, AP2_Character), 0x0020080000000005);
				UProperty* NewProp_JumpPunchTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("JumpPunchTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(JumpPunchTime, AP2_Character), 0x0020080000000005);
				UProperty* NewProp_JumpTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("JumpTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(JumpTime, AP2_Character), 0x0020080000000005);
				UProperty* NewProp_IdleKickTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IdleKickTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(IdleKickTime, AP2_Character), 0x0020080000000005);
				UProperty* NewProp_IdlePunchTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IdlePunchTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(IdlePunchTime, AP2_Character), 0x0020080000000005);
				UProperty* NewProp_P2CurrentState = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("P2CurrentState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(P2CurrentState, AP2_Character), 0x0010000000020015, Z_Construct_UEnum_AGI_FightingGame_EP2CurrentState());
				UProperty* NewProp_P2CurrentState_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_P2CurrentState, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_MovementSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MovementSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MovementSpeed, AP2_Character), 0x0010000000000005);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AP2_Character_P2_TakeDamage(), "P2_TakeDamage"); // 951734019
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AP2_Character> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("P2_Character.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("P2_Character.h"));
				MetaData->SetValue(NewProp_health, TEXT("Category"), TEXT("Health"));
				MetaData->SetValue(NewProp_health, TEXT("ModuleRelativePath"), TEXT("P2_Character.h"));
				MetaData->SetValue(NewProp_RightFoot, TEXT("Category"), TEXT("Foot_Collision"));
				MetaData->SetValue(NewProp_RightFoot, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_RightFoot, TEXT("ModuleRelativePath"), TEXT("P2_Character.h"));
				MetaData->SetValue(NewProp_LeftFoot, TEXT("Category"), TEXT("Foot_Collision"));
				MetaData->SetValue(NewProp_LeftFoot, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_LeftFoot, TEXT("ModuleRelativePath"), TEXT("P2_Character.h"));
				MetaData->SetValue(NewProp_RightHand, TEXT("Category"), TEXT("Fist_Collision"));
				MetaData->SetValue(NewProp_RightHand, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_RightHand, TEXT("ModuleRelativePath"), TEXT("P2_Character.h"));
				MetaData->SetValue(NewProp_LeftHand, TEXT("Category"), TEXT("Fist_Collision"));
				MetaData->SetValue(NewProp_LeftHand, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_LeftHand, TEXT("ModuleRelativePath"), TEXT("P2_Character.h"));
				MetaData->SetValue(NewProp_LeftHand, TEXT("ToolTip"), TEXT("COLLISIONS"));
				MetaData->SetValue(NewProp_MovingKickTime, TEXT("Category"), TEXT("Animation_Times"));
				MetaData->SetValue(NewProp_MovingKickTime, TEXT("ModuleRelativePath"), TEXT("P2_Character.h"));
				MetaData->SetValue(NewProp_MovingPunchTime, TEXT("Category"), TEXT("Animation_Times"));
				MetaData->SetValue(NewProp_MovingPunchTime, TEXT("ModuleRelativePath"), TEXT("P2_Character.h"));
				MetaData->SetValue(NewProp_MovingPunchTime, TEXT("ToolTip"), TEXT("Moving"));
				MetaData->SetValue(NewProp_CrouchKickTime, TEXT("Category"), TEXT("Animation_Times"));
				MetaData->SetValue(NewProp_CrouchKickTime, TEXT("ModuleRelativePath"), TEXT("P2_Character.h"));
				MetaData->SetValue(NewProp_CrouchPunchTime, TEXT("Category"), TEXT("Animation_Times"));
				MetaData->SetValue(NewProp_CrouchPunchTime, TEXT("ModuleRelativePath"), TEXT("P2_Character.h"));
				MetaData->SetValue(NewProp_CrouchPunchTime, TEXT("ToolTip"), TEXT("Crouch"));
				MetaData->SetValue(NewProp_JumpKickTime, TEXT("Category"), TEXT("Animation_Times"));
				MetaData->SetValue(NewProp_JumpKickTime, TEXT("ModuleRelativePath"), TEXT("P2_Character.h"));
				MetaData->SetValue(NewProp_JumpPunchTime, TEXT("Category"), TEXT("Animation_Times"));
				MetaData->SetValue(NewProp_JumpPunchTime, TEXT("ModuleRelativePath"), TEXT("P2_Character.h"));
				MetaData->SetValue(NewProp_JumpTime, TEXT("Category"), TEXT("Animation_Times"));
				MetaData->SetValue(NewProp_JumpTime, TEXT("ModuleRelativePath"), TEXT("P2_Character.h"));
				MetaData->SetValue(NewProp_JumpTime, TEXT("ToolTip"), TEXT("Jump"));
				MetaData->SetValue(NewProp_IdleKickTime, TEXT("Category"), TEXT("Animation_Times"));
				MetaData->SetValue(NewProp_IdleKickTime, TEXT("ModuleRelativePath"), TEXT("P2_Character.h"));
				MetaData->SetValue(NewProp_IdlePunchTime, TEXT("Category"), TEXT("Animation_Times"));
				MetaData->SetValue(NewProp_IdlePunchTime, TEXT("ModuleRelativePath"), TEXT("P2_Character.h"));
				MetaData->SetValue(NewProp_IdlePunchTime, TEXT("ToolTip"), TEXT("Idle"));
				MetaData->SetValue(NewProp_P2CurrentState, TEXT("Category"), TEXT("State"));
				MetaData->SetValue(NewProp_P2CurrentState, TEXT("ModuleRelativePath"), TEXT("P2_Character.h"));
				MetaData->SetValue(NewProp_MovementSpeed, TEXT("Category"), TEXT("Movement"));
				MetaData->SetValue(NewProp_MovementSpeed, TEXT("ModuleRelativePath"), TEXT("P2_Character.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AP2_Character, 3022574517);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AP2_Character(Z_Construct_UClass_AP2_Character, &AP2_Character::StaticClass, TEXT("/Script/AGI_FightingGame"), TEXT("AP2_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AP2_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
