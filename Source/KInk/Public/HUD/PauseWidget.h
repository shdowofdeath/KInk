// Copyright (c) 2016 WiseDragonStd

#pragma once

#include "HUD/BaseWidget.h"
#include "PauseWidget.generated.h"

/**
 * 
 */
UCLASS()
class KINK_API UPauseWidget : public UBaseWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = HUDEvents)
	void ReturnToMainMenu();
	
	
};
