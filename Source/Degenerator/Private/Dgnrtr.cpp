// Fill out your copyright notice in the Description page of Project Settings.


#include "Dgnrtr.h"
#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <stdio.h>
#include <conio.h>

// Sets default values for this component's properties
UDgnrtr::UDgnrtr()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


FString ERRCHECK(FMOD_RESULT result)
{
	if (result != FMOD_OK)
	{
		return FString(FMOD_ErrorString(result));
	}
	return "INIT OK";
}



void UDgnrtr::Play()
{
	PlayOnce(c, f, v, s);
}

void UDgnrtr::PlayOnce(int Channel, int Frequency, float Volume, EDegeneratorSignal SignalForm)
{ 

	switch (Channel)
	{
	case  1: { channel->setSpeakerMix(1.0f, 0, 0, 0, 0, 0, 0, 0); break; }
	case  2: { channel->setSpeakerMix(0, 1.0f, 0, 0, 0, 0, 0, 0); break; }
	case  3: { channel->setSpeakerMix(0, 0, 1.0f, 0, 0, 0, 0, 0); break; }
	case  4: { channel->setSpeakerMix(0, 0, 0, 1.0f, 0, 0, 0, 0); break; }
	case  5: { channel->setSpeakerMix(0, 0, 0, 0, 1.0f, 0, 0, 0); break; }
	case  6: { channel->setSpeakerMix(0, 0, 0, 0, 0, 1.0f, 0, 0); break; }
	}

	switch (SignalForm)
	{
	 case EDegeneratorSignal::FSIN: {SIGNAL = 0; break; }
	 case EDegeneratorSignal::FSQR: {SIGNAL = 1; break; }
	 case EDegeneratorSignal::FSAW: {SIGNAL = 2; break; }
	 case EDegeneratorSignal::FTRI: {SIGNAL = 4; break; }
	 case EDegeneratorSignal::FNOI: {SIGNAL = 5; break; }
	}



		result = system->playDSP(FMOD_CHANNEL_REUSE, dsp, true, &channel);
		channel->setVolume(Volume);
		result = dsp->setParameter(FMOD_DSP_OSCILLATOR_TYPE, SIGNAL);
		channel->setFrequency(Frequency*100);

		channel->setPaused(false);


		r = ERRCHECK(result);
		system->update();
	
	//	return r;
}

FString UDgnrtr::Init()
{
	result = FMOD::System_Create(&system);
	r = ERRCHECK(result);

	result = system->getVersion(&version);
	r = ERRCHECK(result);

	result = system->getDriverCaps(0, 0, 0, 0, &speakermode);
	r = ERRCHECK(result);

	result = system->setSpeakerMode(speakermode);
	r = ERRCHECK(result);


	result = system->init(32, FMOD_INIT_NORMAL, NULL);
	ERRCHECK(result);

	result = system->createDSPByType(FMOD_DSP_TYPE_OSCILLATOR, &dsp);
	r = ERRCHECK(result);
	result = dsp->setParameter(FMOD_DSP_OSCILLATOR_RATE, 441);       /* musical note 'A' */
	r = ERRCHECK(result);


	return r;
}

FString UDgnrtr::Stop()
{
	result = channel->stop();
	return ERRCHECK(result);
}

FString UDgnrtr::DeInit()
{
	result = dsp->release();
	r = ERRCHECK(result);
	result = system->close();
	ERRCHECK(result);
	result = system->release();
	r = ERRCHECK(result);
	return r;
}

void UDgnrtr::SetSignalForm(EDegeneratorSignal SignalForm)
{
	s = SignalForm;
	switch (s)
	{
	case EDegeneratorSignal::FSIN: {SIGNAL = 0; break; }
	case EDegeneratorSignal::FSQR: {SIGNAL = 1; break; }
	case EDegeneratorSignal::FSAW: {SIGNAL = 2; break; }
	case EDegeneratorSignal::FTRI: {SIGNAL = 4; break; }
	case EDegeneratorSignal::FNOI: {SIGNAL = 5; break; }
	}
	dsp->setParameter(FMOD_DSP_OSCILLATOR_TYPE, SIGNAL);
}

void UDgnrtr::SetFrequency(int Frequency)
{
	f = Frequency * 100;
	channel->setFrequency(f);
}

void UDgnrtr::SetChannel(int Channel)
{
	c = Channel;
	switch (c)
	{
	case  1: { channel->setSpeakerMix(1.0f, 0, 0, 0, 0, 0, 0, 0); break; }
	case  2: { channel->setSpeakerMix(0, 1.0f, 0, 0, 0, 0, 0, 0); break; }
	case  3: { channel->setSpeakerMix(0, 0, 1.0f, 0, 0, 0, 0, 0); break; }
	case  4: { channel->setSpeakerMix(0, 0, 0, 1.0f, 0, 0, 0, 0); break; }
	case  5: { channel->setSpeakerMix(0, 0, 0, 0, 1.0f, 0, 0, 0); break; }
	case  6: { channel->setSpeakerMix(0, 0, 0, 0, 0, 1.0f, 0, 0); break; }
	}
}

void UDgnrtr::SetVolume(float Volume)
{
	v = Volume;
	channel->setVolume(v);
}

// Called when the game starts
void UDgnrtr::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UDgnrtr::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

