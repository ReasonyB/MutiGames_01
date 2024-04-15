// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DebugPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ONLYRPG_API ADebugPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay();
};