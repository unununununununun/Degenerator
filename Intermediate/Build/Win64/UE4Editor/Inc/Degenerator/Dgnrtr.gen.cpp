// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Degenerator/Public/Dgnrtr.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDgnrtr() {}
// Cross Module References
	DEGENERATOR_API UEnum* Z_Construct_UEnum_Degenerator_EDegeneratorSignal();
	UPackage* Z_Construct_UPackage__Script_Degenerator();
	DEGENERATOR_API UClass* Z_Construct_UClass_UDgnrtr_NoRegister();
	DEGENERATOR_API UClass* Z_Construct_UClass_UDgnrtr();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	DEGENERATOR_API UFunction* Z_Construct_UFunction_UDgnrtr_DeInit();
	DEGENERATOR_API UFunction* Z_Construct_UFunction_UDgnrtr_Init();
	DEGENERATOR_API UFunction* Z_Construct_UFunction_UDgnrtr_Play();
	DEGENERATOR_API UFunction* Z_Construct_UFunction_UDgnrtr_PlayOnce();
	DEGENERATOR_API UFunction* Z_Construct_UFunction_UDgnrtr_SetChannel();
	DEGENERATOR_API UFunction* Z_Construct_UFunction_UDgnrtr_SetFrequency();
	DEGENERATOR_API UFunction* Z_Construct_UFunction_UDgnrtr_SetSignalForm();
	DEGENERATOR_API UFunction* Z_Construct_UFunction_UDgnrtr_SetVolume();
	DEGENERATOR_API UFunction* Z_Construct_UFunction_UDgnrtr_Stop();
