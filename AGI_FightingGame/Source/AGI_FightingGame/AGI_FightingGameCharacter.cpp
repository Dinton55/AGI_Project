// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "AGI_FightingGameCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "Animation/AnimationAsset.h"
#include "TimerManager.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SphereComponent.h"
#include "P2_Character.h"

AAGI_FightingGameCharacter::AAGI_FightingGameCharacter()
{
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	//GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

	// Don't rotate when the controller rotates.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Colliders
	LeftHand = CreateDefaultSubobject<USphereComponent>(TEXT("Left_Hand"));
	RightHand = CreateDefaultSubobject<USphereComponent>(TEXT("Right_Hand"));
	LeftFoot = CreateDefaultSubobject<USphereComponent>(TEXT("Left_Foot"));
	RightFoot = CreateDefaultSubobject<USphereComponent>(TEXT("Right_Foot"));

	// Will only be active in specified state i.e kicking/punching
	LeftHand->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RightHand->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	LeftFoot->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RightFoot->SetCollisionEnabled(ECollisionEnabled::NoCollision);


	CurrentState = ECurrentState::IDLE;
	StateToBe = ECurrentState::IDLE;


	ShieldMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shield"));
	ShieldMesh->SetupAttachment(RootComponent);
	ShieldMesh->SetRelativeLocation(FVector::ZeroVector);
	ShieldMesh->SetVisibility(false);
}

//////////////////////////////////////////////////////////////////////////
// Input

void AAGI_FightingGameCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, 
		&AAGI_FightingGameCharacter::CharacterJump);

	//PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Punch", IE_Released, this, 
		&AAGI_FightingGameCharacter::Punch);

	//PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Kick", IE_Released, this,
		&AAGI_FightingGameCharacter::Kick);
	// Movement (Left/Right)
	//PlayerInputComponent->BindAxis("MoveRight", this, &AAGI_FightingGameCharacter::MoveRight);

	PlayerInputComponent->BindAction("MoveLeft", IE_Pressed, this,
		&AAGI_FightingGameCharacter::OnMoveLeftPressed);
	PlayerInputComponent->BindAction("MoveLeft", IE_Released, this,
		&AAGI_FightingGameCharacter::OnMoveLeftReleased);

	PlayerInputComponent->BindAction("MoveRight", IE_Pressed, this,
		&AAGI_FightingGameCharacter::OnMoveRightPressed);
	PlayerInputComponent->BindAction("MoveRight", IE_Released, this,
		&AAGI_FightingGameCharacter::OnMoveRightReleased);

	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this,
		&AAGI_FightingGameCharacter::OnCrouchPressed);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this,
		&AAGI_FightingGameCharacter::OnCrouchReleased);

	PlayerInputComponent->BindAction("Block", IE_Pressed, this,
		&AAGI_FightingGameCharacter::OnBlockPressed);
	PlayerInputComponent->BindAction("Block", IE_Released, this,
		&AAGI_FightingGameCharacter::OnBlockReleased);

	PlayerInputComponent->BindTouch(IE_Pressed, this, &AAGI_FightingGameCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AAGI_FightingGameCharacter::TouchStopped);
}

void AAGI_FightingGameCharacter::MoveRight(float Value)
{
	// add movement in that direction
	AddMovementInput(FVector(0.f,-1.f,0.f), Value);
}

void AAGI_FightingGameCharacter::TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	// jump on any touch
	Jump();
	 
}

void AAGI_FightingGameCharacter::TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	StopJumping();
}

void AAGI_FightingGameCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	const FVector LocalMove = FVector(0.0f,
		CurrentRightSpeed, 0.0f);
	AddActorWorldOffset(LocalMove);
}

