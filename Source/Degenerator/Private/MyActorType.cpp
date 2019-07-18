// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorType.h"

// Sets default values
AMyActorType::AMyActorType()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActorType::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActorType::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

