// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Task/BTTask_FindPatrolPoint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DS1_BTTask_FindPatrolPoint_generated_h
#error "BTTask_FindPatrolPoint.generated.h already included, missing '#pragma once' in BTTask_FindPatrolPoint.h"
#endif
#define DS1_BTTask_FindPatrolPoint_generated_h

#define FID_DS1_Source_DS1_AI_Task_BTTask_FindPatrolPoint_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTTask_FindPatrolPoint(); \
	friend struct Z_Construct_UClass_UBTTask_FindPatrolPoint_Statics; \
public: \
	DECLARE_CLASS(UBTTask_FindPatrolPoint, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DS1"), NO_API) \
	DECLARE_SERIALIZER(UBTTask_FindPatrolPoint)


#define FID_DS1_Source_DS1_AI_Task_BTTask_FindPatrolPoint_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTTask_FindPatrolPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTTask_FindPatrolPoint(UBTTask_FindPatrolPoint&&); \
	UBTTask_FindPatrolPoint(const UBTTask_FindPatrolPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_FindPatrolPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_FindPatrolPoint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_FindPatrolPoint) \
	NO_API virtual ~UBTTask_FindPatrolPoint();


#define FID_DS1_Source_DS1_AI_Task_BTTask_FindPatrolPoint_h_8_PROLOG
#define FID_DS1_Source_DS1_AI_Task_BTTask_FindPatrolPoint_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DS1_Source_DS1_AI_Task_BTTask_FindPatrolPoint_h_11_INCLASS_NO_PURE_DECLS \
	FID_DS1_Source_DS1_AI_Task_BTTask_FindPatrolPoint_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DS1_API UClass* StaticClass<class UBTTask_FindPatrolPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DS1_Source_DS1_AI_Task_BTTask_FindPatrolPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
