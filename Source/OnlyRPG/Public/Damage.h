// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Damage.generated.h"

/**
 * 
 */
UINTERFACE()
class ONLYRPG_API UDamage : public UInterface
{
	GENERATED_BODY()
};

class ONLYRPG_API IDamage {
	GENERATED_BODY()
public:
	UFUNCTION()
	virtual void OnDamage(float damage) = 0;
};
