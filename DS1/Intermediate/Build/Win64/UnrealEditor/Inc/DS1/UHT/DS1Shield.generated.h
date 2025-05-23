// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Equipments/DS1Shield.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DS1_DS1Shield_generated_h
#error "DS1Shield.generated.h already included, missing '#pragma once' in DS1Shield.h"
#endif
#define DS1_DS1Shield_generated_h

#define FID_DS1_Source_DS1_Equipments_DS1Shield_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADS1Shield(); \
	friend struct Z_Construct_UClass_ADS1Shield_Statics; \
public: \
	DECLARE_CLASS(ADS1Shield, ADS1Equipment, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DS1"), NO_API) \
	DECLARE_SERIALIZER(ADS1Shield)


#define FID_DS1_Source_DS1_Equipments_DS1Shield_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADS1Shield(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADS1Shield(ADS1Shield&&); \
	ADS1Shield(const ADS1Shield&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADS1Shield); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADS1Shield); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADS1Shield) \
	NO_API virtual ~ADS1Shield();


#define FID_DS1_Source_DS1_Equipments_DS1Shield_h_12_PROLOG
#define FID_DS1_Source_DS1_Equipments_DS1Shield_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DS1_Source_DS1_Equipments_DS1Shield_h_15_INCLASS_NO_PURE_DECLS \
	FID_DS1_Source_DS1_Equipments_DS1Shield_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DS1_API UClass* StaticClass<class ADS1Shield>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DS1_Source_DS1_Equipments_DS1Shield_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