// End Cross Module References
	static UEnum* EDegeneratorSignal_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Degenerator_EDegeneratorSignal, Z_Construct_UPackage__Script_Degenerator(), TEXT("EDegeneratorSignal"));
		}
		return Singleton;
	}
	template<> DEGENERATOR_API UEnum* StaticEnum<EDegeneratorSignal>()
	{
		return EDegeneratorSignal_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDegeneratorSignal(EDegeneratorSignal_StaticEnum, TEXT("/Script/Degenerator"), TEXT("EDegeneratorSignal"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Degenerator_EDegeneratorSignal_Hash() { return 1769320705U; }
	UEnum* Z_Construct_UEnum_Degenerator_EDegeneratorSignal()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Degenerator();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDegeneratorSignal"), 0, Get_Z_Construct_UEnum_Degenerator_EDegeneratorSignal_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDegeneratorSignal::FSIN", (int64)EDegeneratorSignal::FSIN },
				{ "EDegeneratorSignal::FSAW", (int64)EDegeneratorSignal::FSAW },
				{ "EDegeneratorSignal::FTRI", (int64)EDegeneratorSignal::FTRI },
				{ "EDegeneratorSignal::FSQR", (int64)EDegeneratorSignal::FSQR },
				{ "EDegeneratorSignal::FNOI", (int64)EDegeneratorSignal::FNOI },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FNOI.DisplayName", "White noise" },
				{ "FSAW.DisplayName", "Saw" },
				{ "FSIN.DisplayName", "Sine" },
				{ "FSQR.DisplayName", "Square" },
				{ "FTRI.DisplayName", "Triangle" },
				{ "ModuleRelativePath", "Public/Dgnrtr.h" },
				{ "ToolTip", "\"BlueprintType\" is essential to include" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Degenerator,
				nullptr,
				"EDegeneratorSignal",
				"EDegeneratorSignal",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UDgnrtr::StaticRegisterNativesUDgnrtr()
	{
		UClass* Class = UDgnrtr::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeInit", &UDgnrtr::execDeInit },
			{ "Init", &UDgnrtr::execInit },
			{ "Play", &UDgnrtr::execPlay },
			{ "PlayOnce", &UDgnrtr::execPlayOnce },
			{ "SetChannel", &UDgnrtr::execSetChannel },
			{ "SetFrequency", &UDgnrtr::execSetFrequency },
			{ "SetSignalForm", &UDgnrtr::execSetSignalForm },
			{ "SetVolume", &UDgnrtr::execSetVolume },
			{ "Stop", &UDgnrtr::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDgnrtr_DeInit_Statics
	{
		struct Dgnrtr_eventDeInit_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDgnrtr_DeInit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dgnrtr_eventDeInit_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgnrtr_DeInit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgnrtr_DeInit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDgnrtr_DeInit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Degenerator" },
		{ "ModuleRelativePath", "Public/Dgnrtr.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgnrtr_DeInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgnrtr, nullptr, "DeInit", sizeof(Dgnrtr_eventDeInit_Parms), Z_Construct_UFunction_UDgnrtr_DeInit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDgnrtr_DeInit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDgnrtr_DeInit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDgnrtr_DeInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDgnrtr_DeInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDgnrtr_DeInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDgnrtr_Init_Statics
	{
		struct Dgnrtr_eventInit_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDgnrtr_Init_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dgnrtr_eventInit_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgnrtr_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgnrtr_Init_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDgnrtr_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Degenerator" },
		{ "ModuleRelativePath", "Public/Dgnrtr.h" },
		{ "ToolTip", "@PlayOnce=Channel to play" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgnrtr_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgnrtr, nullptr, "Init", sizeof(Dgnrtr_eventInit_Parms), Z_Construct_UFunction_UDgnrtr_Init_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDgnrtr_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDgnrtr_Init_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDgnrtr_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDgnrtr_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDgnrtr_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDgnrtr_Play_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDgnrtr_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Degenerator" },
		{ "ModuleRelativePath", "Public/Dgnrtr.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgnrtr_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgnrtr, nullptr, "Play", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDgnrtr_Play_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDgnrtr_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDgnrtr_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDgnrtr_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDgnrtr_PlayOnce_Statics
	{
		struct Dgnrtr_eventPlayOnce_Parms
		{
			int32 Channel;
			int32 Frequency;
			float Volume;
			EDegeneratorSignal SignalForm;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SignalForm;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SignalForm_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Frequency;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Channel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDgnrtr_PlayOnce_Statics::NewProp_SignalForm = { "SignalForm", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dgnrtr_eventPlayOnce_Parms, SignalForm), Z_Construct_UEnum_Degenerator_EDegeneratorSignal, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDgnrtr_PlayOnce_Statics::NewProp_SignalForm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDgnrtr_PlayOnce_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dgnrtr_eventPlayOnce_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDgnrtr_PlayOnce_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dgnrtr_eventPlayOnce_Parms, Frequency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDgnrtr_PlayOnce_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dgnrtr_eventPlayOnce_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgnrtr_PlayOnce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgnrtr_PlayOnce_Statics::NewProp_SignalForm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgnrtr_PlayOnce_Statics::NewProp_SignalForm_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgnrtr_PlayOnce_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgnrtr_PlayOnce_Statics::NewProp_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgnrtr_PlayOnce_Statics::NewProp_Channel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDgnrtr_PlayOnce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Degenerator" },
		{ "ModuleRelativePath", "Public/Dgnrtr.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgnrtr_PlayOnce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgnrtr, nullptr, "PlayOnce", sizeof(Dgnrtr_eventPlayOnce_Parms), Z_Construct_UFunction_UDgnrtr_PlayOnce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDgnrtr_PlayOnce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDgnrtr_PlayOnce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDgnrtr_PlayOnce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDgnrtr_PlayOnce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDgnrtr_PlayOnce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDgnrtr_SetChannel_Statics
	{
		struct Dgnrtr_eventSetChannel_Parms
		{
			int32 Channel;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Channel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDgnrtr_SetChannel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dgnrtr_eventSetChannel_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgnrtr_SetChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgnrtr_SetChannel_Statics::NewProp_Channel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDgnrtr_SetChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Degenerator" },
		{ "ModuleRelativePath", "Public/Dgnrtr.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgnrtr_SetChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgnrtr, nullptr, "SetChannel", sizeof(Dgnrtr_eventSetChannel_Parms), Z_Construct_UFunction_UDgnrtr_SetChannel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDgnrtr_SetChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDgnrtr_SetChannel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDgnrtr_SetChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDgnrtr_SetChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDgnrtr_SetChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDgnrtr_SetFrequency_Statics
	{
		struct Dgnrtr_eventSetFrequency_Parms
		{
			int32 Frequency;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Frequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDgnrtr_SetFrequency_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dgnrtr_eventSetFrequency_Parms, Frequency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgnrtr_SetFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgnrtr_SetFrequency_Statics::NewProp_Frequency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDgnrtr_SetFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Degenerator" },
		{ "ModuleRelativePath", "Public/Dgnrtr.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgnrtr_SetFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgnrtr, nullptr, "SetFrequency", sizeof(Dgnrtr_eventSetFrequency_Parms), Z_Construct_UFunction_UDgnrtr_SetFrequency_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDgnrtr_SetFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDgnrtr_SetFrequency_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDgnrtr_SetFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDgnrtr_SetFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDgnrtr_SetFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDgnrtr_SetSignalForm_Statics
	{
		struct Dgnrtr_eventSetSignalForm_Parms
		{
			EDegeneratorSignal SignalForm;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SignalForm;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SignalForm_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDgnrtr_SetSignalForm_Statics::NewProp_SignalForm = { "SignalForm", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dgnrtr_eventSetSignalForm_Parms, SignalForm), Z_Construct_UEnum_Degenerator_EDegeneratorSignal, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDgnrtr_SetSignalForm_Statics::NewProp_SignalForm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgnrtr_SetSignalForm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgnrtr_SetSignalForm_Statics::NewProp_SignalForm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgnrtr_SetSignalForm_Statics::NewProp_SignalForm_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDgnrtr_SetSignalForm_Statics::Function_MetaDataParams[] = {
		{ "Category", "Degenerator" },
		{ "ModuleRelativePath", "Public/Dgnrtr.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgnrtr_SetSignalForm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgnrtr, nullptr, "SetSignalForm", sizeof(Dgnrtr_eventSetSignalForm_Parms), Z_Construct_UFunction_UDgnrtr_SetSignalForm_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDgnrtr_SetSignalForm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDgnrtr_SetSignalForm_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDgnrtr_SetSignalForm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDgnrtr_SetSignalForm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDgnrtr_SetSignalForm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDgnrtr_SetVolume_Statics
	{
		struct Dgnrtr_eventSetVolume_Parms
		{
			float Volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDgnrtr_SetVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dgnrtr_eventSetVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgnrtr_SetVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgnrtr_SetVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDgnrtr_SetVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Degenerator" },
		{ "ModuleRelativePath", "Public/Dgnrtr.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgnrtr_SetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgnrtr, nullptr, "SetVolume", sizeof(Dgnrtr_eventSetVolume_Parms), Z_Construct_UFunction_UDgnrtr_SetVolume_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDgnrtr_SetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDgnrtr_SetVolume_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDgnrtr_SetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDgnrtr_SetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDgnrtr_SetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDgnrtr_Stop_Statics
	{
		struct Dgnrtr_eventStop_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDgnrtr_Stop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Dgnrtr_eventStop_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDgnrtr_Stop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDgnrtr_Stop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDgnrtr_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Degenerator" },
		{ "ModuleRelativePath", "Public/Dgnrtr.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDgnrtr_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDgnrtr, nullptr, "Stop", sizeof(Dgnrtr_eventStop_Parms), Z_Construct_UFunction_UDgnrtr_Stop_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDgnrtr_Stop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDgnrtr_Stop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDgnrtr_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDgnrtr_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDgnrtr_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDgnrtr_NoRegister()
	{
		return UDgnrtr::StaticClass();
	}
	struct Z_Construct_UClass_UDgnrtr_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDgnrtr_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Degenerator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDgnrtr_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDgnrtr_DeInit, "DeInit" }, // 492337687
		{ &Z_Construct_UFunction_UDgnrtr_Init, "Init" }, // 4222373044
		{ &Z_Construct_UFunction_UDgnrtr_Play, "Play" }, // 3018766403
		{ &Z_Construct_UFunction_UDgnrtr_PlayOnce, "PlayOnce" }, // 159600598
		{ &Z_Construct_UFunction_UDgnrtr_SetChannel, "SetChannel" }, // 2815568623
		{ &Z_Construct_UFunction_UDgnrtr_SetFrequency, "SetFrequency" }, // 956954707
		{ &Z_Construct_UFunction_UDgnrtr_SetSignalForm, "SetSignalForm" }, // 252438478
		{ &Z_Construct_UFunction_UDgnrtr_SetVolume, "SetVolume" }, // 3458704015
		{ &Z_Construct_UFunction_UDgnrtr_Stop, "Stop" }, // 4117471604
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDgnrtr_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Dgnrtr.h" },
		{ "ModuleRelativePath", "Public/Dgnrtr.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDgnrtr_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDgnrtr>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDgnrtr_Statics::ClassParams = {
		&UDgnrtr::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDgnrtr_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDgnrtr_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDgnrtr()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDgnrtr_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDgnrtr, 501926459);
	template<> DEGENERATOR_API UClass* StaticClass<UDgnrtr>()
	{
		return UDgnrtr::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDgnrtr(Z_Construct_UClass_UDgnrtr, &UDgnrtr::StaticClass, TEXT("/Script/Degenerator"), TEXT("UDgnrtr"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDgnrtr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
