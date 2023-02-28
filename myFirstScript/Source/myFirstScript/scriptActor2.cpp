// Fill out your copyright notice in the Description page of Project Settings.


#include "scriptActor2.h"

// Sets default values
AscriptActor2::AscriptActor2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AscriptActor2::BeginPlay()
{
	Super::BeginPlay();
    UE_LOG(LogTemp, Warning, TEXT("Hello n00b!"));
	
}

// Called every frame
void AscriptActor2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

