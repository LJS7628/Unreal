// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/CEnemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStateType : uint8;
#ifdef MYPORTFOLIO_CEnemy_generated_h
#error "CEnemy.generated.h already included, missing '#pragma once' in CEnemy.h"
#endif
#define MYPORTFOLIO_CEnemy_generated_h

#define FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_h_13_SPARSE_DATA
#define FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnStateTypeChanged);


#define FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_h_13_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACEnemy(); \
	friend struct Z_Construct_UClass_ACEnemy_Statics; \
public: \
	DECLARE_CLASS(ACEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyPortfolio"), NO_API) \
	DECLARE_SERIALIZER(ACEnemy) \
	virtual UObject* _getUObject() const override { return const_cast<ACEnemy*>(this); }


#define FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACEnemy(ACEnemy&&); \
	NO_API ACEnemy(const ACEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACEnemy) \
	NO_API virtual ~ACEnemy();


#define FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_h_8_PROLOG
#define FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_h_13_SPARSE_DATA \
	FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_h_13_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_h_13_INCLASS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPORTFOLIO_API UClass* StaticClass<class ACEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
