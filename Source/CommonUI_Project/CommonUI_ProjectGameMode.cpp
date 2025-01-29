// Copyright Epic Games, Inc. All Rights Reserved.

#include "CommonUI_ProjectGameMode.h"
#include "CommonUI_ProjectPlayerController.h"
#include "CommonUI_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACommonUI_ProjectGameMode::ACommonUI_ProjectGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACommonUI_ProjectPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}