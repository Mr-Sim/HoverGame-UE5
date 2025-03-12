// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_HoverGroup.h"

// Sets default values for this component's properties
UBP_HoverGroup::UBP_HoverGroup()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UBP_HoverGroup::BeginPlay()
{
	Super::BeginPlay();
	if (AActor* Owner = GetOwner())
	{
		if (UPrimitiveComponent* Primitive = Cast<UPrimitiveComponent>(Owner->GetRootComponent()))
		{
			PrimitiveComponent = Primitive->IsSimulatingPhysics() ? Primitive : nullptr;
		}
	}
}


// Called every frame
void UBP_HoverGroup::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!IsValid(PrimitiveComponent)) return;

	AttrCompression = 0;
	RepCompression = 0;

	for (auto hover : Hovers)
	{
		
	}
}

