// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

UCLASS()
class CPP_W3_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();
	
	// Var for health
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	int32 Health = 20;             // 32bytes = 4bit

	// Func
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void MyFirstEvent();

	UFUNCTION()
		bool MyFirstFunc(bool & x) { return false; };

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
