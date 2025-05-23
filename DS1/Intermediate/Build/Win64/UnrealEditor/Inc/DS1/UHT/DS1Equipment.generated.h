// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Equipments/DS1Equipment.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DS1_DS1Equipment_generated_h
#error "DS1Equipment.generated.h already included, missing '#pragma once' in DS1Equipment.h"
#endif
#define DS1_DS1Equipment_generated_h

#define FID_DS1_Source_DS1_Equipments_DS1Equipment_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADS1Equipment(); \
	friend struct Z_Construct_UClass_ADS1Equipment_Statics; \
public: \
	DECLARE_CLASS(ADS1Equipment, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DS1"), NO_API) \
	DECLARE_SERIALIZER(ADS1Equipment)


#define FID_DS1_Source_DS1_Equipments_DS1Equipment_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADS1Equipment(ADS1Equipment&&); \
	ADS1Equipment(const ADS1Equipment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADS1Equipment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADS1Equipment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADS1Equipment) \
	NO_API virtual ~ADS1Equipment();


#define FID_DS1_Source_DS1_Equipments_DS1Equipment_h_9_PROLOG
#define FID_DS1_Source_DS1_Equipments_DS1Equipment_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DS1_Source_DS1_Equipments_DS1Equipment_h_12_INCLASS_NO_PURE_DECLS \
	FID_DS1_Source_DS1_Equipments_DS1Equipment_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DS1_API UClass* StaticClass<class ADS1Equipment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DS1_Source_DS1_Equipments_DS1Equipment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
