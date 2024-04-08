// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Damage.h"
#include "LivingEntity.generated.h"

DECLARE_DELEGATE(LivingEntityDead)
/**
 * 
 */
UENUM()
enum class EStats{
	Health = 0,
	Count
};

UCLASS(Abstract)
class ONLYRPG_API ALivingEntity : public AActor, public IDamage
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<float> Status;

	bool canSet = true;
public:
	ALivingEntity();
	// interface override;
	void IDamage::OnDamage(float) override;
	//delegate
	LivingEntityDead Dead;

	// Fuction
	UFUNCTION()
	virtual void OnDead();
};
