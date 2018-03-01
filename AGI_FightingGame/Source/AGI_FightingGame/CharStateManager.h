// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharStateManager.generated.h"

//// Different states
//UENUM(BlueprintType)
//enum class ECoreState : uint8
//{
//	IDLE		UMETA(DisplayName = "Idle_State"),
//	MOVING		UMETA(DisplayName = "Moving_State"),
//	CROUCHING	UMETA(DisplayName = "Crouching_State"),
//	JUMPING		UMETA(DisplayName = "Jumping_State"),
//	BLOCKING	UMETA(DisplayName = "Block_State")
//};
//
//UENUM(BlueprintType)
//enum class EPlayerInput : uint8
//{
//	PUNCHING	UMETA(DisplayName = "Punching_Move"),
//	KICKING		UMETA(DisplayName = "Kicking_Move"),
//	IDLE		UMETA(DisplayName = "Idle_Move")
//};
//
//UENUM(BlueprintType)
//enum class EFinalState
//{
//
//};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class AGI_FIGHTINGGAME_API UCharStateManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCharStateManager();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
