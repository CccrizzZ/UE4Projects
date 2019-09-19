// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup.h"

// Sets default values
APickup::APickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}




// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
	
	// FString(mutable)
	// FName
	// FText

	FString myStr = TEXT("HELLOW");


	// log somthing to the outputlog
	UE_LOG(LogTemp, Log, TEXT("Hello Unreal"));
	UE_LOG(LogTemp, Warning, TEXT("Health: %i, %s"), Health, *myStr);
	
	MyFirstEvent();
	bool dummyReturnVar;
	MyFirstFunc(dummyReturnVar);

}

// Called every frame
void APickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// new fstring 
	FString mystr = FString::Printf(TEXT("Health: %i"), Health);

	// output fstring
	GEngine->AddOnScreenDebugMessage(123, 1.0f, FColor::Orange, mystr);




}

