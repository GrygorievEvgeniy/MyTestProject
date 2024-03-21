// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyTestProjectGameMode.h"
#include "MyTestProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyTestProjectGameMode::AMyTestProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
