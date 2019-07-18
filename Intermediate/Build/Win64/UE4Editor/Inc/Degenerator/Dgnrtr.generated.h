// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDegeneratorSignal : uint8;
#ifdef DEGENERATOR_Dgnrtr_generated_h
#error "Dgnrtr.generated.h already included, missing '#pragma once' in Dgnrtr.h"
#endif
#define DEGENERATOR_Dgnrtr_generated_h

#define MyProjectFMOD1_Plugins_Degenerator_Source_Degenerator_Public_Dgnrtr_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVolume(Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetChannel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetChannel(Z_Param_Channel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFrequency) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Frequency); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFrequency(Z_Param_Frequency); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSignalForm) \
	{ \
		P_GET_ENUM(EDegeneratorSignal,Z_Param_SignalForm); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSignalForm(EDegeneratorSignal(Z_Param_SignalForm)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeInit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->DeInit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->Init(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayOnce) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Channel); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Frequency); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_GET_ENUM(EDegeneratorSignal,Z_Param_SignalForm); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayOnce(Z_Param_Channel,Z_Param_Frequency,Z_Param_Volume,EDegeneratorSignal(Z_Param_SignalForm)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Play(); \
		P_NATIVE_END; \
	}


#define MyProjectFMOD1_Plugins_Degenerator_Source_Degenerator_Public_Dgnrtr_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVolume(Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetChannel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Channel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetChannel(Z_Param_Channel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFrequency) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Frequency); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFrequency(Z_Param_Frequency); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSignalForm) \
	{ \
		P_GET_ENUM(EDegeneratorSignal,Z_Param_SignalForm); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSignalForm(EDegeneratorSignal(Z_Param_SignalForm)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeInit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->DeInit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->Init(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayOnce) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Channel); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Frequency); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_GET_ENUM(EDegeneratorSignal,Z_Param_SignalForm); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayOnce(Z_Param_Channel,Z_Param_Frequency,Z_Param_Volume,EDegeneratorSignal(Z_Param_SignalForm)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Play(); \
		P_NATIVE_END; \
	}


#define MyProjectFMOD1_Plugins_Degenerator_Source_Degenerator_Public_Dgnrtr_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDgnrtr(); \
	friend struct Z_Construct_UClass_UDgnrtr_Statics; \
public: \
	DECLARE_CLASS(UDgnrtr, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Degenerator"), NO_API) \
	DECLARE_SERIALIZER(UDgnrtr)


#define MyProjectFMOD1_Plugins_Degenerator_Source_Degenerator_Public_Dgnrtr_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUDgnrtr(); \
	friend struct Z_Construct_UClass_UDgnrtr_Statics; \
public: \
	DECLARE_CLASS(UDgnrtr, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Degenerator"), NO_API) \
	DECLARE_SERIALIZER(UDgnrtr)


#define MyProjectFMOD1_Plugins_Degenerator_Source_Degenerator_Public_Dgnrtr_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDgnrtr(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDgnrtr) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDgnrtr); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDgnrtr); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDgnrtr(UDgnrtr&&); \
	NO_API UDgnrtr(const UDgnrtr&); \
public:


#define MyProjectFMOD1_Plugins_Degenerator_Source_Degenerator_Public_Dgnrtr_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDgnrtr(UDgnrtr&&); \
	NO_API UDgnrtr(const UDgnrtr&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDgnrtr); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDgnrtr); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDgnrtr)


#define MyProjectFMOD1_Plugins_Degenerator_Source_Degenerator_Public_Dgnrtr_h_26_PRIVATE_PROPERTY_OFFSET
#define MyProjectFMOD1_Plugins_Degenerator_Source_Degenerator_Public_Dgnrtr_h_23_PROLOG
#define MyProjectFMOD1_Plugins_Degenerator_Source_Degenerator_Public_Dgnrtr_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectFMOD1_Plugins_Degenerator_Source_Degenerator_Public_Dgnrtr_h_26_PRIVATE_PROPERTY_OFFSET \
	MyProjectFMOD1_Plugins_Degenerator_Source_Degenerator_Public_Dgnrtr_h_26_RPC_WRAPPERS \
	MyProjectFMOD1_Plugins_Degenerator_Source_Degenerator_Public_Dgnrtr_h_26_INCLASS \
	MyProjectFMOD1_Plugins_Degenerator_Source_Degenerator_Public_Dgnrtr_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectFMOD1_Plugins_Degenerator_Source_Degenerator_Public_Dgnrtr_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectFMOD1_Plugins_Degenerator_Source_Degenerator_Public_Dgnrtr_h_26_PRIVATE_PROPERTY_OFFSET \
	MyProjectFMOD1_Plugins_Degenerator_Source_Degenerator_Public_Dgnrtr_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectFMOD1_Plugins_Degenerator_Source_Degenerator_Public_Dgnrtr_h_26_INCLASS_NO_PURE_DECLS \
	MyProjectFMOD1_Plugins_Degenerator_Source_Degenerator_Public_Dgnrtr_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEGENERATOR_API UClass* StaticClass<class UDgnrtr>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectFMOD1_Plugins_Degenerator_Source_Degenerator_Public_Dgnrtr_h


#define FOREACH_ENUM_EDEGENERATORSIGNAL(op) \
	op(EDegeneratorSignal::FSIN) \
	op(EDegeneratorSignal::FSAW) \
	op(EDegeneratorSignal::FTRI) \
	op(EDegeneratorSignal::FSQR) \
	op(EDegeneratorSignal::FNOI) 

enum class EDegeneratorSignal : uint8;
template<> DEGENERATOR_API UEnum* StaticEnum<EDegeneratorSignal>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
