// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Characters/DS1Enemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1Enemy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DS1_API UClass* Z_Construct_UClass_ADS1Enemy();
DS1_API UClass* Z_Construct_UClass_ADS1Enemy_NoRegister();
DS1_API UClass* Z_Construct_UClass_ADS1Weapon_NoRegister();
DS1_API UClass* Z_Construct_UClass_UDS1AttributeComponent_NoRegister();
DS1_API UClass* Z_Construct_UClass_UDS1CombatComponent_NoRegister();
DS1_API UClass* Z_Construct_UClass_UDS1CombatInterface_NoRegister();
DS1_API UClass* Z_Construct_UClass_UDS1RotationComponent_NoRegister();
DS1_API UClass* Z_Construct_UClass_UDS1StateComponent_NoRegister();
DS1_API UClass* Z_Construct_UClass_UDS1Targeting_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class ADS1Enemy
void ADS1Enemy::StaticRegisterNativesADS1Enemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADS1Enemy);
UClass* Z_Construct_UClass_ADS1Enemy_NoRegister()
{
	return ADS1Enemy::StaticClass();
}
struct Z_Construct_UClass_ADS1Enemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/DS1Enemy.h" },
		{ "ModuleRelativePath", "Characters/DS1Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingSphereComponent_MetaData[] = {
		{ "Category", "DS1Enemy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xed\x83\x80\xea\xb2\x9f\xed\x8c\x85 \xec\xb6\xa9\xeb\x8f\x8c \xec\xb2\xb4\xed\x81\xac\xec\x9a\xa9 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/DS1Enemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x83\x80\xea\xb2\x9f\xed\x8c\x85 \xec\xb6\xa9\xeb\x8f\x8c \xec\xb2\xb4\xed\x81\xac\xec\x9a\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeComponent_MetaData[] = {
		{ "Category", "DS1Enemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/DS1Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateComponent_MetaData[] = {
		{ "Category", "DS1Enemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/DS1Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatComponent_MetaData[] = {
		{ "Category", "DS1Enemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/DS1Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationComponent_MetaData[] = {
		{ "Category", "DS1Enemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/DS1Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockOnWidgetComponent_MetaData[] = {
		{ "Category", "DS1Enemy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** LockOn UI Widget */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/DS1Enemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LockOn UI Widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidgetComponent_MetaData[] = {
		{ "Category", "DS1Enemy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** HealthBar UI Widget */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/DS1Enemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HealthBar UI Widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Characters/DS1Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactParticle_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Characters/DS1Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolPoints_MetaData[] = {
		{ "Category", "AI | Patrol" },
		{ "ModuleRelativePath", "Characters/DS1Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolIndex_MetaData[] = {
		{ "Category", "AI | Patrol" },
		{ "ModuleRelativePath", "Characters/DS1Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWeaponClass_MetaData[] = {
		{ "Category", "DS1Enemy" },
		{ "ModuleRelativePath", "Characters/DS1Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StunnedRate_MetaData[] = {
		{ "Category", "DS1Enemy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xed\x94\xbc\xea\xb2\xa9\xec\x8b\x9c \xec\x8a\xa4\xed\x84\xb4 \xed\x99\x95\xeb\xa5\xa0*/" },
#endif
		{ "ModuleRelativePath", "Characters/DS1Enemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x94\xbc\xea\xb2\xa9\xec\x8b\x9c \xec\x8a\xa4\xed\x84\xb4 \xed\x99\x95\xeb\xa5\xa0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingSphereComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LockOnWidgetComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBarWidgetComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactParticle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PatrolPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PatrolIndex;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultWeaponClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StunnedRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADS1Enemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Enemy_Statics::NewProp_TargetingSphereComponent = { "TargetingSphereComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Enemy, TargetingSphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingSphereComponent_MetaData), NewProp_TargetingSphereComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Enemy_Statics::NewProp_AttributeComponent = { "AttributeComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Enemy, AttributeComponent), Z_Construct_UClass_UDS1AttributeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeComponent_MetaData), NewProp_AttributeComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Enemy_Statics::NewProp_StateComponent = { "StateComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Enemy, StateComponent), Z_Construct_UClass_UDS1StateComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateComponent_MetaData), NewProp_StateComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Enemy_Statics::NewProp_CombatComponent = { "CombatComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Enemy, CombatComponent), Z_Construct_UClass_UDS1CombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatComponent_MetaData), NewProp_CombatComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Enemy_Statics::NewProp_RotationComponent = { "RotationComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Enemy, RotationComponent), Z_Construct_UClass_UDS1RotationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationComponent_MetaData), NewProp_RotationComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Enemy_Statics::NewProp_LockOnWidgetComponent = { "LockOnWidgetComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Enemy, LockOnWidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockOnWidgetComponent_MetaData), NewProp_LockOnWidgetComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Enemy_Statics::NewProp_HealthBarWidgetComponent = { "HealthBarWidgetComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Enemy, HealthBarWidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarWidgetComponent_MetaData), NewProp_HealthBarWidgetComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Enemy_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Enemy, ImpactSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactSound_MetaData), NewProp_ImpactSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Enemy_Statics::NewProp_ImpactParticle = { "ImpactParticle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Enemy, ImpactParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactParticle_MetaData), NewProp_ImpactParticle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Enemy_Statics::NewProp_PatrolPoints_Inner = { "PatrolPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADS1Enemy_Statics::NewProp_PatrolPoints = { "PatrolPoints", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Enemy, PatrolPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolPoints_MetaData), NewProp_PatrolPoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADS1Enemy_Statics::NewProp_PatrolIndex = { "PatrolIndex", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Enemy, PatrolIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolIndex_MetaData), NewProp_PatrolIndex_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADS1Enemy_Statics::NewProp_DefaultWeaponClass = { "DefaultWeaponClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Enemy, DefaultWeaponClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADS1Weapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWeaponClass_MetaData), NewProp_DefaultWeaponClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADS1Enemy_Statics::NewProp_StunnedRate = { "StunnedRate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Enemy, StunnedRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StunnedRate_MetaData), NewProp_StunnedRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADS1Enemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Enemy_Statics::NewProp_TargetingSphereComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Enemy_Statics::NewProp_AttributeComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Enemy_Statics::NewProp_StateComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Enemy_Statics::NewProp_CombatComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Enemy_Statics::NewProp_RotationComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Enemy_Statics::NewProp_LockOnWidgetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Enemy_Statics::NewProp_HealthBarWidgetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Enemy_Statics::NewProp_ImpactSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Enemy_Statics::NewProp_ImpactParticle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Enemy_Statics::NewProp_PatrolPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Enemy_Statics::NewProp_PatrolPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Enemy_Statics::NewProp_PatrolIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Enemy_Statics::NewProp_DefaultWeaponClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Enemy_Statics::NewProp_StunnedRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Enemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADS1Enemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Enemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADS1Enemy_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UDS1Targeting_NoRegister, (int32)VTABLE_OFFSET(ADS1Enemy, IDS1Targeting), false },  // 4059385619
	{ Z_Construct_UClass_UDS1CombatInterface_NoRegister, (int32)VTABLE_OFFSET(ADS1Enemy, IDS1CombatInterface), false },  // 2404795361
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADS1Enemy_Statics::ClassParams = {
	&ADS1Enemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADS1Enemy_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Enemy_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Enemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ADS1Enemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADS1Enemy()
{
	if (!Z_Registration_Info_UClass_ADS1Enemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADS1Enemy.OuterSingleton, Z_Construct_UClass_ADS1Enemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADS1Enemy.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<ADS1Enemy>()
{
	return ADS1Enemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADS1Enemy);
ADS1Enemy::~ADS1Enemy() {}
// End Class ADS1Enemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Characters_DS1Enemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADS1Enemy, ADS1Enemy::StaticClass, TEXT("ADS1Enemy"), &Z_Registration_Info_UClass_ADS1Enemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADS1Enemy), 309127618U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Characters_DS1Enemy_h_1016671570(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Characters_DS1Enemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Characters_DS1Enemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
