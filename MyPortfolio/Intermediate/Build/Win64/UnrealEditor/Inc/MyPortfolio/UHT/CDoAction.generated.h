// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/CDoAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacter;
#ifdef MYPORTFOLIO_CDoAction_generated_h
#error "CDoAction.generated.h already included, missing '#pragma once' in CDoAction.h"
#endif
#define MYPORTFOLIO_CDoAction_generated_h

#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_12_SPARSE_DATA
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAttachmentEndOverlap); \
	DECLARE_FUNCTION(execOnAttachmentBeginOverlap); \
	DECLARE_FUNCTION(execOnAttachmentEndCollision); \
	DECLARE_FUNCTION(execOnAttachmentBeginCollision); \
	DECLARE_FUNCTION(execOnUnequip); \
	DECLARE_FUNCTION(execOnBeginEquip);


#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_12_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCDoAction(); \
	friend struct Z_Construct_UClass_UCDoAction_Statics; \
public: \
	DECLARE_CLASS(UCDoAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyPortfolio"), NO_API) \
	DECLARE_SERIALIZER(UCDoAction)


#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCDoAction(UCDoAction&&); \
	NO_API UCDoAction(const UCDoAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCDoAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCDoAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCDoAction) \
	NO_API virtual ~UCDoAction();


#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_9_PROLOG
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_12_SPARSE_DATA \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_12_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_12_INCLASS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPORTFOLIO_API UClass* StaticClass<class UCDoAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyPortfolio_Source_MyPortfolio_Weapons_CDoAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
