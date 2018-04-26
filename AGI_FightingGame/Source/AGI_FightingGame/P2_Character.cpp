// Fill out your copyright notice in the Description page of Project Settings.

#include "P2_Character.h"
#include "TimerManager.h"
#include "Components/SphereComponent.h"

// Sets default values
AP2_Character::AP2_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//AutoPossessPlayer = EAutoReceiveInput::Player1;

	LeftHand = CreateDefaultSubobject<USphereComponent>(TEXT("Left_Hand"));
	RightHand = CreateDefaultSubobject<USphereComponent>(TEXT("Right_Hand"));
	LeftFoot = CreateDefaultSubobject<USphereComponent>(TEXT("Left_Foot"));
	RightFoot = CreateDefaultSubobject<USphereComponent>(TEXT("Right_Foot"));

	// Will only be active in specified state i.e kicking/punching
	LeftHand->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RightHand->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	LeftFoot->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RightFoot->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	P2CurrentState = EP2CurrentState::IDLE;

	health = 100;
}

// Called when the game starts or when spawned
void AP2_Character::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AP2_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const FVector LocalMove = FVector(0.0f,
		CurrentRightSpeed, 0.0f);
	AddActorWorldOffset(LocalMove);
}

// Called to bind functionality to input
void AP2_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// set up gameplay key bindings
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this,
		&AP2_Character::CharacterJump);

	//PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Punch", IE_Released, this,
		&AP2_Character::Punch);

	//PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Kick", IE_Released, this,
		&AP2_Character::Kick);
	// Movement (Left/Right)
	//PlayerInputComponent->BindAxis("MoveRight", this, &AP2_Character::MoveRight);

	PlayerInputComponent->BindAction("MoveLeft", IE_Pressed, this,
		&AP2_Character::OnMoveLeftPressed);
	PlayerInputComponent->BindAction("MoveLeft", IE_Released, this,
		&AP2_Character::OnMoveLeftReleased);

	PlayerInputComponent->BindAction("MoveRight", IE_Pressed, this,
		&AP2_Character::OnMoveRightPressed);
	PlayerInputComponent->BindAction("MoveRight", IE_Released, this,
		&AP2_Character::OnMoveRightReleased);

	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this,
		&AP2_Character::OnCrouchPressed);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this,
		&AP2_Character::OnCrouchReleased);

	PlayerInputComponent->BindAction("Block", IE_Pressed, this,
		&AP2_Character::OnBlockPressed);
	PlayerInputComponent->BindAction("Block", IE_Released, this,
		&AP2_Character::OnBlockReleased);

}

void AP2_Character::OnMoveLeftPressed()
{
	//AddMovementInput(FVector(0.f, 1.f, 0.f), MovementSpeed);
	P2CurrentState = EP2CurrentState::MOVING;

	UE_LOG(LogTemp, Warning, TEXT("MOVING P2 LEFT"));

	float NewRightSpeed = (MovementSpeed * 10.0f);
	CurrentRightSpeed = NewRightSpeed;
}

void AP2_Character::OnMoveLeftReleased()
{
	P2CurrentState = EP2CurrentState::IDLE;
	CurrentRightSpeed = 0.0f;
}

void AP2_Character::OnMoveRightPressed()
{
	//AddMovementInput(FVector(0.f, -1.f, 0.f), MovementSpeed);
	P2CurrentState = EP2CurrentState::MOVING;

	UE_LOG(LogTemp, Warning, TEXT("MOVING P2 RIGHT"));

	float NewRightSpeed = -(MovementSpeed * 10.0f);
	CurrentRightSpeed = NewRightSpeed;
}

void AP2_Character::OnMoveRightReleased()
{
	P2CurrentState = EP2CurrentState::IDLE;
	CurrentRightSpeed = 0.0f;
}

void AP2_Character::OnCrouchPressed()
{
	if (P2CurrentState != EP2CurrentState::UPPERCUT &&
		P2CurrentState != EP2CurrentState::SWEEPKICK)
	{
		P2CurrentState = EP2CurrentState::CROUCHING;
		UE_LOG(LogTemp, Warning, TEXT("LADS"));
	}
}

