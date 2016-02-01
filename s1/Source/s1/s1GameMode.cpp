// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "s1.h"
#include "s1GameMode.h"
#include "s1PlayerController.h"
#include "s1Character.h"

As1GameMode::As1GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = As1PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}