// Copyright (c) 2016 WiseDragonStd

#pragma once

#include "GameFramework/SaveGame.h"
#include "StaticLibrary.h"
#include "CustomSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class KINK_API UCustomSaveGame : public USaveGame
{
	GENERATED_BODY()


public:

	UPROPERTY(VisibleAnywhere, Category = Basic)
	FString PlayerName;

	UCustomSaveGame(const FObjectInitializer& ObjectInitializer);
};
