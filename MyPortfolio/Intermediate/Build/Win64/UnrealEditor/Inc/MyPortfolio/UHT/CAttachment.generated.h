// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/CAttachment.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MYPORTFOLIO_CAttachment_generated_h
#error "CAttachment.generated.h already included, missing '#pragma once' in CAttachment.h"
#endif
#define MYPORTFOLIO_CAttachment_generated_h

#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_7_DELEGATE \
MYPORTFOLIO_API void FAttachmentBeginCollision_DelegateWrapper(const FMulticastScriptDelegate& AttachmentBeginCollision);


#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_8_DELEGATE \
MYPORTFOLIO_API void FAttachmentEndCollision_DelegateWrapper(const FMulticastScriptDelegate& AttachmentEndCollision);


#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_10_DELEGATE \
MYPORTFOLIO_API void FAttachmentBeginOverlap_DelegateWrapper(const FMulticastScriptDelegate& AttachmentBeginOverlap, ACharacter* InAttacker, AActor* InAttackCauser, ACharacter* InOther);


#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_11_DELEGATE \
MYPORTFOLIO_API void FAttachmentEndOverlap_DelegateWrapper(const FMulticastScriptDelegate& AttachmentEndOverlap, ACharacter* InAttacker, ACharacter* InOther);


#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_16_SPARSE_DATA
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAttachTo); \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap); \
	DECLARE_FUNCTION(execOnUnequip); \
	DECLARE_FUNCTION(execOnBeginEquip);


#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_16_ACCESSORS
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_16_CALLBACK_WRAPPERS
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACAttachment(); \
	friend struct Z_Construct_UClass_ACAttachment_Statics; \
public: \
	DECLARE_CLASS(ACAttachment, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyPortfolio"), NO_API) \
	DECLARE_SERIALIZER(ACAttachment)


#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACAttachment(ACAttachment&&); \
	NO_API ACAttachment(const ACAttachment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACAttachment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACAttachment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACAttachment) \
	NO_API virtual ~ACAttachment();


#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_13_PROLOG
#define FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_16_SPARSE_DATA \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_16_ACCESSORS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_16_CALLBACK_WRAPPERS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_16_INCLASS_NO_PURE_DECLS \
	FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPORTFOLIO_API UClass* StaticClass<class ACAttachment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyPortfolio_Source_MyPortfolio_Weapons_CAttachment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
