// Fill out your copyright notice in the Description page of Project Settings.

#include "FighterGameInstance.h"
#include "BasicStateMachine.h"

UFighterGameInstance::UFighterGameInstance()
{

}

void UFighterGameInstance::Init()
{
	StateMachine = NewObject<UBasicStateMachine>(this);

	Super::Init();
}