void AP2_Character::OnCrouchReleased()
{
	P2CurrentState = EP2CurrentState::IDLE;
}

void AP2_Character::CharacterJump()
{
	//Jump();
	if (P2CurrentState == EP2CurrentState::IDLE)
	{
		P2CurrentState = EP2CurrentState::JUMPING;
		FTimerHandle JumpTimeHandle;
		GetWorldTimerManager().SetTimer(
			JumpTimeHandle, this, &AP2_Character::SetStateToIdle, 3.0f);
	}
}

void AP2_Character::OnBlockPressed()
{
	P2CurrentState = EP2CurrentState::BLOCKING;

}

void AP2_Character::OnBlockReleased()
{
	P2CurrentState = EP2CurrentState::IDLE;

}

// Idle Kick
void AP2_Character::Kick()
{
	if (P2CurrentState == EP2CurrentState::IDLE)
	{
		P2CurrentState = EP2CurrentState::KICKING;

		UE_LOG(LogTemp, Warning, TEXT("KICK TIME: %f"), IdleKickTime);

		FTimerHandle KickTimeHandle;
		GetWorldTimerManager().SetTimer(
			KickTimeHandle, this, &AP2_Character::SetStateToIdle, IdleKickTime);
	}
	else if (P2CurrentState == EP2CurrentState::CROUCHING)
	{
		P2CurrentState = EP2CurrentState::SWEEPKICK;

		FTimerHandle KickTimeHandle;
		GetWorldTimerManager().SetTimer(
			KickTimeHandle, this, &AP2_Character::SetStateToIdle, CrouchKickTime);
	}
	else if (P2CurrentState == EP2CurrentState::MOVING)
	{
		P2CurrentState = EP2CurrentState::MOVEKICK;

		FTimerHandle KickTimeHandle;
		GetWorldTimerManager().SetTimer(
			KickTimeHandle, this, &AP2_Character::SetStateToIdle, MovingKickTime);
	}
	else if (P2CurrentState == EP2CurrentState::JUMPING)
	{
		P2CurrentState = EP2CurrentState::JUMPKICK;

		FTimerHandle KickTimeHandle;
		GetWorldTimerManager().SetTimer(
			KickTimeHandle, this, &AP2_Character::SetStateToIdle, JumpKickTime);
	}
}

void AP2_Character::Punch()
{
	if (P2CurrentState == EP2CurrentState::IDLE)
	{

		P2CurrentState = EP2CurrentState::PUNCHING;

		FTimerHandle PunchTimeHandle;
		GetWorldTimerManager().SetTimer(
			PunchTimeHandle, this, &AP2_Character::SetStateToIdle, IdlePunchTime);
	}
	else if (P2CurrentState == EP2CurrentState::CROUCHING)
	{
		P2CurrentState = EP2CurrentState::UPPERCUT;

		UE_LOG(LogTemp, Warning, TEXT("UPPERCUT"));

		FTimerHandle PunchTimeHandle;
		GetWorldTimerManager().SetTimer(
			PunchTimeHandle, this, &AP2_Character::SetStateToIdle, CrouchPunchTime);
	}
	else if (P2CurrentState == EP2CurrentState::MOVING)
	{
		P2CurrentState = EP2CurrentState::MOVEPUNCH;

		FTimerHandle PunchTimeHandle;
		GetWorldTimerManager().SetTimer(
			PunchTimeHandle, this, &AP2_Character::SetStateToIdle, MovingPunchTime);
	}
	else if (P2CurrentState == EP2CurrentState::JUMPING)
	{
		P2CurrentState = EP2CurrentState::JUMPPUNCH;

		FTimerHandle PunchTimeHandle;
		GetWorldTimerManager().SetTimer(
			PunchTimeHandle, this, &AP2_Character::SetStateToIdle, JumpPunchTime);
	}
}