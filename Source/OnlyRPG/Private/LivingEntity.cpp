// Fill out your copyright notice in the Description page of Project Settings.


#include "LivingEntity.h"

ALivingEntity::ALivingEntity()
{
	Status.Init(0, (int)EStats::Count);
	Status[(int)EStats::Health] = 100;
	Dead.BindUObject(this, &ALivingEntity::OnDead);
}

float ALivingEntity::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
	int Hpidx = (int)EStats::Health;
	float damage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	float health = Status[Hpidx];
	if (health <= damage) {
		Status[Hpidx] = 0;
		Dead.Execute();
	}
	else {
		Status[Hpidx] = health - damage;
	}
	return damage;
}

void ALivingEntity::OnDead() {
	Destroy();
}