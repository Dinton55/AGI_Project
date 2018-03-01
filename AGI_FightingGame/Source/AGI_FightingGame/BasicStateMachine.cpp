// Fill out your copyright notice in the Description page of Project Settings.

#include "BasicStateMachine.h"

void UBasicStateMachine::SetState(FString DesiredState)
{
	if (States.Contains(DesiredState) &&
		!DesiredState.Equals(CurrentState, ESearchCase::IgnoreCase))
	{
		OnStateChanged.Broadcast(DesiredState, CurrentState);
		CurrentState = DesiredState;
	}
}

void UBasicStateMachine::AddInitialStates(TArray<FString>& InitialStates)
{
	States = InitialStates;
}
