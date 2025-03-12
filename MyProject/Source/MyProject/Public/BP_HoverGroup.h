// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BP_HoverGroup.generated.h"


class UHoverComposite;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT_API UBP_HoverGroup : public UActorComponent
{
	GENERATED_BODY()


	
public:	
	// Sets default values for this component's properties
	UBP_HoverGroup();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


private:

	UPROPERTY()
	UPrimitiveComponent* PrimitiveComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float AttrCompression;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float RepCompression;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TArray<UHoverComposite*> Hovers;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	bool bDebugRay;
	
	UPROPERTY(EditAnywhere, Meta = (AllowPrivateAccess = true))
	float HoverHeightModifier = 200.f;
	UPROPERTY(EditAnywhere, Meta = (AllowPrivateAccess = true))
	float HoverAttrHeightModifier;
	UPROPERTY(EditAnywhere, Meta = (AllowPrivateAccess = true))
	float DampingModifier = 300000.f;
	UPROPERTY(EditAnywhere, Meta = (AllowPrivateAccess = true))
	float StiffnessModifier = 3000000.f;
	UPROPERTY(EditAnywhere, Meta = (AllowPrivateAccess = true))
	float AttrDampModifier = 300000.f;
	UPROPERTY(EditAnywhere, Meta = (AllowPrivateAccess = true))
	float AttrStiffnessModifier = 5000000.f;
};
