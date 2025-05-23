// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/DS1CombatInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DS1_DS1CombatInterface_generated_h
#error "DS1CombatInterface.generated.h already included, missing '#pragma once' in DS1CombatInterface.h"
#endif
#define DS1_DS1CombatInterface_generated_h

#define FID_DS1_Source_DS1_Interfaces_DS1CombatInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDS1CombatInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDS1CombatInterface(UDS1CombatInterface&&); \
	UDS1CombatInterface(const UDS1CombatInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDS1CombatInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDS1CombatInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDS1CombatInterface) \
	NO_API virtual ~UDS1CombatInterface();


#define FID_DS1_Source_DS1_Interfaces_DS1CombatInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDS1CombatInterface(); \
	friend struct Z_Construct_UClass_UDS1CombatInterface_Statics; \
public: \
	DECLARE_CLASS(UDS1CombatInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DS1"), NO_API) \
	DECLARE_SERIALIZER(UDS1CombatInterface)


#define FID_DS1_Source_DS1_Interfaces_DS1CombatInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_DS1_Source_DS1_Interfaces_DS1CombatInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_DS1_Source_DS1_Interfaces_DS1CombatInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_DS1_Source_DS1_Interfaces_DS1CombatInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDS1CombatInterface() {} \
public: \
	typedef UDS1CombatInterface UClassType; \
	typedef IDS1CombatInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_DS1_Source_DS1_Interfaces_DS1CombatInterface_h_12_PROLOG
#define FID_DS1_Source_DS1_Interfaces_DS1CombatInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DS1_Source_DS1_Interfaces_DS1CombatInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DS1_API UClass* StaticClass<class UDS1CombatInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DS1_Source_DS1_Interfaces_DS1CombatInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
