// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.


#include "OrbTestGameModeBase.h"

void AOrbTestGameModeBase::StartPlay()
{
	auto Dialog = CreateWidget<UUserWidget>(GetGameInstance(), HUDWidgetClass);

	Dialog->AddToPlayerScreen(1000);
}