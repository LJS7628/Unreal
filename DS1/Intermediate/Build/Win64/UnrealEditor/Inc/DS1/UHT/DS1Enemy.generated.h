// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/DS1Enemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DS1_DS1Enemy_generated_h
#error "DS1Enemy.generated.h already included, missing '#pragma once' in DS1Enemy.h"
#endif
#define DS1_DS1Enemy_generated_h

#define FID_DS1_Source_DS1_Characters_DS1Enemy_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADS1Enemy(); \
	friend struct Z_Construct_UClass_ADS1Enemy_Statics; \
public: \
	DECLARE_CLASS(ADS1Enemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DS1"), NO_API) \
	DECLARE_SERIALIZER(ADS1Enemy) \
	virtual UObject* _getUObject() const override { return const_cast<ADS1Enemy*>(this); }


#define FID_DS1_Source_DS1_Characters_DS1Enemy_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADS1Enemy(ADS1Enemy&&); \
	ADS1Enemy(const ADS1Enemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADS1Enemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADS1Enemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADS1Enemy) \
	NO_API virtual ~ADS1Enemy();


#define FID_DS1_Source_DS1_Characters_DS1Enemy_h_22_PROLOG
#define FID_DS1_Source_DS1_Characters_DS1Enemy_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DS1_Source_DS1_Characters_DS1Enemy_h_25_INCLASS_NO_PURE_DECLS \
	FID_DS1_Source_DS1_Characters_DS1Enemy_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DS1_API UClass* StaticClass<class ADS1Enemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DS1_Source_DS1_Characters_DS1Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
