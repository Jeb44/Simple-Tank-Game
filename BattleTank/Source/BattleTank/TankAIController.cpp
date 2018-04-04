// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"

void ATankAIController::BeginPlay() {
	Super::BeginPlay();

	ControlledTank = Cast<ATank>(GetPawn());
	ControlledTankName = ControlledTank->GetName();


	LogAIControllerPossesses();
	LogControlledTank();
}

ATank* ATankAIController::GetControlledTank() const
{
	return ControlledTank;
	//return Cast<ATank>(GetPawn());
}


/// LOG FUNCTIONS

void ATankAIController::LogAIControllerPossesses() const
{
	UE_LOG(LogTemp, Warning, TEXT("[ATankAIController] possessing: %s"), *(ControlledTankName));
}

void ATankAIController::LogControlledTank() const
{
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Error, TEXT("[ATankPlayerController] missing controllable Tank!"))
	}
}


