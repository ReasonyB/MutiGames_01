// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemTableRow.h"
#include "ItemBase.generated.h"
/**
 * 
 */
UCLASS(config = Game)
class UItemBase : public UObject
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Info, meta = (AllowPrivateAccess = "true"))
	FItemTableRow ItemInfo;
	UPROPERTY()
	uint32 Count;
	
	UItemBase();
public:
	UItemBase(const FItemTableRow* row, uint32 count);
};
