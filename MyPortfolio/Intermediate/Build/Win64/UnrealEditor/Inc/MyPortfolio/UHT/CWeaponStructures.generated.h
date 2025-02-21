// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/CWeaponStructures.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPORTFOLIO_CWeaponStructures_generated_h
#error "CWeaponStructures.generated.h already included, missing '#pragma once' in CWeaponStructures.h"
#endif
#define MYPORTFOLIO_CWeaponStructures_generated_h

#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEquipmentData_Statics; \
	MYPORTFOLIO_API static class UScriptStruct* StaticStruct();


template<> MYPORTFOLIO_API UScriptStruct* StaticStruct<struct FEquipmentData>();

#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDoActionData_Statics; \
	MYPORTFOLIO_API static class UScriptStruct* StaticStruct();


template<> MYPORTFOLIO_API UScriptStruct* StaticStruct<struct FDoActionData>();

#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHitData_Statics; \
	MYPORTFOLIO_API static class UScriptStruct* StaticStruct();


template<> MYPORTFOLIO_API UScriptStruct* StaticStruct<struct FHitData>();

#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActionDamageEvent_Statics; \
	MYPORTFOLIO_API static class UScriptStruct* StaticStruct(); \
	typedef FDamageEvent Super;


template<> MYPORTFOLIO_API UScriptStruct* StaticStruct<struct FActionDamageEvent>();

#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_118_SPARSE_DATA
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_118_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_118_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_118_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_118_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_118_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCWeaponStructures(); \
	friend struct Z_Construct_UClass_UCWeaponStructures_Statics; \
public: \
	DECLARE_CLASS(UCWeaponStructures, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyPortfolio"), NO_API) \
	DECLARE_SERIALIZER(UCWeaponStructures)


#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_118_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCWeaponStructures(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCWeaponStructures(UCWeaponStructures&&); \
	NO_API UCWeaponStructures(const UCWeaponStructures&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCWeaponStructures); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCWeaponStructures); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCWeaponStructures) \
	NO_API virtual ~UCWeaponStructures();


#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_115_PROLOG
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_118_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_118_SPARSE_DATA \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_118_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_118_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_118_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_118_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_118_INCLASS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h_118_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPORTFOLIO_API UClass* StaticClass<class UCWeaponStructures>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponStructures_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::Fist) \
	op(EWeaponType::Sword) \
	op(EWeaponType::Axe) \
	op(EWeaponType::Max) 

enum class EWeaponType : uint8;
template<> struct TIsUEnumClass<EWeaponType> { enum { Value = true }; };
template<> MYPORTFOLIO_API UEnum* StaticEnum<EWeaponType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
