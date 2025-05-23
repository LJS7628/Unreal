// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/DS1PotionWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DS1_DS1PotionWidget_generated_h
#error "DS1PotionWidget.generated.h already included, missing '#pragma once' in DS1PotionWidget.h"
#endif
#define DS1_DS1PotionWidget_generated_h

#define FID_DS1_Source_DS1_UI_DS1PotionWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDS1PotionWidget(); \
	friend struct Z_Construct_UClass_UDS1PotionWidget_Statics; \
public: \
	DECLARE_CLASS(UDS1PotionWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DS1"), NO_API) \
	DECLARE_SERIALIZER(UDS1PotionWidget)


#define FID_DS1_Source_DS1_UI_DS1PotionWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDS1PotionWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDS1PotionWidget(UDS1PotionWidget&&); \
	UDS1PotionWidget(const UDS1PotionWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDS1PotionWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDS1PotionWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDS1PotionWidget) \
	NO_API virtual ~UDS1PotionWidget();


#define FID_DS1_Source_DS1_UI_DS1PotionWidget_h_13_PROLOG
#define FID_DS1_Source_DS1_UI_DS1PotionWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DS1_Source_DS1_UI_DS1PotionWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_DS1_Source_DS1_UI_DS1PotionWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DS1_API UClass* StaticClass<class UDS1PotionWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DS1_Source_DS1_UI_DS1PotionWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
