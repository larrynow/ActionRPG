// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ActionRPG.h"
#include "GameFramework/GameModeBase.h"
#include "RPGGameModeBase.generated.h"

/** Base class for GameMode, should be blueprinted */
UCLASS()
class ACTIONRPG_API ARPGGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	/** Constructor */
	ARPGGameModeBase();
};

