// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CPP_W3GameMode.h"
#include "CPP_W3Character.h"
#include "UObject/ConstructorHelpers.h"

ACPP_W3GameMode::ACPP_W3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
