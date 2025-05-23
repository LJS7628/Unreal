// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/DS1AnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DS1_DS1AnimInstance_generated_h
#error "DS1AnimInstance.generated.h already included, missing '#pragma once' in DS1AnimInstance.h"
#endif
#define DS1_DS1AnimInstance_generated_h

#define FID_DS1_Source_DS1_Animation_DS1AnimInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAnimNotify_ResetState); \
	DECLARE_FUNCTION(execAnimNotify_ResetMovementInput);


#define FID_DS1_Source_DS1_Animation_DS1AnimInstance_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDS1AnimInstance(); \
	friend struct Z_Construct_UClass_UDS1AnimInstance_Statics; \
public: \
	DECLARE_CLASS(UDS1AnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DS1"), NO_API) \
	DECLARE_SERIALIZER(UDS1AnimInstance)


#define FID_DS1_Source_DS1_Animation_DS1AnimInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDS1AnimInstance(UDS1AnimInstance&&); \
	UDS1AnimInstance(const UDS1AnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDS1AnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDS1AnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDS1AnimInstance) \
	NO_API virtual ~UDS1AnimInstance();


#define FID_DS1_Source_DS1_Animation_DS1AnimInstance_h_15_PROLOG
#define FID_DS1_Source_DS1_Animation_DS1AnimInstance_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DS1_Source_DS1_Animation_DS1AnimInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DS1_Source_DS1_Animation_DS1AnimInstance_h_18_INCLASS_NO_PURE_DECLS \
	FID_DS1_Source_DS1_Animation_DS1AnimInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DS1_API UClass* StaticClass<class UDS1AnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DS1_Source_DS1_Animation_DS1AnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
