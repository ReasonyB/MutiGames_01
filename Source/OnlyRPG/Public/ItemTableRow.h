// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemTableRow.generated.h"

UENUM(Meta = (Bitsflags))
enum class EItemFeature {
	Consumable, Terminable, Skillable
};
/**
 * 
 */
USTRUCT()
struct FItemTableRow : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, Category = Inform, meta = (AllowPrivateAccess = "true"))
	uint32 Id;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Inform, meta = (AllowPrivateAccess = "true"))
	FText Name;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Inform, meta = (AllowPrivateAccess = "true"))
	FText Detail;
	UPROPERTY(EditAnywhere, Meta = (Bitmask, BitmaskEnum = "EItemFeature"), meta = (AllowPrivateAccess = "true"))
	int32 FeatureFlags;
	UPROPERTY(EditAnywhere, Category = Inform, meta = (AllowPrivateAccess = "true"))
	uint32 Cost;
	UPROPERTY(EditAnywhere, Category = Inform, meta =(AllowPrivateAccess = "true"))
	uint32 MaxCount;

public:
	FItemTableRow();
};
