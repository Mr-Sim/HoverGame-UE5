// Fill out your copyright notice in the Description page of Project Settings.


#include "HoverComposite.h"

#include "AnalyticsEventAttribute.h"
#include "Kismet/BlueprintTypeConversions.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values for this component's properties
UHoverComposite::UHoverComposite()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHoverComposite::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHoverComposite::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

float UHoverComposite::CalculateCompression(float _distance, float _range, bool _invertCompression)
{
	float factor = _invertCompression ? 0 : 1;
	return ((_range * factor)-_distance)/_distance;
}

void UHoverComposite::DoRaycast(bool _drawRay, FLinearColor _color)
{
	auto start = GetComponentLocation();
	auto end = start - (GetUpVector() * Attr_Range);
	TArray<AActor*> actorsToIgnore;
	actorsToIgnore.Add(GetOwner());

	FHitResult hit;
	
	bool bHit = UKismetSystemLibrary::LineTraceSingle(
		GetWorld(),
		start,
		end,
		UEngineTypes::ConvertToTraceType(ECC_Visibility),
		false,
		actorsToIgnore,
		EDrawDebugTrace::ForDuration,
		hit,
		true,
		_color,
		_color,
		0.2f);

	Attr_Dist = hit.Distance;
	Rep_Dist = FMath::Clamp(Attr_Dist, 0.0f, Rep_Range);
}

float UHoverComposite::CalculateForce(float _compression, float _previousCompression, float _stiff, float _damp)
{
	float stiffness = _stiff*_compression;
	float compressionDelta = (_compression - _previousCompression)/GetWorld()->DeltaTimeSeconds;
	float damping = _damp*compressionDelta;
	
	return stiffness + damping;
}

float UHoverComposite::GetAttractionForce(float _compression)
{
	float force = CalculateForce(_compression, Attr_PreviousCompression, Attr_Stiff, Attr_Dist);
	Attr_PreviousCompression = _compression;

	return force;
}
float UHoverComposite::GetRepultionForce(float _compression)
{
	float force = CalculateForce(_compression, Rep_PreviousCompression, Rep_Stiff, Rep_Dist);
	Rep_PreviousCompression = _compression;

	return force;
}

