// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Equipments/DS1Weapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DS1_DS1Weapon_generated_h
#error "DS1Weapon.generated.h already included, missing '#pragma once' in DS1Weapon.h"
#endif
#define DS1_DS1Weapon_generated_h

#define FID_DS1_Source_DS1_Equipments_DS1Weapon_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADS1Weapon(); \
	friend struct Z_Construct_UClass_ADS1Weapon_Statics; \
public: \
	DECLARE_CLASS(ADS1Weapon, ADS1Equipment, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DS1"), NO_API) \
	DECLARE_SERIALIZER(ADS1Weapon)


#define FID_DS1_Source_DS1_Equipments_DS1Weapon_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADS1Weapon(ADS1Weapon&&); \
	ADS1Weapon(const ADS1Weapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADS1Weapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADS1Weapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADS1Weapon) \
	NO_API virtual ~ADS1Weapon();


#define FID_DS1_Source_DS1_Equipments_DS1Weapon_h_18_PROLOG
#define FID_DS1_Source_DS1_Equipments_DS1Weapon_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DS1_Source_DS1_Equipments_DS1Weapon_h_21_INCLASS_NO_PURE_DECLS \
	FID_DS1_Source_DS1_Equipments_DS1Weapon_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DS1_API UClass* StaticClass<class ADS1Weapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DS1_Source_DS1_Equipments_DS1Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
