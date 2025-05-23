// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/DS1Interact.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DS1_DS1Interact_generated_h
#error "DS1Interact.generated.h already included, missing '#pragma once' in DS1Interact.h"
#endif
#define DS1_DS1Interact_generated_h

#define FID_DS1_Source_DS1_Interfaces_DS1Interact_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DS1_API UDS1Interact(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDS1Interact(UDS1Interact&&); \
	UDS1Interact(const UDS1Interact&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DS1_API, UDS1Interact); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDS1Interact); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDS1Interact) \
	DS1_API virtual ~UDS1Interact();


#define FID_DS1_Source_DS1_Interfaces_DS1Interact_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDS1Interact(); \
	friend struct Z_Construct_UClass_UDS1Interact_Statics; \
public: \
	DECLARE_CLASS(UDS1Interact, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DS1"), DS1_API) \
	DECLARE_SERIALIZER(UDS1Interact)


#define FID_DS1_Source_DS1_Interfaces_DS1Interact_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_DS1_Source_DS1_Interfaces_DS1Interact_h_13_GENERATED_UINTERFACE_BODY() \
	FID_DS1_Source_DS1_Interfaces_DS1Interact_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DS1_Source_DS1_Interfaces_DS1Interact_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDS1Interact() {} \
public: \
	typedef UDS1Interact UClassType; \
	typedef IDS1Interact ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_DS1_Source_DS1_Interfaces_DS1Interact_h_10_PROLOG
#define FID_DS1_Source_DS1_Interfaces_DS1Interact_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DS1_Source_DS1_Interfaces_DS1Interact_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DS1_API UClass* StaticClass<class UDS1Interact>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DS1_Source_DS1_Interfaces_DS1Interact_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
