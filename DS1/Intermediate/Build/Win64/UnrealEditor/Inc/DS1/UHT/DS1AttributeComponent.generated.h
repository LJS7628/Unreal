// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DS1AttributeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DS1_DS1AttributeComponent_generated_h
#error "DS1AttributeComponent.generated.h already included, missing '#pragma once' in DS1AttributeComponent.h"
#endif
#define DS1_DS1AttributeComponent_generated_h

#define FID_DS1_Source_DS1_Components_DS1AttributeComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDS1AttributeComponent(); \
	friend struct Z_Construct_UClass_UDS1AttributeComponent_Statics; \
public: \
	DECLARE_CLASS(UDS1AttributeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DS1"), NO_API) \
	DECLARE_SERIALIZER(UDS1AttributeComponent)


#define FID_DS1_Source_DS1_Components_DS1AttributeComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDS1AttributeComponent(UDS1AttributeComponent&&); \
	UDS1AttributeComponent(const UDS1AttributeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDS1AttributeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDS1AttributeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDS1AttributeComponent) \
	NO_API virtual ~UDS1AttributeComponent();


#define FID_DS1_Source_DS1_Components_DS1AttributeComponent_h_13_PROLOG
#define FID_DS1_Source_DS1_Components_DS1AttributeComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DS1_Source_DS1_Components_DS1AttributeComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_DS1_Source_DS1_Components_DS1AttributeComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DS1_API UClass* StaticClass<class UDS1AttributeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DS1_Source_DS1_Components_DS1AttributeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
