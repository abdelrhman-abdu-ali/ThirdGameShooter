// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BulletHitnterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBulletHitnterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class THIRDGAMESHOOTERCPP_API IBulletHitnterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void BulletHit(FHitResult HitResult, AActor* Shooter, AController* ShooterControler);
};
