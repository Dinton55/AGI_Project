// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef AGI_FIGHTINGGAME_AGI_FightingGameCharacter_generated_h
#error "AGI_FightingGameCharacter.generated.h already included, missing '#pragma once' in AGI_FightingGameCharacter.h"
#endif
#define AGI_FIGHTINGGAME_AGI_FightingGameCharacter_generated_h

#define AGI_FightingGame_Source_AGI_FightingGame_AGI_FightingGameCharacter_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnLeftHandOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnLeftHandOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define AGI_FightingGame_Source_AGI_FightingGame_AGI_FightingGameCharacter_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLeftHandOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnLeftHandOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define AGI_FightingGame_Source_AGI_FightingGame_AGI_FightingGameCharacter_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAGI_FightingGameCharacter(); \
	friend AGI_FIGHTINGGAME_API class UClass* Z_Construct_UClass_AAGI_FightingGameCharacter(); \
public: \
	DECLARE_CLASS(AAGI_FightingGameCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AGI_FightingGame"), NO_API) \
	DECLARE_SERIALIZER(AAGI_FightingGameCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AGI_FightingGame_Source_AGI_FightingGame_AGI_FightingGameCharacter_h_40_INCLASS \
private: \
	static void StaticRegisterNativesAAGI_FightingGameCharacter(); \
	friend AGI_FIGHTINGGAME_API class UClass* Z_Construct_UClass_AAGI_FightingGameCharacter(); \
public: \
	DECLARE_CLASS(AAGI_FightingGameCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AGI_FightingGame"), NO_API) \
	DECLARE_SERIALIZER(AAGI_FightingGameCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AGI_FightingGame_Source_AGI_FightingGame_AGI_FightingGameCharacter_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAGI_FightingGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAGI_FightingGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAGI_FightingGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAGI_FightingGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAGI_FightingGameCharacter(AAGI_FightingGameCharacter&&); \
	NO_API AAGI_FightingGameCharacter(const AAGI_FightingGameCharacter&); \
public:


#define AGI_FightingGame_Source_AGI_FightingGame_AGI_FightingGameCharacter_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAGI_FightingGameCharacter(AAGI_FightingGameCharacter&&); \
	NO_API AAGI_FightingGameCharacter(const AAGI_FightingGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAGI_FightingGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAGI_FightingGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAGI_FightingGameCharacter)


#define AGI_FightingGame_Source_AGI_FightingGame_AGI_FightingGameCharacter_h_40_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MovementSpeed() { return STRUCT_OFFSET(AAGI_FightingGameCharacter, MovementSpeed); } \
	FORCEINLINE static uint32 __PPO__CurrentState() { return STRUCT_OFFSET(AAGI_FightingGameCharacter, CurrentState); } \
	FORCEINLINE static uint32 __PPO__IdlePunchTime() { return STRUCT_OFFSET(AAGI_FightingGameCharacter, IdlePunchTime); } \
	FORCEINLINE static uint32 __PPO__IdleKickTime() { return STRUCT_OFFSET(AAGI_FightingGameCharacter, IdleKickTime); } \
	FORCEINLINE static uint32 __PPO__JumpTime() { return STRUCT_OFFSET(AAGI_FightingGameCharacter, JumpTime); } \
	FORCEINLINE static uint32 __PPO__JumpPunchTime() { return STRUCT_OFFSET(AAGI_FightingGameCharacter, JumpPunchTime); } \
	FORCEINLINE static uint32 __PPO__JumpKickTime() { return STRUCT_OFFSET(AAGI_FightingGameCharacter, JumpKickTime); } \
	FORCEINLINE static uint32 __PPO__CrouchPunchTime() { return STRUCT_OFFSET(AAGI_FightingGameCharacter, CrouchPunchTime); } \
	FORCEINLINE static uint32 __PPO__CrouchKickTime() { return STRUCT_OFFSET(AAGI_FightingGameCharacter, CrouchKickTime); } \
	FORCEINLINE static uint32 __PPO__MovingPunchTime() { return STRUCT_OFFSET(AAGI_FightingGameCharacter, MovingPunchTime); } \
	FORCEINLINE static uint32 __PPO__MovingKickTime() { return STRUCT_OFFSET(AAGI_FightingGameCharacter, MovingKickTime); } \
	FORCEINLINE static uint32 __PPO__LeftHand() { return STRUCT_OFFSET(AAGI_FightingGameCharacter, LeftHand); } \
	FORCEINLINE static uint32 __PPO__RightHand() { return STRUCT_OFFSET(AAGI_FightingGameCharacter, RightHand); } \
	FORCEINLINE static uint32 __PPO__LeftFoot() { return STRUCT_OFFSET(AAGI_FightingGameCharacter, LeftFoot); } \
	FORCEINLINE static uint32 __PPO__RightFoot() { return STRUCT_OFFSET(AAGI_FightingGameCharacter, RightFoot); } \
	FORCEINLINE static uint32 __PPO__ShieldMesh() { return STRUCT_OFFSET(AAGI_FightingGameCharacter, ShieldMesh); }


#define AGI_FightingGame_Source_AGI_FightingGame_AGI_FightingGameCharacter_h_37_PROLOG
#define AGI_FightingGame_Source_AGI_FightingGame_AGI_FightingGameCharacter_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AGI_FightingGame_Source_AGI_FightingGame_AGI_FightingGameCharacter_h_40_PRIVATE_PROPERTY_OFFSET \
	AGI_FightingGame_Source_AGI_FightingGame_AGI_FightingGameCharacter_h_40_RPC_WRAPPERS \
	AGI_FightingGame_Source_AGI_FightingGame_AGI_FightingGameCharacter_h_40_INCLASS \
	AGI_FightingGame_Source_AGI_FightingGame_AGI_FightingGameCharacter_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AGI_FightingGame_Source_AGI_FightingGame_AGI_FightingGameCharacter_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AGI_FightingGame_Source_AGI_FightingGame_AGI_FightingGameCharacter_h_40_PRIVATE_PROPERTY_OFFSET \
	AGI_FightingGame_Source_AGI_FightingGame_AGI_FightingGameCharacter_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	AGI_FightingGame_Source_AGI_FightingGame_AGI_FightingGameCharacter_h_40_INCLASS_NO_PURE_DECLS \
	AGI_FightingGame_Source_AGI_FightingGame_AGI_FightingGameCharacter_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AGI_FightingGame_Source_AGI_FightingGame_AGI_FightingGameCharacter_h


#define FOREACH_ENUM_ECURRENTSTATE(op) \
	op(ECurrentState::IDLE) \
	op(ECurrentState::MOVING) \
	op(ECurrentState::CROUCHING) \
	op(ECurrentState::JUMPING) \
	op(ECurrentState::BLOCKING) \
	op(ECurrentState::PUNCHING) \
	op(ECurrentState::KICKING) \
	op(ECurrentState::UPPERCUT) \
	op(ECurrentState::SWEEPKICK) \
	op(ECurrentState::MOVEPUNCH) \
	op(ECurrentState::MOVEKICK) \
	op(ECurrentState::JUMPPUNCH) \
	op(ECurrentState::JUMPKICK) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
