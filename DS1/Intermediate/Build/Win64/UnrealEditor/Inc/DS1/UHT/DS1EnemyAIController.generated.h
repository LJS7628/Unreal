// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/DS1EnemyAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DS1_DS1EnemyAIController_generated_h
#error "DS1EnemyAIController.generated.h already included, missing '#pragma once' in DS1EnemyAIController.h"
#endif
#define DS1_DS1EnemyAIController_generated_h

#define FID_DS1_Source_DS1_AI_DS1EnemyAIController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADS1EnemyAIController(); \
	friend struct Z_Construct_UClass_ADS1EnemyAIController_Statics; \
public: \
	DECLARE_CLASS(ADS1EnemyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DS1"), NO_API) \
	DECLARE_SERIALIZER(ADS1EnemyAIController)


#define FID_DS1_Source_DS1_AI_DS1EnemyAIController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADS1EnemyAIController(ADS1EnemyAIController&&); \
	ADS1EnemyAIController(const ADS1EnemyAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADS1EnemyAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADS1EnemyAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADS1EnemyAIController) \
	NO_API virtual ~ADS1EnemyAIController();


#define FID_DS1_Source_DS1_AI_DS1EnemyAIController_h_15_PROLOG
#define FID_DS1_Source_DS1_AI_DS1EnemyAIController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DS1_Source_DS1_AI_DS1EnemyAIController_h_18_INCLASS_NO_PURE_DECLS \
	FID_DS1_Source_DS1_AI_DS1EnemyAIController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DS1_API UClass* StaticClass<class ADS1EnemyAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DS1_Source_DS1_AI_DS1EnemyAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
