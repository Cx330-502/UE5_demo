// Copyright Epic Games, Inc. All Rights Reserved.

#include "mobile_pro0GameMode.h"
#include "mobile_pro0Character.h"
#include "UObject/ConstructorHelpers.h"

Amobile_pro0GameMode::Amobile_pro0GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
