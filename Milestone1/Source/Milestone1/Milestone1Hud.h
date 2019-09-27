// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "Milestone1Hud.generated.h"


UCLASS(config = Game)
class AMilestone1Hud : public AHUD
{
	GENERATED_BODY()

public:
	AMilestone1Hud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
