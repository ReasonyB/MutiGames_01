// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
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
class ONLYRPG_API ALivingEntity : public AActor
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<float> Status;

	bool canSet = true;
public:
	ALivingEntity();
	//delegate
	LivingEntityDead Dead;
	float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	// Fuction
	UFUNCTION()
	virtual void OnDead();
};
