// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/DS1PickupItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DS1_DS1PickupItem_generated_h
#error "DS1PickupItem.generated.h already included, missing '#pragma once' in DS1PickupItem.h"
#endif
#define DS1_DS1PickupItem_generated_h

#define FID_DS1_Source_DS1_Items_DS1PickupItem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADS1PickupItem(); \
	friend struct Z_Construct_UClass_ADS1PickupItem_Statics; \
public: \
	DECLARE_CLASS(ADS1PickupItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DS1"), NO_API) \
	DECLARE_SERIALIZER(ADS1PickupItem) \
	virtual UObject* _getUObject() const override { return const_cast<ADS1PickupItem*>(this); }


#define FID_DS1_Source_DS1_Items_DS1PickupItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADS1PickupItem(ADS1PickupItem&&); \
	ADS1PickupItem(const ADS1PickupItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADS1PickupItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADS1PickupItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADS1PickupItem) \
	NO_API virtual ~ADS1PickupItem();


#define FID_DS1_Source_DS1_Items_DS1PickupItem_h_12_PROLOG
#define FID_DS1_Source_DS1_Items_DS1PickupItem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DS1_Source_DS1_Items_DS1PickupItem_h_15_INCLASS_NO_PURE_DECLS \
	FID_DS1_Source_DS1_Items_DS1PickupItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DS1_API UClass* StaticClass<class ADS1PickupItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DS1_Source_DS1_Items_DS1PickupItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
