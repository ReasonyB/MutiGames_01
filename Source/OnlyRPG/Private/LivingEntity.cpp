// Fill out your copyright notice in the Description page of Project Settings.


#include "LivingEntity.h"
#include "Components/CapsuleComponent.h"

ALivingEntity::ALivingEntity()
{
	//Component Setting
	USkeletalMeshComponent* MESH = GetMesh();
	class UCapsuleComponent* CAPSULE = GetCapsuleComponent();

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> DefaultMesh(TEXT("/Game/Characters/Mannequins/Meshes/SKM_Manny.SKM_Manny"));
	
	MESH->SetSkeletalMesh(DefaultMesh.Object);
	MESH->SetRelativeLocation_Direct(FVector(0.0F, 0.0F, -90.0F));
	MESH->SetRelativeRotation(FQuat(FRotator(0.0F,270.0F,0.0F)));
	MESH->SetCollisionObjectType(ECC_GameTraceChannel1);

	CAPSULE->SetCapsuleSize(35.0F, 90.0F);

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