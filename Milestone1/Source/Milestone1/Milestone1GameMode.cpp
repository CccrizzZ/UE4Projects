// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Milestone1GameMode.h"
#include "Milestone1Pawn.h"
#include "Milestone1Hud.h"

AMilestone1GameMode::AMilestone1GameMode()
{
	DefaultPawnClass = AMilestone1Pawn::StaticClass();
	HUDClass = AMilestone1Hud::StaticClass();
}
