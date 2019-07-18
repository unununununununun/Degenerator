// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "fmodapi/inc/fmod.hpp"
#include "fmodapi/inc/fmod_errors.h"

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Dgnrtr.generated.h"

UENUM (BlueprintType)		//"BlueprintType" is essential to include
enum class EDegeneratorSignal : uint8
{
	FSIN	    UMETA(DisplayName = "Sine"),
	FSAW    	UMETA(DisplayName = "Saw"),
	FTRI     	UMETA(DisplayName = "Triangle"),
	FSQR     	UMETA(DisplayName = "Square"),
	FNOI     	UMETA(DisplayName = "White noise")
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DEGENERATOR_API UDgnrtr : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDgnrtr();

protected:

	// Called when the game starts
	FMOD_SPEAKERMODE  speakermode;
	FMOD::System    *system;
	FMOD::Channel   *channel = 0;
	FMOD::DSP       *dsp = 0;
	FMOD_RESULT      result;
    int       	     SIGNAL = 0;
	int              key = 0;
	unsigned int     version = 0;
	FString r = "NULL";

	int    c = 1;
	int    f = 1;
	float  v = 0.1f;
	EDegeneratorSignal s = EDegeneratorSignal::FSIN;

	UFUNCTION(BlueprintCallable, Category = "Degenerator")
		void Play();

	UFUNCTION(BlueprintCallable, Category = "Degenerator")
	 void PlayOnce(int Channel, int Frequency, float Volume, EDegeneratorSignal SignalForm); // @PlayOnce=Channel to play


	UFUNCTION(BlueprintCallable, Category = "Degenerator")
		FString Init();

	UFUNCTION(BlueprintCallable, Category = "Degenerator")
		FString Stop();


	UFUNCTION(BlueprintCallable, Category = "Degenerator")
		FString DeInit();

	UFUNCTION(BlueprintCallable, Category = "Degenerator")
		void SetSignalForm(EDegeneratorSignal SignalForm);

	UFUNCTION(BlueprintCallable, Category = "Degenerator")
		void SetFrequency(int Frequency);

	UFUNCTION(BlueprintCallable, Category = "Degenerator")
		void SetChannel(int Channel);

	UFUNCTION(BlueprintCallable, Category = "Degenerator")
		void SetVolume(float Volume);


	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
