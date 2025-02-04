// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CWeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWeaponType : uint8;
#ifdef MYPORTFOLIO_CWeaponComponent_generated_h
#error "CWeaponComponent.generated.h already included, missing '#pragma once' in CWeaponComponent.h"
#endif
#define MYPORTFOLIO_CWeaponComponent_generated_h

#define FID_MyPortfolio_Source_MyPortfolio_Components_CWeaponComponent_h_8_DELEGATE \
MYPORTFOLIO_API void FWeaponTypeChanged_DelegateWrapper(const FMulticastScriptDelegate& WeaponTypeChanged, EWeaponType InPrevType, EWeaponType InNewType);


#define FID_MyPortfolio_Source_MyPortfolio_Components_CWeaponComponent_h_13_SPARSE_DATA
#define FID_MyPortfolio_Source_MyPortfolio_Components_CWeaponComponent_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Components_CWeaponComponent_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Components_CWeaponComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyPortfolio_Source_MyPortfolio_Components_CWeaponComponent_h_13_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Components_CWeaponComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCWeaponComponent(); \
	friend struct Z_Construct_UClass_UCWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UCWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyPortfolio"), NO_API) \
	DECLARE_SERIALIZER(UCWeaponComponent)


#define FID_MyPortfolio_Source_MyPortfolio_Components_CWeaponComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCWeaponComponent(UCWeaponComponent&&); \
	NO_API UCWeaponComponent(const UCWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCWeaponComponent) \
	NO_API virtual ~UCWeaponComponent();


#define FID_MyPortfolio_Source_MyPortfolio_Components_CWeaponComponent_h_10_PROLOG
#define FID_MyPortfolio_Source_MyPortfolio_Components_CWeaponComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyPortfolio_Source_MyPortfolio_Components_CWeaponComponent_h_13_SPARSE_DATA \
	FID_MyPortfolio_Source_MyPortfolio_Components_CWeaponComponent_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CWeaponComponent_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CWeaponComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CWeaponComponent_h_13_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CWeaponComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CWeaponComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPORTFOLIO_API UClass* StaticClass<class UCWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyPortfolio_Source_MyPortfolio_Components_CWeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
