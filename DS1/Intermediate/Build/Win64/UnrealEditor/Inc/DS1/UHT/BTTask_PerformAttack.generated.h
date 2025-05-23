// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Task/BTTask_PerformAttack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DS1_BTTask_PerformAttack_generated_h
#error "BTTask_PerformAttack.generated.h already included, missing '#pragma once' in BTTask_PerformAttack.h"
#endif
#define DS1_BTTask_PerformAttack_generated_h

#define FID_DS1_Source_DS1_AI_Task_BTTask_PerformAttack_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTTask_PerformAttack(); \
	friend struct Z_Construct_UClass_UBTTask_PerformAttack_Statics; \
public: \
	DECLARE_CLASS(UBTTask_PerformAttack, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DS1"), NO_API) \
	DECLARE_SERIALIZER(UBTTask_PerformAttack)


#define FID_DS1_Source_DS1_AI_Task_BTTask_PerformAttack_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTTask_PerformAttack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTTask_PerformAttack(UBTTask_PerformAttack&&); \
	UBTTask_PerformAttack(const UBTTask_PerformAttack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_PerformAttack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_PerformAttack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_PerformAttack) \
	NO_API virtual ~UBTTask_PerformAttack();


#define FID_DS1_Source_DS1_AI_Task_BTTask_PerformAttack_h_12_PROLOG
#define FID_DS1_Source_DS1_AI_Task_BTTask_PerformAttack_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DS1_Source_DS1_AI_Task_BTTask_PerformAttack_h_15_INCLASS_NO_PURE_DECLS \
	FID_DS1_Source_DS1_AI_Task_BTTask_PerformAttack_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DS1_API UClass* StaticClass<class UBTTask_PerformAttack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DS1_Source_DS1_AI_Task_BTTask_PerformAttack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
