// Copyright Epic Games, Inc. All Rights Reserved.

#include "GunGameGameMode.h"
#include "GunGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGunGameGameMode::AGunGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
