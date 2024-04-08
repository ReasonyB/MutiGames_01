// Fill out your copyright notice in the Description page of Project Settings.


#include "LivingEntity.h"

ALivingEntity::ALivingEntity()
{
	Status.Init(0, (int)EStats::Count);
	Status[(int)EStats::Health] = 100;
	Dead.BindUObject(this, &ALivingEntity::OnDead);
}

void ALivingEntity::OnDamage(float damage){
	float health = Status[(int)EStats::Health];
	if (health <= damage) {
		Status[(int)EStats::Health] = 0;
		Dead.Execute();
	}
	else {
		Status[(int)EStats::Health] = health - damage;
	}
}

void ALivingEntity::OnDead() {

}