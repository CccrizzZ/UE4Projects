// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Week4GameMode.h"
#include "Week4Character.h"
#include "UObject/ConstructorHelpers.h"

AWeek4GameMode::AWeek4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
