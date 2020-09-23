// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FSMGameMode.h"
#include "FSMHUD.h"
#include "FSMCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFSMGameMode::AFSMGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFSMHUD::StaticClass();
}
