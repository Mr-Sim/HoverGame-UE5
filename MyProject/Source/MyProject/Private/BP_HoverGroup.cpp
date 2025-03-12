// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_HoverGroup.h"

#include "HoverComposite.h"
#include "GeometryCollection/Facades/CollectionPositionTargetFacade.h"
#include "Kismet/GameplayStatics.h"

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

	TArray<UHoverComposite*> FoundComponents;
	GetOwner()->GetComponents<UHoverComposite>(FoundComponents);
	
	for (UHoverComposite* Hover : FoundComponents)
		if (Hover)
			Hovers.Add(Hover);
		
	
	
	for (auto hover : Hovers)
	{
		hover->Rep_Range += HoverHeightModifier;
		hover->Attr_Range += HoverHeightModifier + HoverAttrHeightModifier;

		hover->Rep_Damp += DampingModifier;
		hover->Attr_Damp += AttrDampModifier;

		hover->Rep_Stiff += StiffnessModifier;
		hover->Attr_Stiff += AttrStiffnessModifier;
	}
}


// Called every frame
void UBP_HoverGroup::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!IsValid(PrimitiveComponent)) return;

	AttrCompression = 0;
	RepCompression = 0;

	// Compute average compression
	for (auto hover : Hovers)
	{
		hover->DoRaycast(bDebugRay, FLinearColor::Blue);
		AttrCompression += hover->CalculateCompression(hover->Attr_Dist, hover->Attr_Range, true);
		RepCompression  += hover->CalculateCompression(hover->Rep_Dist, hover->Rep_Range, false);
	}
	AttrCompression /= Hovers.Num();
	RepCompression /= Hovers.Num();

	// Apply forces
	for (auto hover : Hovers)
	{
		auto location = hover->GetComponentLocation();
		auto vector = hover->GetUpVector();

		float force = hover->GetAttractionForce(AttrCompression);
		PrimitiveComponent->AddForceAtLocation(force*vector, location);

		force = hover->GetRepultionForce(RepCompression);
		PrimitiveComponent->AddForceAtLocation(force*vector, location);
	}
}

