// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "OrbTestGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ORBTEST_API AOrbTestGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	virtual void StartPlay() override;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> HUDWidgetClass = nullptr;
};
