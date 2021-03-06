// Copyright (c) 2016 WiseDragonStd

#pragma once

#include "PaperFlipbookActor.h"
#include "EffectsActor.generated.h"

/**
 * 
 */
UCLASS()
class KINK_API AEffectsActor : public APaperFlipbookActor
{
	GENERATED_BODY()
	
public:
	AEffectsActor(const FObjectInitializer& ObjectInitializer);

	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION()
	virtual void FinishedPlaying();
};
