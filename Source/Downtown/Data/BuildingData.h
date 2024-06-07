#pragma once

#include "CoreMinimal.h"
#include "Downtown/Objects/BuildingBase.h"
#include "BuildingData.generated.h"

USTRUCT(BlueprintType)
struct FBuildingData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Name;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UTexture2D* Icon;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftClassPtr<ABuildingBase> BuildingClass;
};
