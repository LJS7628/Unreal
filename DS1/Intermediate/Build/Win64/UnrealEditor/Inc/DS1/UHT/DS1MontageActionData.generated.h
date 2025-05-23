// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/DS1MontageActionData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DS1_DS1MontageActionData_generated_h
#error "DS1MontageActionData.generated.h already included, missing '#pragma once' in DS1MontageActionData.h"
#endif
#define DS1_DS1MontageActionData_generated_h

#define FID_DS1_Source_DS1_Data_DS1MontageActionData_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDS1MontageGroup_Statics; \
	DS1_API static class UScriptStruct* StaticStruct();


template<> DS1_API UScriptStruct* StaticStruct<struct FDS1MontageGroup>();

#define FID_DS1_Source_DS1_Data_DS1MontageActionData_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDS1MontageActionData(); \
	friend struct Z_Construct_UClass_UDS1MontageActionData_Statics; \
public: \
	DECLARE_CLASS(UDS1MontageActionData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DS1"), NO_API) \
	DECLARE_SERIALIZER(UDS1MontageActionData)


#define FID_DS1_Source_DS1_Data_DS1MontageActionData_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDS1MontageActionData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDS1MontageActionData(UDS1MontageActionData&&); \
	UDS1MontageActionData(const UDS1MontageActionData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDS1MontageActionData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDS1MontageActionData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDS1MontageActionData) \
	NO_API virtual ~UDS1MontageActionData();


#define FID_DS1_Source_DS1_Data_DS1MontageActionData_h_25_PROLOG
#define FID_DS1_Source_DS1_Data_DS1MontageActionData_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DS1_Source_DS1_Data_DS1MontageActionData_h_28_INCLASS_NO_PURE_DECLS \
	FID_DS1_Source_DS1_Data_DS1MontageActionData_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DS1_API UClass* StaticClass<class UDS1MontageActionData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DS1_Source_DS1_Data_DS1MontageActionData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
