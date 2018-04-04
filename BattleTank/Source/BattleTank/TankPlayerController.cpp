// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay() {
	Super::BeginPlay();

	ControlledTank = Cast<ATank>(GetPawn());
	ControlledTankName = ControlledTank->GetName();

	
	LogPlayerControllerPossesses();
	LogControlledTank();
}

ATank* ATankPlayerController::GetControlledTank() const
{
	return ControlledTank;
	//return Cast<ATank>(GetPawn());
}


/// LOG FUNCTIONS

void ATankPlayerController::LogPlayerControllerPossesses() const
{
	UE_LOG(LogTemp, Warning, TEXT("[ATankPlayerController] possessing: %s"), *(ControlledTankName));
}

void ATankPlayerController::LogControlledTank() const
{
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Error, TEXT("[ATankPlayerController] missing controllable Tank!"))
	}
}