// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/DS1EnemyBoss.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DS1_DS1EnemyBoss_generated_h
#error "DS1EnemyBoss.generated.h already included, missing '#pragma once' in DS1EnemyBoss.h"
#endif
#define DS1_DS1EnemyBoss_generated_h

#define FID_DS1_Source_DS1_Characters_DS1EnemyBoss_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADS1EnemyBoss(); \
	friend struct Z_Construct_UClass_ADS1EnemyBoss_Statics; \
public: \
	DECLARE_CLASS(ADS1EnemyBoss, ADS1Enemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DS1"), NO_API) \
	DECLARE_SERIALIZER(ADS1EnemyBoss)


#define FID_DS1_Source_DS1_Characters_DS1EnemyBoss_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADS1EnemyBoss(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADS1EnemyBoss(ADS1EnemyBoss&&); \
	ADS1EnemyBoss(const ADS1EnemyBoss&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADS1EnemyBoss); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADS1EnemyBoss); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADS1EnemyBoss) \
	NO_API virtual ~ADS1EnemyBoss();


#define FID_DS1_Source_DS1_Characters_DS1EnemyBoss_h_14_PROLOG
#define FID_DS1_Source_DS1_Characters_DS1EnemyBoss_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DS1_Source_DS1_Characters_DS1EnemyBoss_h_17_INCLASS_NO_PURE_DECLS \
	FID_DS1_Source_DS1_Characters_DS1EnemyBoss_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DS1_API UClass* StaticClass<class ADS1EnemyBoss>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DS1_Source_DS1_Characters_DS1EnemyBoss_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
