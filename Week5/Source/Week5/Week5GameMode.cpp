// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Week5GameMode.h"
#include "Week5Character.h"
#include "UObject/ConstructorHelpers.h"

AWeek5GameMode::AWeek5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
