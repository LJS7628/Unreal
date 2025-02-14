// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CHealthPointComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPORTFOLIO_CHealthPointComponent_generated_h
#error "CHealthPointComponent.generated.h already included, missing '#pragma once' in CHealthPointComponent.h"
#endif
#define MYPORTFOLIO_CHealthPointComponent_generated_h

#define FID_MyPortfolio_Source_MyPortfolio_Components_CHealthPointComponent_h_7_DELEGATE \
MYPORTFOLIO_API void FHealthPointChanged_DelegateWrapper(const FMulticastScriptDelegate& HealthPointChanged, float InCurrentHealth, float InMaxHealth);


#define FID_MyPortfolio_Source_MyPortfolio_Components_CHealthPointComponent_h_12_SPARSE_DATA
#define FID_MyPortfolio_Source_MyPortfolio_Components_CHealthPointComponent_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Components_CHealthPointComponent_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Components_CHealthPointComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyPortfolio_Source_MyPortfolio_Components_CHealthPointComponent_h_12_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Components_CHealthPointComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCHealthPointComponent(); \
	friend struct Z_Construct_UClass_UCHealthPointComponent_Statics; \
public: \
	DECLARE_CLASS(UCHealthPointComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyPortfolio"), NO_API) \
	DECLARE_SERIALIZER(UCHealthPointComponent)


#define FID_MyPortfolio_Source_MyPortfolio_Components_CHealthPointComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCHealthPointComponent(UCHealthPointComponent&&); \
	NO_API UCHealthPointComponent(const UCHealthPointComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCHealthPointComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCHealthPointComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCHealthPointComponent) \
	NO_API virtual ~UCHealthPointComponent();


#define FID_MyPortfolio_Source_MyPortfolio_Components_CHealthPointComponent_h_9_PROLOG
#define FID_MyPortfolio_Source_MyPortfolio_Components_CHealthPointComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyPortfolio_Source_MyPortfolio_Components_CHealthPointComponent_h_12_SPARSE_DATA \
	FID_MyPortfolio_Source_MyPortfolio_Components_CHealthPointComponent_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CHealthPointComponent_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CHealthPointComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CHealthPointComponent_h_12_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CHealthPointComponent_h_12_INCLASS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CHealthPointComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPORTFOLIO_API UClass* StaticClass<class UCHealthPointComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyPortfolio_Source_MyPortfolio_Components_CHealthPointComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
