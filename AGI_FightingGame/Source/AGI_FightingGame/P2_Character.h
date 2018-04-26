// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "P2_Character.generated.h"

UENUM(BlueprintType)
enum class EP2CurrentState : uint8
{
	IDLE		UMETA(DisplayName = "Idle_State"),
	MOVING		UMETA(DisplayName = "Moving_State"),
	CROUCHING	UMETA(DisplayName = "Crouching_State"),
	JUMPING		UMETA(DisplayName = "Jumping_State"),
	BLOCKING	UMETA(DisplayName = "Block_State"),

	// Idle Actions
	PUNCHING	UMETA(DisplayName = "Punching_Move"),
	KICKING		UMETA(DisplayName = "Kicking_Move"),

	// Crouching Actions
	UPPERCUT	UMETA(DisplayName = "Uppercut_Move"),
	SWEEPKICK	UMETA(DisplayName = "SweepKick_Move"),

	// Moving Actions
	MOVEPUNCH	UMETA(DisplayName = "Moving_Punch"),
	MOVEKICK	UMETA(DisplayName = "Moving_Kick"),

	// Jumping Actions
	JUMPPUNCH	UMETA(DisplayName = "Jumping_Punch"),
	JUMPKICK	UMETA(DisplayName = "Jumping_Kick")
};

UCLASS(config = Game)
class AGI_FIGHTINGGAME_API AP2_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AP2_Character();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float MovementSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "State")
		EP2CurrentState P2CurrentState;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Animation Times

	/// Idle
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation_Times")
		float IdlePunchTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation_Times")
		float IdleKickTime;

	/// Jump
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation_Times")
		float JumpTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation_Times")
		float JumpPunchTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation_Times")
		float JumpKickTime;

	/// Crouch
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation_Times")
		float CrouchPunchTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation_Times")
		float CrouchKickTime;

	/// Moving
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation_Times")
		float MovingPunchTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation_Times")
		float MovingKickTime;

	// COLLISIONS
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Fist_Collision")
		class USphereComponent* LeftHand;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Fist_Collision")
		class USphereComponent* RightHand;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Foot_Collision")
		class USphereComponent* LeftFoot;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Foot_Collision")
		class USphereComponent* RightFoot;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Health")
		int health;

	UFUNCTION(BlueprintCallable, Category = "Health")
		void P2_TakeDamage(int Damage) { health -= Damage; };

	// States

	/// Moving
	void OnMoveLeftPressed();
	void OnMoveLeftReleased();

	void OnMoveRightPressed();
	void OnMoveRightReleased();

	/// Crouching
	void OnCrouchPressed();
	void OnCrouchReleased();

	/// Jumping
	void CharacterJump();

	/// Blocking
	void OnBlockPressed();
	void OnBlockReleased();

	// Moves
	void Punch(); // Will obviously be tweaked.
	void Kick();

	float CurrentRightSpeed;

	FORCEINLINE void SetStateToIdle() { P2CurrentState = EP2CurrentState::IDLE; }
	FORCEINLINE void SetStateToCrouch() { P2CurrentState = EP2CurrentState::CROUCHING; }

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
};
