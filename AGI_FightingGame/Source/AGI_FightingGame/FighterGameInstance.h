// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "FighterGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class AGI_FIGHTINGGAME_API UFighterGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:

	UFighterGameInstance();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBasicStateMachine* StateMachine;

	virtual void Init() override;
	
};
