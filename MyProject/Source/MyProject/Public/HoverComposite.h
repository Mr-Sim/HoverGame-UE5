// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Util/ColorConstants.h"
#include "HoverComposite.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MYPROJECT_API UHoverComposite : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHoverComposite();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	float CalculateCompression(float _distance, float _range, bool _invertCompression);
	UFUNCTION(BlueprintCallable)
	void DoRaycast(bool _drawRay, FLinearColor _color);
	UFUNCTION(BlueprintCallable)
	float GetRepultionForce(float _compression);
	UFUNCTION(BlueprintCallable)
	float GetAttractionForce(float _compression);

private:
	float CalculateForce(float _compression, float _previousCompression, float _stiff, float _damp);

public:
	UPROPERTY(EditAnywhere, Meta = (AllowPrivateAccess = true))
	bool bDebugRay;
	UPROPERTY(EditAnywhere, Meta = (AllowPrivateAccess = true))
	float Rep_Range;
	UPROPERTY(VisibleAnywhere, Meta = (AllowPrivateAccess = true))
	float Rep_PreviousCompression;
	UPROPERTY(EditAnywhere, Meta = (AllowPrivateAccess = true))
	float Rep_Damp;
	UPROPERTY(EditAnywhere, Meta = (AllowPrivateAccess = true))
	float Rep_Stiff;
	UPROPERTY(VisibleAnywhere, Meta = (AllowPrivateAccess = true))
	float Rep_Force;
	UPROPERTY(VisibleAnywhere, Meta = (AllowPrivateAccess = true))
	bool bRep_Hit;
	UPROPERTY(EditAnywhere, Meta = (AllowPrivateAccess = true))
	float Attr_Range;
	UPROPERTY(VisibleAnywhere, Meta = (AllowPrivateAccess = true))
	float Attr_PreviousCompression;
	UPROPERTY(EditAnywhere, Meta = (AllowPrivateAccess = true))
	float Attr_Damp;
	UPROPERTY(EditAnywhere, Meta = (AllowPrivateAccess = true))
	float Attr_Stiff;
	UPROPERTY(VisibleAnywhere, Meta = (AllowPrivateAccess = true))
	float Attr_Force;
	UPROPERTY(VisibleAnywhere, Meta = (AllowPrivateAccess = true))
	bool bAttr_Hit;
	UPROPERTY(VisibleAnywhere, Meta = (AllowPrivateAccess = true))
	bool WheelsGrounded;
	UPROPERTY(VisibleAnywhere, Meta = (AllowPrivateAccess = true))
	float Attr_Dist;
	UPROPERTY(VisibleAnywhere, Meta = (AllowPrivateAccess = true))
	float Rep_Dist;
};


