// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "AGI_FightingGameCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/InputComponent.h"
#include "Animation/AnimationAsset.h"
#include "TimerManager.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

AAGI_FightingGameCharacter::AAGI_FightingGameCharacter()
{
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	//// Create a camera boom attached to the root (capsule)
	//CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	//CameraBoom->SetupAttachment(RootComponent);
	//CameraBoom->bAbsoluteRotation = true; // Rotation of the character should not affect rotation of boom
	//CameraBoom->bDoCollisionTest = false;
	//CameraBoom->TargetArmLength = 500.f;
	//CameraBoom->SocketOffset = FVector(0.f,0.f,75.f);
	//CameraBoom->RelativeRotation = FRotator(0.f,180.f,0.f);

	//// Create a camera and attach to boom
	//SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	//SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	//SideViewCameraComponent->bUsePawnControlRotation = false; // We don't want the controller rotating the camera

	// Configure character movement
	//GetCharacterMovement()->bOrientRotationToMovement = true; // Face in the direction we are moving..
	//GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...at this rotation rate
	//GetCharacterMovement()->GravityScale = 2.f;
	//GetCharacterMovement()->AirControl = 0.80f;
	//GetCharacterMovement()->JumpZVelocity = 1000.f;
	//GetCharacterMovement()->GroundFriction = 3.f;
	//GetCharacterMovement()->MaxWalkSpeed = 600.f;
	//GetCharacterMovement()->MaxFlySpeed = 600.f;

	CurrentState = ECurrentState::IDLE;
	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
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
		UE_LOG(LogTemp, Warning, TEXT("LADS"));
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
			JumpTimeHandle, this, &AAGI_FightingGameCharacter::SetStateToIdle, 3.0f);
	}
}

void AAGI_FightingGameCharacter::OnBlockPressed()
{
	CurrentState = ECurrentState::BLOCKING;

}

void AAGI_FightingGameCharacter::OnBlockReleased()
{
	CurrentState = ECurrentState::IDLE;

}

// Idle Kick
void AAGI_FightingGameCharacter::Kick()
{
	if (CurrentState == ECurrentState::IDLE)
	{
		CurrentState = ECurrentState::KICKING;

		UE_LOG(LogTemp, Warning, TEXT("KICK TIME: %f"), IdleKickTime);

		FTimerHandle KickTimeHandle;
		GetWorldTimerManager().SetTimer(
			KickTimeHandle, this, &AAGI_FightingGameCharacter::SetStateToIdle, IdleKickTime);
	}
	else if (CurrentState == ECurrentState::CROUCHING)
	{
		CurrentState = ECurrentState::SWEEPKICK;

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

		FTimerHandle PunchTimeHandle;
		GetWorldTimerManager().SetTimer(
			PunchTimeHandle, this, &AAGI_FightingGameCharacter::SetStateToIdle, IdlePunchTime);
	}
	else if (CurrentState == ECurrentState::CROUCHING)
	{
		CurrentState = ECurrentState::UPPERCUT;

		UE_LOG(LogTemp, Warning, TEXT("UPPERCUT"));

		FTimerHandle PunchTimeHandle;
		GetWorldTimerManager().SetTimer(
			PunchTimeHandle, this, &AAGI_FightingGameCharacter::SetStateToIdle, CrouchPunchTime);
	}
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