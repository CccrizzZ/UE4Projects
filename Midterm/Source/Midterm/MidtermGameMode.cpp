// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MidtermGameMode.h"
#include "MidtermCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMidtermGameMode::AMidtermGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
