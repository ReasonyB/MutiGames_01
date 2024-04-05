// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Terminable.generated.h"

/**
 * 
 */
UINTERFACE()
class UTerminable : public UInterface
{
	GENERATED_BODY()
};

class ITerminable {
	GENERATED_BODY()
	
public :
	UFUNCTION()
	virtual bool IsAvailable() = 0;
	UFUNCTION()
	virtual void UpdateDueDate() = 0;
};