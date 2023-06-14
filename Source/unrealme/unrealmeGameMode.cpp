// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "unrealmeGameMode.h"
#include "unrealmeHUD.h"
#include "unrealmeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AunrealmeGameMode::AunrealmeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AunrealmeHUD::StaticClass();
}
