// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/CEquipment.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPORTFOLIO_CEquipment_generated_h
#error "CEquipment.generated.h already included, missing '#pragma once' in CEquipment.h"
#endif
#define MYPORTFOLIO_CEquipment_generated_h

#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_8_DELEGATE \
MYPORTFOLIO_API void FEquipmentBeginEquip_DelegateWrapper(const FMulticastScriptDelegate& EquipmentBeginEquip);


#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_9_DELEGATE \
MYPORTFOLIO_API void FEquipmentUnequip_DelegateWrapper(const FMulticastScriptDelegate& EquipmentUnequip);


#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_14_SPARSE_DATA
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnequip); \
	DECLARE_FUNCTION(execEnd_Equip); \
	DECLARE_FUNCTION(execBegin_Equip); \
	DECLARE_FUNCTION(execEquip);


#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_14_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_14_CALLBACK_WRAPPERS
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEquipment(); \
	friend struct Z_Construct_UClass_UCEquipment_Statics; \
public: \
	DECLARE_CLASS(UCEquipment, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyPortfolio"), NO_API) \
	DECLARE_SERIALIZER(UCEquipment)


#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCEquipment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCEquipment(UCEquipment&&); \
	NO_API UCEquipment(const UCEquipment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCEquipment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEquipment); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCEquipment) \
	NO_API virtual ~UCEquipment();


#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_11_PROLOG
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_14_SPARSE_DATA \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_14_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_14_CALLBACK_WRAPPERS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_14_INCLASS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPORTFOLIO_API UClass* StaticClass<class UCEquipment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyPortfolio_Source_MyPortfolio_Weapons_CEquipment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
