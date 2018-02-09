// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "UBombermanGameMode.h"
#include "UBombermanCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUBombermanGameMode::AUBombermanGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
