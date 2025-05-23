// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Equipments/DS1FistWeapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DS1_DS1FistWeapon_generated_h
#error "DS1FistWeapon.generated.h already included, missing '#pragma once' in DS1FistWeapon.h"
#endif
#define DS1_DS1FistWeapon_generated_h

#define FID_DS1_Source_DS1_Equipments_DS1FistWeapon_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADS1FistWeapon(); \
	friend struct Z_Construct_UClass_ADS1FistWeapon_Statics; \
public: \
	DECLARE_CLASS(ADS1FistWeapon, ADS1Weapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DS1"), NO_API) \
	DECLARE_SERIALIZER(ADS1FistWeapon)


#define FID_DS1_Source_DS1_Equipments_DS1FistWeapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADS1FistWeapon(ADS1FistWeapon&&); \
	ADS1FistWeapon(const ADS1FistWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADS1FistWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADS1FistWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADS1FistWeapon) \
	NO_API virtual ~ADS1FistWeapon();


#define FID_DS1_Source_DS1_Equipments_DS1FistWeapon_h_12_PROLOG
#define FID_DS1_Source_DS1_Equipments_DS1FistWeapon_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DS1_Source_DS1_Equipments_DS1FistWeapon_h_15_INCLASS_NO_PURE_DECLS \
	FID_DS1_Source_DS1_Equipments_DS1FistWeapon_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DS1_API UClass* StaticClass<class ADS1FistWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DS1_Source_DS1_Equipments_DS1FistWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
