// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Equipments/DS1Armour.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DS1_DS1Armour_generated_h
#error "DS1Armour.generated.h already included, missing '#pragma once' in DS1Armour.h"
#endif
#define DS1_DS1Armour_generated_h

#define FID_DS1_Source_DS1_Equipments_DS1Armour_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADS1Armour(); \
	friend struct Z_Construct_UClass_ADS1Armour_Statics; \
public: \
	DECLARE_CLASS(ADS1Armour, ADS1Equipment, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DS1"), NO_API) \
	DECLARE_SERIALIZER(ADS1Armour)


#define FID_DS1_Source_DS1_Equipments_DS1Armour_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADS1Armour(ADS1Armour&&); \
	ADS1Armour(const ADS1Armour&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADS1Armour); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADS1Armour); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADS1Armour) \
	NO_API virtual ~ADS1Armour();


#define FID_DS1_Source_DS1_Equipments_DS1Armour_h_14_PROLOG
#define FID_DS1_Source_DS1_Equipments_DS1Armour_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DS1_Source_DS1_Equipments_DS1Armour_h_17_INCLASS_NO_PURE_DECLS \
	FID_DS1_Source_DS1_Equipments_DS1Armour_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DS1_API UClass* StaticClass<class ADS1Armour>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DS1_Source_DS1_Equipments_DS1Armour_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
