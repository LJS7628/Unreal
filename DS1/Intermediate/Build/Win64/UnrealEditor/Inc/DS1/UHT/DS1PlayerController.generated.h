// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/DS1PlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DS1_DS1PlayerController_generated_h
#error "DS1PlayerController.generated.h already included, missing '#pragma once' in DS1PlayerController.h"
#endif
#define DS1_DS1PlayerController_generated_h

#define FID_DS1_Source_DS1_Player_DS1PlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADS1PlayerController(); \
	friend struct Z_Construct_UClass_ADS1PlayerController_Statics; \
public: \
	DECLARE_CLASS(ADS1PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DS1"), NO_API) \
	DECLARE_SERIALIZER(ADS1PlayerController)


#define FID_DS1_Source_DS1_Player_DS1PlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADS1PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADS1PlayerController(ADS1PlayerController&&); \
	ADS1PlayerController(const ADS1PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADS1PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADS1PlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADS1PlayerController) \
	NO_API virtual ~ADS1PlayerController();


#define FID_DS1_Source_DS1_Player_DS1PlayerController_h_12_PROLOG
#define FID_DS1_Source_DS1_Player_DS1PlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DS1_Source_DS1_Player_DS1PlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_DS1_Source_DS1_Player_DS1PlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DS1_API UClass* StaticClass<class ADS1PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DS1_Source_DS1_Player_DS1PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
