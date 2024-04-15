// Fill out your copyright notice in the Description page of Project Settings.


#include "DebugPlayerController.h"

void ADebugPlayerController::BeginPlay() {
	//Mouse Setting
	SetShowMouseCursor(true);
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;
}