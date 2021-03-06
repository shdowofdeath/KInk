// Copyright (c) 2016 WiseDragonStd

#pragma once

#include "GameFramework/PlayerController.h"
#include "BasePlayerController.generated.h"

/**
 * 
 */


UCLASS()
class KINK_API ABasePlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	ABasePlayerController();

	virtual void BeginPlay() override;

	virtual void SetupInputComponent() override;

	virtual void Tick(float DeltaSeconds) override;

	bool bIsFiring;

	FVector GetCameraLocation();

	FVector GetPlayerLocation();

	void EscPressed();

	void MoveUp(float Value);

	void MoveRight(float Value);

	void ShootPressed();

	void ShootReleased();

	bool SnapToViewFrustum(const FVector& worldPosition, FVector* outSnapped);

	UPROPERTY(BlueprintReadWrite, Category = "Stats")
	int32 FPSCount;

	int8 FPS;

	void ShowFrameRate();
	
};
