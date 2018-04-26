// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AGI_FightingGameCharacter.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGI_FightingGameCharacter() {}
// Cross Module References
	AGI_FIGHTINGGAME_API UEnum* Z_Construct_UEnum_AGI_FightingGame_ECurrentState();
	UPackage* Z_Construct_UPackage__Script_AGI_FightingGame();
	AGI_FIGHTINGGAME_API UFunction* Z_Construct_UFunction_AAGI_FightingGameCharacter_OnLeftHandOverlapBegin();
	AGI_FIGHTINGGAME_API UClass* Z_Construct_UClass_AAGI_FightingGameCharacter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AGI_FIGHTINGGAME_API UClass* Z_Construct_UClass_AAGI_FightingGameCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
static UEnum* ECurrentState_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_AGI_FightingGame_ECurrentState, Z_Construct_UPackage__Script_AGI_FightingGame(), TEXT("ECurrentState"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECurrentState(ECurrentState_StaticEnum, TEXT("/Script/AGI_FightingGame"), TEXT("ECurrentState"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_AGI_FightingGame_ECurrentState()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_AGI_FightingGame();
		extern uint32 Get_Z_Construct_UEnum_AGI_FightingGame_ECurrentState_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECurrentState"), 0, Get_Z_Construct_UEnum_AGI_FightingGame_ECurrentState_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ECurrentState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ECurrentState::IDLE"), 0);
			EnumNames.Emplace(TEXT("ECurrentState::MOVING"), 1);
			EnumNames.Emplace(TEXT("ECurrentState::CROUCHING"), 2);
			EnumNames.Emplace(TEXT("ECurrentState::JUMPING"), 3);
			EnumNames.Emplace(TEXT("ECurrentState::BLOCKING"), 4);
			EnumNames.Emplace(TEXT("ECurrentState::PUNCHING"), 5);
			EnumNames.Emplace(TEXT("ECurrentState::KICKING"), 6);
			EnumNames.Emplace(TEXT("ECurrentState::UPPERCUT"), 7);
			EnumNames.Emplace(TEXT("ECurrentState::SWEEPKICK"), 8);
			EnumNames.Emplace(TEXT("ECurrentState::MOVEPUNCH"), 9);
			EnumNames.Emplace(TEXT("ECurrentState::MOVEKICK"), 10);
			EnumNames.Emplace(TEXT("ECurrentState::JUMPPUNCH"), 11);
			EnumNames.Emplace(TEXT("ECurrentState::JUMPKICK"), 12);
			EnumNames.Emplace(TEXT("ECurrentState::ECurrentState_MAX"), 13);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ECurrentState");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BLOCKING.DisplayName"), TEXT("Block_State"));
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("CROUCHING.DisplayName"), TEXT("Crouching_State"));
			MetaData->SetValue(ReturnEnum, TEXT("IDLE.DisplayName"), TEXT("Idle_State"));
			MetaData->SetValue(ReturnEnum, TEXT("IDLE.ToolTip"), TEXT("Movement"));
			MetaData->SetValue(ReturnEnum, TEXT("JUMPING.DisplayName"), TEXT("Jumping_State"));
			MetaData->SetValue(ReturnEnum, TEXT("JUMPKICK.DisplayName"), TEXT("Jumping_Kick"));
			MetaData->SetValue(ReturnEnum, TEXT("JUMPPUNCH.DisplayName"), TEXT("Jumping_Punch"));
			MetaData->SetValue(ReturnEnum, TEXT("JUMPPUNCH.ToolTip"), TEXT("Jumping Actions"));
			MetaData->SetValue(ReturnEnum, TEXT("KICKING.DisplayName"), TEXT("Kicking_Move"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("AGI_FightingGameCharacter.h"));
			MetaData->SetValue(ReturnEnum, TEXT("MOVEKICK.DisplayName"), TEXT("Moving_Kick"));
			MetaData->SetValue(ReturnEnum, TEXT("MOVEPUNCH.DisplayName"), TEXT("Moving_Punch"));
			MetaData->SetValue(ReturnEnum, TEXT("MOVEPUNCH.ToolTip"), TEXT("Moving Actions"));
			MetaData->SetValue(ReturnEnum, TEXT("MOVING.DisplayName"), TEXT("Moving_State"));
			MetaData->SetValue(ReturnEnum, TEXT("PUNCHING.DisplayName"), TEXT("Punching_Move"));
			MetaData->SetValue(ReturnEnum, TEXT("PUNCHING.ToolTip"), TEXT("Idle Actions"));
			MetaData->SetValue(ReturnEnum, TEXT("SWEEPKICK.DisplayName"), TEXT("SweepKick_Move"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Different states"));
			MetaData->SetValue(ReturnEnum, TEXT("UPPERCUT.DisplayName"), TEXT("Uppercut_Move"));
			MetaData->SetValue(ReturnEnum, TEXT("UPPERCUT.ToolTip"), TEXT("Crouching Actions"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_AGI_FightingGame_ECurrentState_CRC() { return 3032844417U; }
	void AAGI_FightingGameCharacter::StaticRegisterNativesAAGI_FightingGameCharacter()
	{
		UClass* Class = AAGI_FightingGameCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnLeftHandOverlapBegin", (Native)&AAGI_FightingGameCharacter::execOnLeftHandOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AAGI_FightingGameCharacter_OnLeftHandOverlapBegin()
	{
		struct AGI_FightingGameCharacter_eventOnLeftHandOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		UObject* Outer = Z_Construct_UClass_AAGI_FightingGameCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnLeftHandOverlapBegin"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00480401, 65535, sizeof(AGI_FightingGameCharacter_eventOnLeftHandOverlapBegin_Parms));
			UProperty* NewProp_SweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SweepResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SweepResult, AGI_FightingGameCharacter_eventOnLeftHandOverlapBegin_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, AGI_FightingGameCharacter_eventOnLeftHandOverlapBegin_Parms);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, AGI_FightingGameCharacter_eventOnLeftHandOverlapBegin_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, AGI_FightingGameCharacter_eventOnLeftHandOverlapBegin_Parms), sizeof(bool), true);
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, AGI_FightingGameCharacter_eventOnLeftHandOverlapBegin_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, AGI_FightingGameCharacter_eventOnLeftHandOverlapBegin_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, AGI_FightingGameCharacter_eventOnLeftHandOverlapBegin_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, AGI_FightingGameCharacter_eventOnLeftHandOverlapBegin_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("AGI_FightingGameCharacter.h"));
			MetaData->SetValue(NewProp_SweepResult, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAGI_FightingGameCharacter_NoRegister()
	{
		return AAGI_FightingGameCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AAGI_FightingGameCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_AGI_FightingGame();
			OuterClass = AAGI_FightingGameCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AAGI_FightingGameCharacter_OnLeftHandOverlapBegin());

				UProperty* NewProp_ShieldMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ShieldMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ShieldMesh, AAGI_FightingGameCharacter), 0x00200800000a000d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_RightFoot = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RightFoot"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RightFoot, AAGI_FightingGameCharacter), 0x00200800000a000d, Z_Construct_UClass_USphereComponent_NoRegister());
				UProperty* NewProp_LeftFoot = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LeftFoot"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LeftFoot, AAGI_FightingGameCharacter), 0x00200800000a000d, Z_Construct_UClass_USphereComponent_NoRegister());
				UProperty* NewProp_RightHand = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RightHand"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RightHand, AAGI_FightingGameCharacter), 0x00200800000a000d, Z_Construct_UClass_USphereComponent_NoRegister());
				UProperty* NewProp_LeftHand = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LeftHand"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LeftHand, AAGI_FightingGameCharacter), 0x00200800000a000d, Z_Construct_UClass_USphereComponent_NoRegister());
				UProperty* NewProp_MovingKickTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MovingKickTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MovingKickTime, AAGI_FightingGameCharacter), 0x0020080000000005);
				UProperty* NewProp_MovingPunchTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MovingPunchTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MovingPunchTime, AAGI_FightingGameCharacter), 0x0020080000000005);
				UProperty* NewProp_CrouchKickTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CrouchKickTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CrouchKickTime, AAGI_FightingGameCharacter), 0x0020080000000005);
				UProperty* NewProp_CrouchPunchTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CrouchPunchTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CrouchPunchTime, AAGI_FightingGameCharacter), 0x0020080000000005);
				UProperty* NewProp_JumpKickTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("JumpKickTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(JumpKickTime, AAGI_FightingGameCharacter), 0x0020080000000005);
				UProperty* NewProp_JumpPunchTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("JumpPunchTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(JumpPunchTime, AAGI_FightingGameCharacter), 0x0020080000000005);
				UProperty* NewProp_JumpTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("JumpTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(JumpTime, AAGI_FightingGameCharacter), 0x0020080000000005);
				UProperty* NewProp_IdleKickTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IdleKickTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(IdleKickTime, AAGI_FightingGameCharacter), 0x0020080000000005);
				UProperty* NewProp_IdlePunchTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IdlePunchTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(IdlePunchTime, AAGI_FightingGameCharacter), 0x0020080000000005);
				UProperty* NewProp_CurrentState = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(CurrentState, AAGI_FightingGameCharacter), 0x0020080000020015, Z_Construct_UEnum_AGI_FightingGame_ECurrentState());
				UProperty* NewProp_CurrentState_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_CurrentState, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_MovementSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MovementSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MovementSpeed, AAGI_FightingGameCharacter), 0x0020080000000005);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AAGI_FightingGameCharacter_OnLeftHandOverlapBegin(), "OnLeftHandOverlapBegin"); // 1417714947
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AAGI_FightingGameCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AGI_FightingGameCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("AGI_FightingGameCharacter.h"));
				MetaData->SetValue(NewProp_ShieldMesh, TEXT("Category"), TEXT("Shield"));
				MetaData->SetValue(NewProp_ShieldMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ShieldMesh, TEXT("ModuleRelativePath"), TEXT("AGI_FightingGameCharacter.h"));
				MetaData->SetValue(NewProp_ShieldMesh, TEXT("ToolTip"), TEXT("ABILITY DURATIONS"));
				MetaData->SetValue(NewProp_RightFoot, TEXT("Category"), TEXT("Foot_Collision"));
				MetaData->SetValue(NewProp_RightFoot, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_RightFoot, TEXT("ModuleRelativePath"), TEXT("AGI_FightingGameCharacter.h"));
				MetaData->SetValue(NewProp_LeftFoot, TEXT("Category"), TEXT("Foot_Collision"));
				MetaData->SetValue(NewProp_LeftFoot, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_LeftFoot, TEXT("ModuleRelativePath"), TEXT("AGI_FightingGameCharacter.h"));
				MetaData->SetValue(NewProp_RightHand, TEXT("Category"), TEXT("Fist_Collision"));
				MetaData->SetValue(NewProp_RightHand, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_RightHand, TEXT("ModuleRelativePath"), TEXT("AGI_FightingGameCharacter.h"));
				MetaData->SetValue(NewProp_LeftHand, TEXT("Category"), TEXT("Fist_Collision"));
				MetaData->SetValue(NewProp_LeftHand, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_LeftHand, TEXT("ModuleRelativePath"), TEXT("AGI_FightingGameCharacter.h"));
				MetaData->SetValue(NewProp_LeftHand, TEXT("ToolTip"), TEXT("COLLISIONS"));
				MetaData->SetValue(NewProp_MovingKickTime, TEXT("Category"), TEXT("Animation_Times"));
				MetaData->SetValue(NewProp_MovingKickTime, TEXT("ModuleRelativePath"), TEXT("AGI_FightingGameCharacter.h"));
				MetaData->SetValue(NewProp_MovingPunchTime, TEXT("Category"), TEXT("Animation_Times"));
				MetaData->SetValue(NewProp_MovingPunchTime, TEXT("ModuleRelativePath"), TEXT("AGI_FightingGameCharacter.h"));
				MetaData->SetValue(NewProp_MovingPunchTime, TEXT("ToolTip"), TEXT("Moving"));
				MetaData->SetValue(NewProp_CrouchKickTime, TEXT("Category"), TEXT("Animation_Times"));
				MetaData->SetValue(NewProp_CrouchKickTime, TEXT("ModuleRelativePath"), TEXT("AGI_FightingGameCharacter.h"));
				MetaData->SetValue(NewProp_CrouchPunchTime, TEXT("Category"), TEXT("Animation_Times"));
				MetaData->SetValue(NewProp_CrouchPunchTime, TEXT("ModuleRelativePath"), TEXT("AGI_FightingGameCharacter.h"));
				MetaData->SetValue(NewProp_CrouchPunchTime, TEXT("ToolTip"), TEXT("Crouch"));
				MetaData->SetValue(NewProp_JumpKickTime, TEXT("Category"), TEXT("Animation_Times"));
				MetaData->SetValue(NewProp_JumpKickTime, TEXT("ModuleRelativePath"), TEXT("AGI_FightingGameCharacter.h"));
				MetaData->SetValue(NewProp_JumpPunchTime, TEXT("Category"), TEXT("Animation_Times"));
				MetaData->SetValue(NewProp_JumpPunchTime, TEXT("ModuleRelativePath"), TEXT("AGI_FightingGameCharacter.h"));
				MetaData->SetValue(NewProp_JumpTime, TEXT("Category"), TEXT("Animation_Times"));
				MetaData->SetValue(NewProp_JumpTime, TEXT("ModuleRelativePath"), TEXT("AGI_FightingGameCharacter.h"));
				MetaData->SetValue(NewProp_JumpTime, TEXT("ToolTip"), TEXT("Jump"));
				MetaData->SetValue(NewProp_IdleKickTime, TEXT("Category"), TEXT("Animation_Times"));
				MetaData->SetValue(NewProp_IdleKickTime, TEXT("ModuleRelativePath"), TEXT("AGI_FightingGameCharacter.h"));
				MetaData->SetValue(NewProp_IdlePunchTime, TEXT("Category"), TEXT("Animation_Times"));
				MetaData->SetValue(NewProp_IdlePunchTime, TEXT("ModuleRelativePath"), TEXT("AGI_FightingGameCharacter.h"));
				MetaData->SetValue(NewProp_IdlePunchTime, TEXT("ToolTip"), TEXT("Idle"));
				MetaData->SetValue(NewProp_CurrentState, TEXT("Category"), TEXT("State"));
				MetaData->SetValue(NewProp_CurrentState, TEXT("ModuleRelativePath"), TEXT("AGI_FightingGameCharacter.h"));
				MetaData->SetValue(NewProp_MovementSpeed, TEXT("Category"), TEXT("Movement"));
				MetaData->SetValue(NewProp_MovementSpeed, TEXT("ModuleRelativePath"), TEXT("AGI_FightingGameCharacter.h"));
				MetaData->SetValue(NewProp_MovementSpeed, TEXT("ToolTip"), TEXT("End of APawn interface"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAGI_FightingGameCharacter, 2551578706);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAGI_FightingGameCharacter(Z_Construct_UClass_AAGI_FightingGameCharacter, &AAGI_FightingGameCharacter::StaticClass, TEXT("/Script/AGI_FightingGame"), TEXT("AAGI_FightingGameCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAGI_FightingGameCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
