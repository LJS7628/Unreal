// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Characters/DS1Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1Character() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DS1_API UClass* Z_Construct_UClass_ADS1Character();
DS1_API UClass* Z_Construct_UClass_ADS1Character_NoRegister();
DS1_API UClass* Z_Construct_UClass_ADS1FistWeapon_NoRegister();
DS1_API UClass* Z_Construct_UClass_UDS1AttributeComponent_NoRegister();
DS1_API UClass* Z_Construct_UClass_UDS1CombatComponent_NoRegister();
DS1_API UClass* Z_Construct_UClass_UDS1CombatInterface_NoRegister();
DS1_API UClass* Z_Construct_UClass_UDS1PlayerHUDWidget_NoRegister();
DS1_API UClass* Z_Construct_UClass_UDS1PotionInventoryComponent_NoRegister();
DS1_API UClass* Z_Construct_UClass_UDS1StateComponent_NoRegister();
DS1_API UClass* Z_Construct_UClass_UDS1TargetingComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class ADS1Character
void ADS1Character::StaticRegisterNativesADS1Character()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADS1Character);
UClass* Z_Construct_UClass_ADS1Character_NoRegister()
{
	return ADS1Character::StaticClass();
}
struct Z_Construct_UClass_ADS1Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/DS1Character.h" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintRollingAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToggleCombatAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\xa0\x84\xed\x88\xac \xed\x99\x9c\xec\x84\xb1\xed\x99\x94/\xeb\xb9\x84\xed\x99\x9c\xec\x84\xb1\xed\x99\x94 \xed\x86\xa0\xea\xb8\x80 */" },
#endif
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa0\x84\xed\x88\xac \xed\x99\x9c\xec\x84\xb1\xed\x99\x94/\xeb\xb9\x84\xed\x99\x9c\xec\x84\xb1\xed\x99\x94 \xed\x86\xa0\xea\xb8\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attack */" },
#endif
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attack" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeavyAttackAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Heavy Attack */" },
#endif
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Heavy Attack" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockOnTargetAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** LockedOn */" },
#endif
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LockedOn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftTargetAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x99\xbc\xec\xaa\xbd\xec\x9c\xbc\xeb\xa1\x9c \xed\x83\x80\xea\xb2\x9f \xec\xa0\x84\xed\x99\x98 */" },
#endif
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x99\xbc\xec\xaa\xbd\xec\x9c\xbc\xeb\xa1\x9c \xed\x83\x80\xea\xb2\x9f \xec\xa0\x84\xed\x99\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightTargetAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x98\xa4\xeb\xa5\xb8\xec\xaa\xbd\xec\x9c\xbc\xeb\xa1\x9c \xed\x83\x80\xea\xb2\x9f \xec\xa0\x84\xed\x99\x98 */" },
#endif
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x98\xa4\xeb\xa5\xb8\xec\xaa\xbd\xec\x9c\xbc\xeb\xa1\x9c \xed\x83\x80\xea\xb2\x9f \xec\xa0\x84\xed\x99\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blocking Action*/" },
#endif
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blocking Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParryAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Parrying Action*/" },
#endif
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parrying Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsumeAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Potion Action*/" },
#endif
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Potion Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\xba\x90\xeb\xa6\xad\xed\x84\xb0\xec\x9d\x98 \xea\xb0\x81\xec\xa2\x85 \xec\x8a\xa4\xed\x83\xaf \xea\xb4\x80\xeb\xa6\xac */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xba\x90\xeb\xa6\xad\xed\x84\xb0\xec\x9d\x98 \xea\xb0\x81\xec\xa2\x85 \xec\x8a\xa4\xed\x83\xaf \xea\xb4\x80\xeb\xa6\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\xba\x90\xeb\xa6\xad\xed\x84\xb0\xec\x9d\x98 \xec\x83\x81\xed\x83\x9c \xea\xb4\x80\xeb\xa6\xac */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xba\x90\xeb\xa6\xad\xed\x84\xb0\xec\x9d\x98 \xec\x83\x81\xed\x83\x9c \xea\xb4\x80\xeb\xa6\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\xac\xb4\xea\xb8\xb0, \xec\xa0\x84\xed\x88\xac \xea\xb4\x80\xeb\xa6\xac */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xac\xb4\xea\xb8\xb0, \xec\xa0\x84\xed\x88\xac \xea\xb4\x80\xeb\xa6\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** LockedOn Targeting */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LockedOn Targeting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PotionInventoryComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xed\x8f\xac\xec\x85\x98 \xec\x9d\xb8\xeb\xb2\xa4\xed\x86\xa0\xeb\xa6\xac */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x8f\xac\xec\x85\x98 \xec\x9d\xb8\xeb\xb2\xa4\xed\x86\xa0\xeb\xa6\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TorsoMesh_MetaData[] = {
		{ "Category", "DS1Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LegsMesh_MetaData[] = {
		{ "Category", "DS1Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeetMesh_MetaData[] = {
		{ "Category", "DS1Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHUDWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHUDWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FistWeaponClass_MetaData[] = {
		{ "Category", "DS1Character" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockingSound_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactParticle_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockingParticle_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintingSpeed_MetaData[] = {
		{ "Category", "Movement Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\xa7\x88\xec\xa3\xbc \xec\x86\x8d\xeb\x8f\x84 */" },
#endif
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa7\x88\xec\xa3\xbc \xec\x86\x8d\xeb\x8f\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalSpeed_MetaData[] = {
		{ "Category", "Movement Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x9d\xbc\xeb\xb0\x98 \xec\x86\x8d\xeb\x8f\x84 */" },
#endif
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xbc\xeb\xb0\x98 \xec\x86\x8d\xeb\x8f\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockingSpeed_MetaData[] = {
		{ "Category", "Movement Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\xb0\xa9\xec\x96\xb4\xec\x9e\x90\xec\x84\xb8 \xec\x86\x8d\xeb\x8f\x84 */" },
#endif
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb0\xa9\xec\x96\xb4\xec\x9e\x90\xec\x84\xb8 \xec\x86\x8d\xeb\x8f\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSprinting_MetaData[] = {
		{ "Category", "Movement Speed" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollingMontage_MetaData[] = {
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrinkingMontage_MetaData[] = {
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "Characters/DS1Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintRollingAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToggleCombatAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeavyAttackAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LockOnTargetAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftTargetAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightTargetAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParryAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConsumeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PotionInventoryComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TorsoMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LegsMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FeetMesh;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerHUDWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerHUDWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FistWeaponClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockingSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactParticle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockingParticle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintingSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockingSpeed;
	static void NewProp_bSprinting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSprinting;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RollingMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrinkingMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADS1Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_SprintRollingAction = { "SprintRollingAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, SprintRollingAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintRollingAction_MetaData), NewProp_SprintRollingAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_ToggleCombatAction = { "ToggleCombatAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, ToggleCombatAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToggleCombatAction_MetaData), NewProp_ToggleCombatAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_AttackAction = { "AttackAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, AttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAction_MetaData), NewProp_AttackAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_HeavyAttackAction = { "HeavyAttackAction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, HeavyAttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeavyAttackAction_MetaData), NewProp_HeavyAttackAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_LockOnTargetAction = { "LockOnTargetAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, LockOnTargetAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockOnTargetAction_MetaData), NewProp_LockOnTargetAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_LeftTargetAction = { "LeftTargetAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, LeftTargetAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftTargetAction_MetaData), NewProp_LeftTargetAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_RightTargetAction = { "RightTargetAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, RightTargetAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightTargetAction_MetaData), NewProp_RightTargetAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_BlockAction = { "BlockAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, BlockAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockAction_MetaData), NewProp_BlockAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_ParryAction = { "ParryAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, ParryAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParryAction_MetaData), NewProp_ParryAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_ConsumeAction = { "ConsumeAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, ConsumeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsumeAction_MetaData), NewProp_ConsumeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_AttributeComponent = { "AttributeComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, AttributeComponent), Z_Construct_UClass_UDS1AttributeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeComponent_MetaData), NewProp_AttributeComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_StateComponent = { "StateComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, StateComponent), Z_Construct_UClass_UDS1StateComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateComponent_MetaData), NewProp_StateComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_CombatComponent = { "CombatComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, CombatComponent), Z_Construct_UClass_UDS1CombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatComponent_MetaData), NewProp_CombatComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_TargetingComponent = { "TargetingComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, TargetingComponent), Z_Construct_UClass_UDS1TargetingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingComponent_MetaData), NewProp_TargetingComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_PotionInventoryComponent = { "PotionInventoryComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, PotionInventoryComponent), Z_Construct_UClass_UDS1PotionInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PotionInventoryComponent_MetaData), NewProp_PotionInventoryComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_TorsoMesh = { "TorsoMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, TorsoMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TorsoMesh_MetaData), NewProp_TorsoMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_LegsMesh = { "LegsMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, LegsMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LegsMesh_MetaData), NewProp_LegsMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_FeetMesh = { "FeetMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, FeetMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeetMesh_MetaData), NewProp_FeetMesh_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_PlayerHUDWidgetClass = { "PlayerHUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, PlayerHUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerHUDWidgetClass_MetaData), NewProp_PlayerHUDWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_PlayerHUDWidget = { "PlayerHUDWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, PlayerHUDWidget), Z_Construct_UClass_UDS1PlayerHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerHUDWidget_MetaData), NewProp_PlayerHUDWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_FistWeaponClass = { "FistWeaponClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, FistWeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADS1FistWeapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FistWeaponClass_MetaData), NewProp_FistWeaponClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, ImpactSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactSound_MetaData), NewProp_ImpactSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_BlockingSound = { "BlockingSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, BlockingSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockingSound_MetaData), NewProp_BlockingSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_ImpactParticle = { "ImpactParticle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, ImpactParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactParticle_MetaData), NewProp_ImpactParticle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_BlockingParticle = { "BlockingParticle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, BlockingParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockingParticle_MetaData), NewProp_BlockingParticle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_SprintingSpeed = { "SprintingSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, SprintingSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintingSpeed_MetaData), NewProp_SprintingSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_NormalSpeed = { "NormalSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, NormalSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalSpeed_MetaData), NewProp_NormalSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_BlockingSpeed = { "BlockingSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, BlockingSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockingSpeed_MetaData), NewProp_BlockingSpeed_MetaData) };
void Z_Construct_UClass_ADS1Character_Statics::NewProp_bSprinting_SetBit(void* Obj)
{
	((ADS1Character*)Obj)->bSprinting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_bSprinting = { "bSprinting", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADS1Character), &Z_Construct_UClass_ADS1Character_Statics::NewProp_bSprinting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSprinting_MetaData), NewProp_bSprinting_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_RollingMontage = { "RollingMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, RollingMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollingMontage_MetaData), NewProp_RollingMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Character_Statics::NewProp_DrinkingMontage = { "DrinkingMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Character, DrinkingMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrinkingMontage_MetaData), NewProp_DrinkingMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADS1Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_SprintRollingAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_ToggleCombatAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_AttackAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_HeavyAttackAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_LockOnTargetAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_LeftTargetAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_RightTargetAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_BlockAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_ParryAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_ConsumeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_AttributeComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_StateComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_CombatComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_TargetingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_PotionInventoryComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_TorsoMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_LegsMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_FeetMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_PlayerHUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_PlayerHUDWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_FistWeaponClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_ImpactSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_BlockingSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_ImpactParticle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_BlockingParticle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_SprintingSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_NormalSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_BlockingSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_bSprinting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_RollingMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Character_Statics::NewProp_DrinkingMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Character_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADS1Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADS1Character_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UDS1CombatInterface_NoRegister, (int32)VTABLE_OFFSET(ADS1Character, IDS1CombatInterface), false },  // 2404795361
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADS1Character_Statics::ClassParams = {
	&ADS1Character::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADS1Character_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Character_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Character_Statics::Class_MetaDataParams), Z_Construct_UClass_ADS1Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADS1Character()
{
	if (!Z_Registration_Info_UClass_ADS1Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADS1Character.OuterSingleton, Z_Construct_UClass_ADS1Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADS1Character.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<ADS1Character>()
{
	return ADS1Character::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADS1Character);
ADS1Character::~ADS1Character() {}
// End Class ADS1Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Characters_DS1Character_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADS1Character, ADS1Character::StaticClass, TEXT("ADS1Character"), &Z_Registration_Info_UClass_ADS1Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADS1Character), 1773710808U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Characters_DS1Character_h_1831618002(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Characters_DS1Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Characters_DS1Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
