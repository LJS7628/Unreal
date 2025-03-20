// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/CAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MYPORTFOLIO_CAIController_generated_h
#error "CAIController.generated.h already included, missing '#pragma once' in CAIController.h"
#endif
#define MYPORTFOLIO_CAIController_generated_h

#define FID_MyPortfolio_Source_MyPortfolio_Characters_CAIController_h_11_SPARSE_DATA
#define FID_MyPortfolio_Source_MyPortfolio_Characters_CAIController_h_11_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Characters_CAIController_h_11_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Characters_CAIController_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPerceptionUpdated);


#define FID_MyPortfolio_Source_MyPortfolio_Characters_CAIController_h_11_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Characters_CAIController_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACAIController(); \
	friend struct Z_Construct_UClass_ACAIController_Statics; \
public: \
	DECLARE_CLASS(ACAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyPortfolio"), NO_API) \
	DECLARE_SERIALIZER(ACAIController)


#define FID_MyPortfolio_Source_MyPortfolio_Characters_CAIController_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACAIController(ACAIController&&); \
	NO_API ACAIController(const ACAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACAIController) \
	NO_API virtual ~ACAIController();


#define FID_MyPortfolio_Source_MyPortfolio_Characters_CAIController_h_8_PROLOG
#define FID_MyPortfolio_Source_MyPortfolio_Characters_CAIController_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyPortfolio_Source_MyPortfolio_Characters_CAIController_h_11_SPARSE_DATA \
	FID_MyPortfolio_Source_MyPortfolio_Characters_CAIController_h_11_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Characters_CAIController_h_11_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Characters_CAIController_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Characters_CAIController_h_11_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Characters_CAIController_h_11_INCLASS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Characters_CAIController_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPORTFOLIO_API UClass* StaticClass<class ACAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyPortfolio_Source_MyPortfolio_Characters_CAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