void AAGI_FightingGameCharacter::OnLeftHandOverlapBegin(UPrimitiveComponent * OverlappedComp, 
	AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	AP2_Character* P2 = Cast<AP2_Character>(OtherActor);

	if (P2)
	{
		UE_LOG(LogTemp, Warning, TEXT("P2 VALID"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("P2 INVALID"));
	}
	
}

// Idle Punch
void AAGI_FightingGameCharacter::OnMoveLeftPressed()
{
	//AddMovementInput(FVector(0.f, 1.f, 0.f), MovementSpeed);
	CurrentState = ECurrentState::MOVING;

	float NewRightSpeed = (MovementSpeed * 10.0f);
	CurrentRightSpeed = NewRightSpeed;
}

void AAGI_FightingGameCharacter::OnMoveLeftReleased()
{
	CurrentState = ECurrentState::IDLE;
	CurrentRightSpeed = 0.0f;
}

void AAGI_FightingGameCharacter::OnMoveRightPressed()
{
	//AddMovementInput(FVector(0.f, -1.f, 0.f), MovementSpeed);
	CurrentState = ECurrentState::MOVING;

	float NewRightSpeed = -(MovementSpeed * 10.0f);
	CurrentRightSpeed = NewRightSpeed;
}

void AAGI_FightingGameCharacter::OnMoveRightReleased()
{
	CurrentState = ECurrentState::IDLE;
	CurrentRightSpeed = 0.0f;
}

void AAGI_FightingGameCharacter::OnCrouchPressed()
{
	if (CurrentState != ECurrentState::UPPERCUT && 
		CurrentState != ECurrentState::SWEEPKICK)
	{
		CurrentState = ECurrentState::CROUCHING;
	}
}

void AAGI_FightingGameCharacter::OnCrouchReleased()
{
	CurrentState = ECurrentState::IDLE;
}

void AAGI_FightingGameCharacter::CharacterJump()
{
	//Jump();
	if (CurrentState == ECurrentState::IDLE)
	{
		CurrentState = ECurrentState::JUMPING;
		FTimerHandle JumpTimeHandle;
		GetWorldTimerManager().SetTimer(
			JumpTimeHandle, this, &AAGI_FightingGameCharacter::SetStateToIdle, JumpTime);
	}
}

void AAGI_FightingGameCharacter::OnBlockPressed()
{
	CurrentState = ECurrentState::BLOCKING;
	ShieldMesh->SetVisibility(true);
}

void AAGI_FightingGameCharacter::OnBlockReleased()
{
	CurrentState = ECurrentState::IDLE;
	ShieldMesh->SetVisibility(false);
}

// Idle Kick
void AAGI_FightingGameCharacter::Kick()
{
	if (CurrentState == ECurrentState::IDLE)
	{
		CurrentState = ECurrentState::KICKING;
		RightFoot->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

		FTimerHandle KickTimeHandle;
		GetWorldTimerManager().SetTimer(
			KickTimeHandle, this, &AAGI_FightingGameCharacter::SetStateToIdle, IdleKickTime);
	}
	else if (CurrentState == ECurrentState::CROUCHING)
	{
		CurrentState = ECurrentState::SWEEPKICK;
		RightFoot->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

		FTimerHandle KickTimeHandle;
		GetWorldTimerManager().SetTimer(
			KickTimeHandle, this, &AAGI_FightingGameCharacter::SetStateToIdle, CrouchKickTime);
	}
	else if (CurrentState == ECurrentState::MOVING)
	{
		CurrentState = ECurrentState::MOVEKICK;

		FTimerHandle KickTimeHandle;
		GetWorldTimerManager().SetTimer(
			KickTimeHandle, this, &AAGI_FightingGameCharacter::SetStateToIdle, MovingKickTime);
	}
	else if (CurrentState == ECurrentState::JUMPING)
	{
		CurrentState = ECurrentState::JUMPKICK;

		FTimerHandle KickTimeHandle;
		GetWorldTimerManager().SetTimer(
			KickTimeHandle, this, &AAGI_FightingGameCharacter::SetStateToIdle, JumpKickTime);
	}
}


void AAGI_FightingGameCharacter::Punch()
{
	if (CurrentState == ECurrentState::IDLE)
	{

		CurrentState = ECurrentState::PUNCHING;
		RightHand->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

		FTimerHandle PunchTimeHandle;
		GetWorldTimerManager().SetTimer(
			PunchTimeHandle, this, &AAGI_FightingGameCharacter::SetStateToIdle, IdlePunchTime);
	}
	else if (CurrentState == ECurrentState::CROUCHING)
	{
		CurrentState = ECurrentState::UPPERCUT;
		LeftHand->SetCollisionEnabled(ECollisionEnabled::QueryOnly);

		FTimerHandle PunchTimeHandle;
		GetWorldTimerManager().SetTimer(
			PunchTimeHandle, this, &AAGI_FightingGameCharacter::SetStateToIdle, CrouchPunchTime);
	}

	// May get rid of these.
	else if (CurrentState == ECurrentState::MOVING)
	{
		CurrentState = ECurrentState::MOVEPUNCH;

		FTimerHandle PunchTimeHandle;
		GetWorldTimerManager().SetTimer(
			PunchTimeHandle, this, &AAGI_FightingGameCharacter::SetStateToIdle, MovingPunchTime);
	}
	else if (CurrentState == ECurrentState::JUMPING)
	{
		CurrentState = ECurrentState::JUMPPUNCH;

		FTimerHandle PunchTimeHandle;
		GetWorldTimerManager().SetTimer(
			PunchTimeHandle, this, &AAGI_FightingGameCharacter::SetStateToIdle, JumpPunchTime);
	}
}


void AAGI_FightingGameCharacter::SetStateToIdle()
{
	CurrentState = ECurrentState::IDLE;

	LeftHand->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RightHand->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	LeftFoot->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RightFoot->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}