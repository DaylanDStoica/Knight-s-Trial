// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "KnightsTrial1cGameMode.generated.h"

/**
 * The GameMode defines the game being played. It governs the game rules, scoring, what actors
 * are allowed to exist in this game type, and who may enter the game.
 *
 * This game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of KnightsTrial1cCharacter
 */
UCLASS(minimalapi)
class AKnightsTrial1cGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	AKnightsTrial1cGameMode();
};
