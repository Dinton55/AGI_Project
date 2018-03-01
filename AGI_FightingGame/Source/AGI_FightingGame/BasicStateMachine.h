// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BasicStateMachine.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStateChangeDelegate, FString, NewState, FString, OldState);

/**
 *  Basic state machine for game states, such as the menus etc
 */
UCLASS()
class AGI_FIGHTINGGAME_API UBasicStateMachine : public UObject
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "States")
		TArray<FString> States;

	UFUNCTION(BlueprintCallable)
		void SetState(FString DesiredState);

	UPROPERTY(BlueprintAssignable, Category = "StateChange")
		FStateChangeDelegate OnStateChanged;

	UFUNCTION(BlueprintCallable)
		void AddInitialStates(TArray<FString> &InitialStates);

private:

	FString CurrentState = "";
};
