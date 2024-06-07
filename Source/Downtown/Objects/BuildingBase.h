// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuildingBase.generated.h"

UCLASS()
class DOWNTOWN_API ABuildingBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABuildingBase();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components, meta = (AllowPrivateAccess = "true"))
	USceneComponent* DefaultScene;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Components, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* BuildingMesh;
	
};
