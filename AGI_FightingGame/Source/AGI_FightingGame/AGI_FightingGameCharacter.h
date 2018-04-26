// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AGI_FightingGameCharacter.generated.h"

// Different states
UENUM(BlueprintType)
enum class ECurrentState : uint8
{
	// Movement
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

UCLASS(config=Game)
class AAGI_FightingGameCharacter : public ACharacter
{
	GENERATED_BODY()

protected:

	/** Called for side to side input */
	void MoveRight(float Val);

	/** Handle touch inputs. */
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Handle touch stop event. */
	void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
		float MovementSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "State")	
		ECurrentState CurrentState;

	ECurrentState StateToBe;
		
	void Tick(float DeltaSeconds) override;

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

	UFUNCTION()
		void OnLeftHandOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
			UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// COLLISIONS
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Fist_Collision")
		class USphereComponent* LeftHand;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Fist_Collision")
		class USphereComponent* RightHand;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Foot_Collision")
		class USphereComponent* LeftFoot;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Foot_Collision")
		class USphereComponent* RightFoot;

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

	void SetStateToIdle();
	FORCEINLINE void SetStateToCrouch() { CurrentState = ECurrentState::CROUCHING; }

	// ABILITY DURATIONS

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Shield")
		class UStaticMeshComponent* ShieldMesh;

public:
	AAGI_FightingGameCharacter();
};
