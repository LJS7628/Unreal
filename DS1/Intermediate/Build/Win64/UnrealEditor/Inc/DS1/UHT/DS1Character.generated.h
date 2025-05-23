// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/DS1Character.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DS1_DS1Character_generated_h
#error "DS1Character.generated.h already included, missing '#pragma once' in DS1Character.h"
#endif
#define DS1_DS1Character_generated_h

#define FID_DS1_Source_DS1_Characters_DS1Character_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADS1Character(); \
	friend struct Z_Construct_UClass_ADS1Character_Statics; \
public: \
	DECLARE_CLASS(ADS1Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DS1"), NO_API) \
	DECLARE_SERIALIZER(ADS1Character) \
	virtual UObject* _getUObject() const override { return const_cast<ADS1Character*>(this); }


#define FID_DS1_Source_DS1_Characters_DS1Character_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADS1Character(ADS1Character&&); \
	ADS1Character(const ADS1Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADS1Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADS1Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADS1Character) \
	NO_API virtual ~ADS1Character();


#define FID_DS1_Source_DS1_Characters_DS1Character_h_25_PROLOG
#define FID_DS1_Source_DS1_Characters_DS1Character_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DS1_Source_DS1_Characters_DS1Character_h_28_INCLASS_NO_PURE_DECLS \
	FID_DS1_Source_DS1_Characters_DS1Character_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DS1_API UClass* StaticClass<class ADS1Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DS1_Source_DS1_Characters_DS1Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
