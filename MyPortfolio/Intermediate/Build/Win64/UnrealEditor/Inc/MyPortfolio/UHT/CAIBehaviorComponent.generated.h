// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CAIBehaviorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAIStateType : uint8;
#ifdef MYPORTFOLIO_CAIBehaviorComponent_generated_h
#error "CAIBehaviorComponent.generated.h already included, missing '#pragma once' in CAIBehaviorComponent.h"
#endif
#define MYPORTFOLIO_CAIBehaviorComponent_generated_h

#define FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_12_DELEGATE \
MYPORTFOLIO_API void FAIStateTypeChanged_DelegateWrapper(const FMulticastScriptDelegate& AIStateTypeChanged, EAIStateType InPrevType, EAIStateType InNewType);


#define FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_17_SPARSE_DATA
#define FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_17_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCAIBehaviorComponent(); \
	friend struct Z_Construct_UClass_UCAIBehaviorComponent_Statics; \
public: \
	DECLARE_CLASS(UCAIBehaviorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyPortfolio"), NO_API) \
	DECLARE_SERIALIZER(UCAIBehaviorComponent)


#define FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCAIBehaviorComponent(UCAIBehaviorComponent&&); \
	NO_API UCAIBehaviorComponent(const UCAIBehaviorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCAIBehaviorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCAIBehaviorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCAIBehaviorComponent) \
	NO_API virtual ~UCAIBehaviorComponent();


#define FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_14_PROLOG
#define FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_17_SPARSE_DATA \
	FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_17_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPORTFOLIO_API UClass* StaticClass<class UCAIBehaviorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyPortfolio_Source_MyPortfolio_Components_CAIBehaviorComponent_h


#define FOREACH_ENUM_EAISTATETYPE(op) \
	op(EAIStateType::Wait) \
	op(EAIStateType::Patrol) \
	op(EAIStateType::Equip) \
	op(EAIStateType::Approach) \
	op(EAIStateType::Action) \
	op(EAIStateType::Damaged) \
	op(EAIStateType::Avoid) \
	op(EAIStateType::Max) 

enum class EAIStateType : uint8;
template<> struct TIsUEnumClass<EAIStateType> { enum { Value = true }; };
template<> MYPORTFOLIO_API UEnum* StaticEnum<EAIStateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
