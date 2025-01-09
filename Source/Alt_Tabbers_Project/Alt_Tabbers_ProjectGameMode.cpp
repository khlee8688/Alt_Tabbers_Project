// Copyright Epic Games, Inc. All Rights Reserved.

#include "Alt_Tabbers_ProjectGameMode.h"
#include "Alt_Tabbers_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAlt_Tabbers_ProjectGameMode::AAlt_Tabbers_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
