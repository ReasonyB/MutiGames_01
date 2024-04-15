// Copyright Epic Games, Inc. All Rights Reserved.

#include "OnlyRPGGameMode.h"
#include "OnlyRPGCharacter.h"
#include "DebugPlayerController.h"
#include "UObject/ConstructorHelpers.h"

AOnlyRPGGameMode::AOnlyRPGGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	PlayerControllerClass = ADebugPlayerController::StaticClass();
}