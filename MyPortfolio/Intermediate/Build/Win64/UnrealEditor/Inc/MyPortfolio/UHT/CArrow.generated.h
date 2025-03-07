// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/AddOns/CArrow.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACArrow;
class ACharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MYPORTFOLIO_CArrow_generated_h
#error "CArrow.generated.h already included, missing '#pragma once' in CArrow.h"
#endif
#define MYPORTFOLIO_CArrow_generated_h

#define FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_8_DELEGATE \
MYPORTFOLIO_API void FProjectileEndPlay_DelegateWrapper(const FMulticastScriptDelegate& ProjectileEndPlay, ACArrow* InDestroyer);


#define FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_9_DELEGATE \
MYPORTFOLIO_API void FProjectileHit_DelegateWrapper(const FMulticastScriptDelegate& ProjectileHit, AActor* InCauser, ACharacter* InOtherCharacter);


#define FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_14_SPARSE_DATA
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentHit);


#define FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_14_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACArrow(); \
	friend struct Z_Construct_UClass_ACArrow_Statics; \
public: \
	DECLARE_CLASS(ACArrow, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyPortfolio"), NO_API) \
	DECLARE_SERIALIZER(ACArrow)


#define FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACArrow(ACArrow&&); \
	NO_API ACArrow(const ACArrow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACArrow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACArrow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACArrow) \
	NO_API virtual ~ACArrow();


#define FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_11_PROLOG
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_14_SPARSE_DATA \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_14_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_14_INCLASS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPORTFOLIO_API UClass* StaticClass<class ACArrow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
