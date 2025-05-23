// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DS1StateComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DS1_DS1StateComponent_generated_h
#error "DS1StateComponent.generated.h already included, missing '#pragma once' in DS1StateComponent.h"
#endif
#define DS1_DS1StateComponent_generated_h

#define FID_DS1_Source_DS1_Components_DS1StateComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMovementInputEnableAction);


#define FID_DS1_Source_DS1_Components_DS1StateComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDS1StateComponent(); \
	friend struct Z_Construct_UClass_UDS1StateComponent_Statics; \
public: \
	DECLARE_CLASS(UDS1StateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DS1"), NO_API) \
	DECLARE_SERIALIZER(UDS1StateComponent)


#define FID_DS1_Source_DS1_Components_DS1StateComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDS1StateComponent(UDS1StateComponent&&); \
	UDS1StateComponent(const UDS1StateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDS1StateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDS1StateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDS1StateComponent) \
	NO_API virtual ~UDS1StateComponent();


#define FID_DS1_Source_DS1_Components_DS1StateComponent_h_12_PROLOG
#define FID_DS1_Source_DS1_Components_DS1StateComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DS1_Source_DS1_Components_DS1StateComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DS1_Source_DS1_Components_DS1StateComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_DS1_Source_DS1_Components_DS1StateComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DS1_API UClass* StaticClass<class UDS1StateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DS1_Source_DS1_Components_DS1StateComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
