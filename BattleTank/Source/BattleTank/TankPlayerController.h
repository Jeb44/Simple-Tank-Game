// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"

#include "Tank.h"

#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	void virtual BeginPlay() override;
	
	ATank* GetControlledTank() const;
	
private:

	ATank* ControlledTank; //Pawn
	FString ControlledTankName;



public:
	/// LOG FUNCTIONS

	//Status report: check if class is 'working'
	void LogPlayerControllerPossesses() const;
	
	//Error: print error if no Tank is found
	void LogControlledTank() const;

};
