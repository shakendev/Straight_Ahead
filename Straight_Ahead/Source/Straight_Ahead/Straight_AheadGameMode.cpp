// Copyright Epic Games, Inc. All Rights Reserved.

#include "Straight_AheadGameMode.h"
#include "Straight_AheadCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStraight_AheadGameMode::AStraight_AheadGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
