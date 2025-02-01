// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CStateComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStateType : uint8;
#ifdef MYPORTFOLIO_CStateComponent_generated_h
#error "CStateComponent.generated.h already included, missing '#pragma once' in CStateComponent.h"
#endif
#define MYPORTFOLIO_CStateComponent_generated_h

#define FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_15_DELEGATE \
MYPORTFOLIO_API void FStateTypeChanged_DelegateWrapper(const FMulticastScriptDelegate& StateTypeChanged, EStateType InPrevType, EStateType InNewType);


#define FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_20_SPARSE_DATA
#define FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_20_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCStateComponent(); \
	friend struct Z_Construct_UClass_UCStateComponent_Statics; \
public: \
	DECLARE_CLASS(UCStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyPortfolio"), NO_API) \
	DECLARE_SERIALIZER(UCStateComponent)


#define FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCStateComponent(UCStateComponent&&); \
	NO_API UCStateComponent(const UCStateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCStateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCStateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCStateComponent) \
	NO_API virtual ~UCStateComponent();


#define FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_17_PROLOG
#define FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_20_SPARSE_DATA \
	FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_20_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPORTFOLIO_API UClass* StaticClass<class UCStateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyPortfolio_Source_MyPortfolio_Components_CStateComponent_h


#define FOREACH_ENUM_ESTATETYPE(op) \
	op(EStateType::Idle) \
	op(EStateType::Evade) \
	op(EStateType::Equip) \
	op(EStateType::Damaged) \
	op(EStateType::Action) \
	op(EStateType::Dead) \
	op(EStateType::Max) 

enum class EStateType : uint8;
template<> struct TIsUEnumClass<EStateType> { enum { Value = true }; };
template<> MYPORTFOLIO_API UEnum* StaticEnum<EStateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
