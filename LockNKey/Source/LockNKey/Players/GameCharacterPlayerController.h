// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameCharacterPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class LOCKNKEY_API AGameCharacterPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:

	// Called to bind functionality to input
	virtual void SetupInputComponent();
	
	
};
