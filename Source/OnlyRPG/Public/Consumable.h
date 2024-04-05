// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Consumable.generated.h"
/**
 * 
 */
UINTERFACE()
class UConsumable : public UInterface
{
	GENERATED_BODY()
};

class IConsumable {
	GENERATED_BODY()

public:
	UFUNCTION()
	virtual void Consume(int32 count = 1) = 0;
};