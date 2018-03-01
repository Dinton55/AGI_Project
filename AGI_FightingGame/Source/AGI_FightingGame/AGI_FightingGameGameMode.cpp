// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "AGI_FightingGameGameMode.h"
#include "AGI_FightingGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAGI_FightingGameGameMode::AAGI_FightingGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
