// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BuildingData.h"
#include "Engine/DataAsset.h"
#include "BuildingsDataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class DOWNTOWN_API UBuildingsDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Info")
		FBuildingData Data;

	
};
