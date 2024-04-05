// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Skillable.generated.h"
/**
 * 
 */
UINTERFACE()
class  USkillable : public UInterface
{
	GENERATED_BODY()
};

class ISkillable {
	GENERATED_BODY()
public:
	UFUNCTION()
	virtual bool IsAvailable() = 0;
	UFUNCTION()
	virtual void Cooldown() = 0;
};
