// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AGI_FIGHTINGGAME_BasicStateMachine_generated_h
#error "BasicStateMachine.generated.h already included, missing '#pragma once' in BasicStateMachine.h"
#endif
#define AGI_FIGHTINGGAME_BasicStateMachine_generated_h

#define AGI_FightingGame_Source_AGI_FightingGame_BasicStateMachine_h_9_DELEGATE \
struct _Script_AGI_FightingGame_eventStateChangeDelegate_Parms \
{ \
	FString NewState; \
	FString OldState; \
}; \
static inline void FStateChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& StateChangeDelegate, const FString& NewState, const FString& OldState) \
{ \
	_Script_AGI_FightingGame_eventStateChangeDelegate_Parms Parms; \
	Parms.NewState=NewState; \
	Parms.OldState=OldState; \
	StateChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AGI_FightingGame_Source_AGI_FightingGame_BasicStateMachine_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddInitialStates) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InitialStates); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddInitialStates(Z_Param_Out_InitialStates); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetState) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DesiredState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetState(Z_Param_DesiredState); \
		P_NATIVE_END; \
	}


#define AGI_FightingGame_Source_AGI_FightingGame_BasicStateMachine_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddInitialStates) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_InitialStates); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddInitialStates(Z_Param_Out_InitialStates); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetState) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DesiredState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetState(Z_Param_DesiredState); \
		P_NATIVE_END; \
	}


#define AGI_FightingGame_Source_AGI_FightingGame_BasicStateMachine_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBasicStateMachine(); \
	friend AGI_FIGHTINGGAME_API class UClass* Z_Construct_UClass_UBasicStateMachine(); \
public: \
	DECLARE_CLASS(UBasicStateMachine, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AGI_FightingGame"), NO_API) \
	DECLARE_SERIALIZER(UBasicStateMachine) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AGI_FightingGame_Source_AGI_FightingGame_BasicStateMachine_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBasicStateMachine(); \
	friend AGI_FIGHTINGGAME_API class UClass* Z_Construct_UClass_UBasicStateMachine(); \
public: \
	DECLARE_CLASS(UBasicStateMachine, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AGI_FightingGame"), NO_API) \
	DECLARE_SERIALIZER(UBasicStateMachine) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AGI_FightingGame_Source_AGI_FightingGame_BasicStateMachine_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBasicStateMachine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBasicStateMachine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasicStateMachine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasicStateMachine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBasicStateMachine(UBasicStateMachine&&); \
	NO_API UBasicStateMachine(const UBasicStateMachine&); \
public:


#define AGI_FightingGame_Source_AGI_FightingGame_BasicStateMachine_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBasicStateMachine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBasicStateMachine(UBasicStateMachine&&); \
	NO_API UBasicStateMachine(const UBasicStateMachine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasicStateMachine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasicStateMachine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBasicStateMachine)


#define AGI_FightingGame_Source_AGI_FightingGame_BasicStateMachine_h_17_PRIVATE_PROPERTY_OFFSET
#define AGI_FightingGame_Source_AGI_FightingGame_BasicStateMachine_h_14_PROLOG
#define AGI_FightingGame_Source_AGI_FightingGame_BasicStateMachine_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AGI_FightingGame_Source_AGI_FightingGame_BasicStateMachine_h_17_PRIVATE_PROPERTY_OFFSET \
	AGI_FightingGame_Source_AGI_FightingGame_BasicStateMachine_h_17_RPC_WRAPPERS \
	AGI_FightingGame_Source_AGI_FightingGame_BasicStateMachine_h_17_INCLASS \
	AGI_FightingGame_Source_AGI_FightingGame_BasicStateMachine_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AGI_FightingGame_Source_AGI_FightingGame_BasicStateMachine_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AGI_FightingGame_Source_AGI_FightingGame_BasicStateMachine_h_17_PRIVATE_PROPERTY_OFFSET \
	AGI_FightingGame_Source_AGI_FightingGame_BasicStateMachine_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AGI_FightingGame_Source_AGI_FightingGame_BasicStateMachine_h_17_INCLASS_NO_PURE_DECLS \
	AGI_FightingGame_Source_AGI_FightingGame_BasicStateMachine_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AGI_FightingGame_Source_AGI_FightingGame_BasicStateMachine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
