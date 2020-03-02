// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "KnightsTrial1cGameMode.h"
#include "KnightsTrial1cCharacter.h"

AKnightsTrial1cGameMode::AKnightsTrial1cGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AKnightsTrial1cCharacter::StaticClass();	
}
