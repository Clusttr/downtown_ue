// Copyright Epic Games, Inc. All Rights Reserved.

#include "DowntownGameMode.h"
#include "DowntownCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADowntownGameMode::ADowntownGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
