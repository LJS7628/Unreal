// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/IStatable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPORTFOLIO_IStatable_generated_h
#error "IStatable.generated.h already included, missing '#pragma once' in IStatable.h"
#endif
#define MYPORTFOLIO_IStatable_generated_h

#define FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h_11_SPARSE_DATA
#define FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h_11_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h_11_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h_11_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPORTFOLIO_API UIStatable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPORTFOLIO_API UIStatable(UIStatable&&); \
	MYPORTFOLIO_API UIStatable(const UIStatable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPORTFOLIO_API, UIStatable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIStatable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIStatable) \
	MYPORTFOLIO_API virtual ~UIStatable();


#define FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIStatable(); \
	friend struct Z_Construct_UClass_UIStatable_Statics; \
public: \
	DECLARE_CLASS(UIStatable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyPortfolio"), MYPORTFOLIO_API) \
	DECLARE_SERIALIZER(UIStatable)


#define FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h_11_GENERATED_UINTERFACE_BODY() \
	FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIStatable() {} \
public: \
	typedef UIStatable UClassType; \
	typedef IIStatable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h_8_PROLOG
#define FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h_11_SPARSE_DATA \
	FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h_11_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h_11_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h_11_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPORTFOLIO_API UClass* StaticClass<class UIStatable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyPortfolio_Source_MyPortfolio_Interfaces_IStatable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
