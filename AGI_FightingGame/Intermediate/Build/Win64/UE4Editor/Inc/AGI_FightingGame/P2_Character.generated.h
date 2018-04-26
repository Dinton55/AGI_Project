// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AGI_FIGHTINGGAME_P2_Character_generated_h
#error "P2_Character.generated.h already included, missing '#pragma once' in P2_Character.h"
#endif
#define AGI_FIGHTINGGAME_P2_Character_generated_h

#define AGI_FightingGame_Source_AGI_FightingGame_P2_Character_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execP2_TakeDamage) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->P2_TakeDamage(Z_Param_Damage); \
		P_NATIVE_END; \
	}


#define AGI_FightingGame_Source_AGI_FightingGame_P2_Character_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execP2_TakeDamage) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Damage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->P2_TakeDamage(Z_Param_Damage); \
		P_NATIVE_END; \
	}


#define AGI_FightingGame_Source_AGI_FightingGame_P2_Character_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAP2_Character(); \
	friend AGI_FIGHTINGGAME_API class UClass* Z_Construct_UClass_AP2_Character(); \
public: \
	DECLARE_CLASS(AP2_Character, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AGI_FightingGame"), NO_API) \
	DECLARE_SERIALIZER(AP2_Character) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AGI_FightingGame_Source_AGI_FightingGame_P2_Character_h_38_INCLASS \
private: \
	static void StaticRegisterNativesAP2_Character(); \
	friend AGI_FIGHTINGGAME_API class UClass* Z_Construct_UClass_AP2_Character(); \
public: \
	DECLARE_CLASS(AP2_Character, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AGI_FightingGame"), NO_API) \
	DECLARE_SERIALIZER(AP2_Character) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AGI_FightingGame_Source_AGI_FightingGame_P2_Character_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AP2_Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AP2_Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AP2_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AP2_Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AP2_Character(AP2_Character&&); \
	NO_API AP2_Character(const AP2_Character&); \
public:


#define AGI_FightingGame_Source_AGI_FightingGame_P2_Character_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AP2_Character(AP2_Character&&); \
	NO_API AP2_Character(const AP2_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AP2_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AP2_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AP2_Character)


#define AGI_FightingGame_Source_AGI_FightingGame_P2_Character_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IdlePunchTime() { return STRUCT_OFFSET(AP2_Character, IdlePunchTime); } \
	FORCEINLINE static uint32 __PPO__IdleKickTime() { return STRUCT_OFFSET(AP2_Character, IdleKickTime); } \
	FORCEINLINE static uint32 __PPO__JumpTime() { return STRUCT_OFFSET(AP2_Character, JumpTime); } \
	FORCEINLINE static uint32 __PPO__JumpPunchTime() { return STRUCT_OFFSET(AP2_Character, JumpPunchTime); } \
	FORCEINLINE static uint32 __PPO__JumpKickTime() { return STRUCT_OFFSET(AP2_Character, JumpKickTime); } \
	FORCEINLINE static uint32 __PPO__CrouchPunchTime() { return STRUCT_OFFSET(AP2_Character, CrouchPunchTime); } \
	FORCEINLINE static uint32 __PPO__CrouchKickTime() { return STRUCT_OFFSET(AP2_Character, CrouchKickTime); } \
	FORCEINLINE static uint32 __PPO__MovingPunchTime() { return STRUCT_OFFSET(AP2_Character, MovingPunchTime); } \
	FORCEINLINE static uint32 __PPO__MovingKickTime() { return STRUCT_OFFSET(AP2_Character, MovingKickTime); } \
	FORCEINLINE static uint32 __PPO__LeftHand() { return STRUCT_OFFSET(AP2_Character, LeftHand); } \
	FORCEINLINE static uint32 __PPO__RightHand() { return STRUCT_OFFSET(AP2_Character, RightHand); } \
	FORCEINLINE static uint32 __PPO__LeftFoot() { return STRUCT_OFFSET(AP2_Character, LeftFoot); } \
	FORCEINLINE static uint32 __PPO__RightFoot() { return STRUCT_OFFSET(AP2_Character, RightFoot); } \
	FORCEINLINE static uint32 __PPO__health() { return STRUCT_OFFSET(AP2_Character, health); }


#define AGI_FightingGame_Source_AGI_FightingGame_P2_Character_h_35_PROLOG
#define AGI_FightingGame_Source_AGI_FightingGame_P2_Character_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AGI_FightingGame_Source_AGI_FightingGame_P2_Character_h_38_PRIVATE_PROPERTY_OFFSET \
	AGI_FightingGame_Source_AGI_FightingGame_P2_Character_h_38_RPC_WRAPPERS \
	AGI_FightingGame_Source_AGI_FightingGame_P2_Character_h_38_INCLASS \
	AGI_FightingGame_Source_AGI_FightingGame_P2_Character_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AGI_FightingGame_Source_AGI_FightingGame_P2_Character_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AGI_FightingGame_Source_AGI_FightingGame_P2_Character_h_38_PRIVATE_PROPERTY_OFFSET \
	AGI_FightingGame_Source_AGI_FightingGame_P2_Character_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	AGI_FightingGame_Source_AGI_FightingGame_P2_Character_h_38_INCLASS_NO_PURE_DECLS \
	AGI_FightingGame_Source_AGI_FightingGame_P2_Character_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AGI_FightingGame_Source_AGI_FightingGame_P2_Character_h


#define FOREACH_ENUM_EP2CURRENTSTATE(op) \
	op(EP2CurrentState::IDLE) \
	op(EP2CurrentState::MOVING) \
	op(EP2CurrentState::CROUCHING) \
	op(EP2CurrentState::JUMPING) \
	op(EP2CurrentState::BLOCKING) \
	op(EP2CurrentState::PUNCHING) \
	op(EP2CurrentState::KICKING) \
	op(EP2CurrentState::UPPERCUT) \
	op(EP2CurrentState::SWEEPKICK) \
	op(EP2CurrentState::MOVEPUNCH) \
	op(EP2CurrentState::MOVEKICK) \
	op(EP2CurrentState::JUMPPUNCH) \
	op(EP2CurrentState::JUMPKICK) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
