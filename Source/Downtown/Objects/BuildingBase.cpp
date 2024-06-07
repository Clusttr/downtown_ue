// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildingBase.h"


// Sets default values
ABuildingBase::ABuildingBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DefaultScene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	DefaultScene->SetupAttachment(RootComponent);
	
	BuildingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BuildingMesh"));
	BuildingMesh->SetupAttachment(DefaultScene);
}


