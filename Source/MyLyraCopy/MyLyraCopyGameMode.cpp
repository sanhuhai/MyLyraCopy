// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyLyraCopyGameMode.h"
#include "MyLyraCopyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyLyraCopyGameMode::AMyLyraCopyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
