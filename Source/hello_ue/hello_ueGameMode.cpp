// Copyright Epic Games, Inc. All Rights Reserved.

#include "hello_ueGameMode.h"
#include "hello_ueCharacter.h"
#include "UObject/ConstructorHelpers.h"

Ahello_ueGameMode::Ahello_ueGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
