// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/CPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStateType : uint8;
#ifdef MYPORTFOLIO_CPlayer_generated_h
#error "CPlayer.generated.h already included, missing '#pragma once' in CPlayer.h"
#endif
#define MYPORTFOLIO_CPlayer_generated_h

#define FID_MyPortfolio_Source_MyPortfolio_Characters_CPlayer_h_10_SPARSE_DATA
#define FID_MyPortfolio_Source_MyPortfolio_Characters_CPlayer_h_10_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Characters_CPlayer_h_10_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Characters_CPlayer_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnStateTypeChanged);


#define FID_MyPortfolio_Source_MyPortfolio_Characters_CPlayer_h_10_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Characters_CPlayer_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPlayer(); \
	friend struct Z_Construct_UClass_ACPlayer_Statics; \
public: \
	DECLARE_CLASS(ACPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyPortfolio"), NO_API) \
	DECLARE_SERIALIZER(ACPlayer)


#define FID_MyPortfolio_Source_MyPortfolio_Characters_CPlayer_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlayer(ACPlayer&&); \
	NO_API ACPlayer(const ACPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPlayer) \
	NO_API virtual ~ACPlayer();


#define FID_MyPortfolio_Source_MyPortfolio_Characters_CPlayer_h_7_PROLOG
#define FID_MyPortfolio_Source_MyPortfolio_Characters_CPlayer_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyPortfolio_Source_MyPortfolio_Characters_CPlayer_h_10_SPARSE_DATA \
	FID_MyPortfolio_Source_MyPortfolio_Characters_CPlayer_h_10_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Characters_CPlayer_h_10_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Characters_CPlayer_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Characters_CPlayer_h_10_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Characters_CPlayer_h_10_INCLASS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Characters_CPlayer_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPORTFOLIO_API UClass* StaticClass<class ACPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyPortfolio_Source_MyPortfolio_Characters_CPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
