// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/DS1Targeting.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DS1_DS1Targeting_generated_h
#error "DS1Targeting.generated.h already included, missing '#pragma once' in DS1Targeting.h"
#endif
#define DS1_DS1Targeting_generated_h

#define FID_DS1_Source_DS1_Interfaces_DS1Targeting_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDS1Targeting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDS1Targeting(UDS1Targeting&&); \
	UDS1Targeting(const UDS1Targeting&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDS1Targeting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDS1Targeting); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDS1Targeting) \
	NO_API virtual ~UDS1Targeting();


#define FID_DS1_Source_DS1_Interfaces_DS1Targeting_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDS1Targeting(); \
	friend struct Z_Construct_UClass_UDS1Targeting_Statics; \
public: \
	DECLARE_CLASS(UDS1Targeting, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DS1"), NO_API) \
	DECLARE_SERIALIZER(UDS1Targeting)


#define FID_DS1_Source_DS1_Interfaces_DS1Targeting_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_DS1_Source_DS1_Interfaces_DS1Targeting_h_13_GENERATED_UINTERFACE_BODY() \
	FID_DS1_Source_DS1_Interfaces_DS1Targeting_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DS1_Source_DS1_Interfaces_DS1Targeting_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDS1Targeting() {} \
public: \
	typedef UDS1Targeting UClassType; \
	typedef IDS1Targeting ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_DS1_Source_DS1_Interfaces_DS1Targeting_h_10_PROLOG
#define FID_DS1_Source_DS1_Interfaces_DS1Targeting_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DS1_Source_DS1_Interfaces_DS1Targeting_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DS1_API UClass* StaticClass<class UDS1Targeting>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DS1_Source_DS1_Interfaces_DS1Targeting_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
