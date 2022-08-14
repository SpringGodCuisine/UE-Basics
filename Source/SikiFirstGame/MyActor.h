// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class SIKIFIRSTGAME_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

	UPROPERTY(VisibleAnywhere, Category = "My Actor Components")
	UStaticMeshComponent* MyStaticMesh;
	
	//只允许在实例上进行编辑
	UPROPERTY(EditInstanceOnly, Category = "My Actor Properties | Vector")
	FVector InitLocation;

	UPROPERTY(VisibleInstanceOnly, Category = "My Actor Properties | Vector")
	FVector PlacedLocation;

	UPROPERTY(EditDefaultsOnly, Category = "My Actor Properties | Bool")
	bool bGotoIninLocation;

	UPROPERTY(VisibleDefaultsOnly, Category = "My Actor Properties | Vector")
	FVector WorldOrigin;

	UPROPERTY(EditAnywhere, Category = "My Actor Properties | Vector")
	FVector TickLocationOffset;
	
	UPROPERTY(EditAnywhere, Category = "My Actor Properties | Vector")
	bool bShouldMove;

	UPROPERTY(EditInstanceOnly, Category = "My Actor Properties | Physics")
	FVector InitForce;

	UPROPERTY(EditInstanceOnly, Category = "My Actor Properties | Physics")
	FVector InitTorque;

	UPROPERTY(EditInstanceOnly, Category = "My Actor Properties | Physics")
	bool bAccelChange;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
