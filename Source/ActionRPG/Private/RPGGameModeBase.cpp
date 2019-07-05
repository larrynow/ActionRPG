// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "RPGGameModeBase.h"
#include "RPGGameStateBase.h"
#include "RPGPlayerControllerBase.h"

ARPGGameModeBase::ARPGGameModeBase()
{
	GameStateClass = ARPGGameStateBase::StaticClass();
	PlayerControllerClass = ARPGPlayerControllerBase::StaticClass();
}