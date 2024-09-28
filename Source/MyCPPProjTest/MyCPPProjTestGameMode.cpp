// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyCPPProjTestGameMode.h"
#include "MyCPPProjTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyCPPProjTestGameMode::AMyCPPProjTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
