// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPORTFOLIO_CMovementComponent_generated_h
#error "CMovementComponent.generated.h already included, missing '#pragma once' in CMovementComponent.h"
#endif
#define MYPORTFOLIO_CMovementComponent_generated_h

#define FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h_18_SPARSE_DATA
#define FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h_18_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCMovementComponent(); \
	friend struct Z_Construct_UClass_UCMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UCMovementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyPortfolio"), NO_API) \
	DECLARE_SERIALIZER(UCMovementComponent)


#define FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCMovementComponent(UCMovementComponent&&); \
	NO_API UCMovementComponent(const UCMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCMovementComponent) \
	NO_API virtual ~UCMovementComponent();


#define FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h_15_PROLOG
#define FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h_18_SPARSE_DATA \
	FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h_18_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPORTFOLIO_API UClass* StaticClass<class UCMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h


#define FOREACH_ENUM_ESPEEDTYPE(op) \
	op(ESpeedType::Walk) \
	op(ESpeedType::Run) \
	op(ESpeedType::Sprint) \
	op(ESpeedType::Max) 

enum class ESpeedType : uint8;
template<> struct TIsUEnumClass<ESpeedType> { enum { Value = true }; };
template<> MYPORTFOLIO_API UEnum* StaticEnum<ESpeedType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
