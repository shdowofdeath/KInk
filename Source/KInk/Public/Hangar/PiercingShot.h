// Copyright (c) 2016 WiseDragonStd

#pragma once

#include "Hangar/PowerUp.h"
#include "PiercingShot.generated.h"

/**
 * 
 */
UCLASS()
class KINK_API APiercingShot : public APowerUp
{
	GENERATED_BODY()
	
public:
	APiercingShot();

	virtual void ActivatePowerUp() override;

	virtual void DeactivatePowerUp() override;
};
