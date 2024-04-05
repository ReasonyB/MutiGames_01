// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBase.h"

UItemBase::UItemBase() {
	Count = 0;
}

UItemBase::UItemBase(const FItemTableRow* row, uint32 count): ItemInfo{*row}, Count{count}
{
}
