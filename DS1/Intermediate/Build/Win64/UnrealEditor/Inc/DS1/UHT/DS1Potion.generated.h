// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/DS1Potion.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DS1_DS1Potion_generated_h
#error "DS1Potion.generated.h already included, missing '#pragma once' in DS1Potion.h"
#endif
#define DS1_DS1Potion_generated_h

#define FID_DS1_Source_DS1_Items_DS1Potion_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADS1Potion(); \
	friend struct Z_Construct_UClass_ADS1Potion_Statics; \
public: \
	DECLARE_CLASS(ADS1Potion, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DS1"), NO_API) \
	DECLARE_SERIALIZER(ADS1Potion)


#define FID_DS1_Source_DS1_Items_DS1Potion_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADS1Potion(ADS1Potion&&); \
	ADS1Potion(const ADS1Potion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADS1Potion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADS1Potion); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADS1Potion) \
	NO_API virtual ~ADS1Potion();


#define FID_DS1_Source_DS1_Items_DS1Potion_h_9_PROLOG
#define FID_DS1_Source_DS1_Items_DS1Potion_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DS1_Source_DS1_Items_DS1Potion_h_12_INCLASS_NO_PURE_DECLS \
	FID_DS1_Source_DS1_Items_DS1Potion_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DS1_API UClass* StaticClass<class ADS1Potion>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DS1_Source_DS1_Items_DS1Potion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
