// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DS1CombatComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DS1_DS1CombatComponent_generated_h
#error "DS1CombatComponent.generated.h already included, missing '#pragma once' in DS1CombatComponent.h"
#endif
#define DS1_DS1CombatComponent_generated_h

#define FID_DS1_Source_DS1_Components_DS1CombatComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDS1CombatComponent(); \
	friend struct Z_Construct_UClass_UDS1CombatComponent_Statics; \
public: \
	DECLARE_CLASS(UDS1CombatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DS1"), NO_API) \
	DECLARE_SERIALIZER(UDS1CombatComponent)


#define FID_DS1_Source_DS1_Components_DS1CombatComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDS1CombatComponent(UDS1CombatComponent&&); \
	UDS1CombatComponent(const UDS1CombatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDS1CombatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDS1CombatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDS1CombatComponent) \
	NO_API virtual ~UDS1CombatComponent();


#define FID_DS1_Source_DS1_Components_DS1CombatComponent_h_20_PROLOG
#define FID_DS1_Source_DS1_Components_DS1CombatComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DS1_Source_DS1_Components_DS1CombatComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_DS1_Source_DS1_Components_DS1CombatComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DS1_API UClass* StaticClass<class UDS1CombatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DS1_Source_DS1_Components_DS1CombatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
