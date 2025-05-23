// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Equipments/DS1Weapon.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1Weapon() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_ADS1Equipment();
DS1_API UClass* Z_Construct_UClass_ADS1Weapon();
DS1_API UClass* Z_Construct_UClass_ADS1Weapon_NoRegister();
DS1_API UClass* Z_Construct_UClass_UDS1CombatComponent_NoRegister();
DS1_API UClass* Z_Construct_UClass_UDS1MontageActionData_NoRegister();
DS1_API UClass* Z_Construct_UClass_UDS1WeaponCollisionComponent_NoRegister();
DS1_API UEnum* Z_Construct_UEnum_DS1_ECombatType();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class ADS1Weapon
void ADS1Weapon::StaticRegisterNativesADS1Weapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADS1Weapon);
UClass* Z_Construct_UClass_ADS1Weapon_NoRegister()
{
	return ADS1Weapon::StaticClass();
}
struct Z_Construct_UClass_ADS1Weapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Equipments/DS1Weapon.h" },
		{ "ModuleRelativePath", "Equipments/DS1Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipSocketName_MetaData[] = {
		{ "Category", "Equipment | Socket" },
		{ "ModuleRelativePath", "Equipments/DS1Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnequipSocketName_MetaData[] = {
		{ "Category", "Equipment | Socket" },
		{ "ModuleRelativePath", "Equipments/DS1Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatType_MetaData[] = {
		{ "Category", "Equipment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Combat Type\n" },
#endif
		{ "ModuleRelativePath", "Equipments/DS1Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combat Type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageActionData_MetaData[] = {
		{ "Category", "Equipment | Animation" },
		{ "ModuleRelativePath", "Equipments/DS1Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponCollision_MetaData[] = {
		{ "Category", "DS1Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Equipments/DS1Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondWeaponCollision_MetaData[] = {
		{ "Category", "DS1Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Equipments/DS1Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Equipments/DS1Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaCostMap_MetaData[] = {
		{ "Category", "DS1Weapon" },
		{ "ModuleRelativePath", "Equipments/DS1Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
		{ "Category", "DS1Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xea\xb8\xb0\xeb\xb3\xb8 \xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80 */" },
#endif
		{ "ModuleRelativePath", "Equipments/DS1Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb8\xb0\xeb\xb3\xb8 \xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageMultiplierMap_MetaData[] = {
		{ "Category", "DS1Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80 \xec\x8a\xb9\xec\x88\x98 */" },
#endif
		{ "ModuleRelativePath", "Equipments/DS1Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80 \xec\x8a\xb9\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_EquipSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UnequipSocketName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CombatType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CombatType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageActionData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondWeaponCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaCostMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaminaCostMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StaminaCostMap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageMultiplierMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageMultiplierMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DamageMultiplierMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADS1Weapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADS1Weapon_Statics::NewProp_EquipSocketName = { "EquipSocketName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Weapon, EquipSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipSocketName_MetaData), NewProp_EquipSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADS1Weapon_Statics::NewProp_UnequipSocketName = { "UnequipSocketName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Weapon, UnequipSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnequipSocketName_MetaData), NewProp_UnequipSocketName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADS1Weapon_Statics::NewProp_CombatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADS1Weapon_Statics::NewProp_CombatType = { "CombatType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Weapon, CombatType), Z_Construct_UEnum_DS1_ECombatType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatType_MetaData), NewProp_CombatType_MetaData) }; // 4240672285
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Weapon_Statics::NewProp_MontageActionData = { "MontageActionData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Weapon, MontageActionData), Z_Construct_UClass_UDS1MontageActionData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageActionData_MetaData), NewProp_MontageActionData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Weapon_Statics::NewProp_WeaponCollision = { "WeaponCollision", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Weapon, WeaponCollision), Z_Construct_UClass_UDS1WeaponCollisionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponCollision_MetaData), NewProp_WeaponCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Weapon_Statics::NewProp_SecondWeaponCollision = { "SecondWeaponCollision", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Weapon, SecondWeaponCollision), Z_Construct_UClass_UDS1WeaponCollisionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondWeaponCollision_MetaData), NewProp_SecondWeaponCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Weapon_Statics::NewProp_CombatComponent = { "CombatComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Weapon, CombatComponent), Z_Construct_UClass_UDS1CombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatComponent_MetaData), NewProp_CombatComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADS1Weapon_Statics::NewProp_StaminaCostMap_ValueProp = { "StaminaCostMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADS1Weapon_Statics::NewProp_StaminaCostMap_Key_KeyProp = { "StaminaCostMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADS1Weapon_Statics::NewProp_StaminaCostMap = { "StaminaCostMap", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Weapon, StaminaCostMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaCostMap_MetaData), NewProp_StaminaCostMap_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADS1Weapon_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Weapon, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDamage_MetaData), NewProp_BaseDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADS1Weapon_Statics::NewProp_DamageMultiplierMap_ValueProp = { "DamageMultiplierMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADS1Weapon_Statics::NewProp_DamageMultiplierMap_Key_KeyProp = { "DamageMultiplierMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADS1Weapon_Statics::NewProp_DamageMultiplierMap = { "DamageMultiplierMap", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Weapon, DamageMultiplierMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageMultiplierMap_MetaData), NewProp_DamageMultiplierMap_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADS1Weapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Weapon_Statics::NewProp_EquipSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Weapon_Statics::NewProp_UnequipSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Weapon_Statics::NewProp_CombatType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Weapon_Statics::NewProp_CombatType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Weapon_Statics::NewProp_MontageActionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Weapon_Statics::NewProp_WeaponCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Weapon_Statics::NewProp_SecondWeaponCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Weapon_Statics::NewProp_CombatComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Weapon_Statics::NewProp_StaminaCostMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Weapon_Statics::NewProp_StaminaCostMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Weapon_Statics::NewProp_StaminaCostMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Weapon_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Weapon_Statics::NewProp_DamageMultiplierMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Weapon_Statics::NewProp_DamageMultiplierMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Weapon_Statics::NewProp_DamageMultiplierMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Weapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADS1Weapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADS1Equipment,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Weapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADS1Weapon_Statics::ClassParams = {
	&ADS1Weapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADS1Weapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Weapon_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Weapon_Statics::Class_MetaDataParams), Z_Construct_UClass_ADS1Weapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADS1Weapon()
{
	if (!Z_Registration_Info_UClass_ADS1Weapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADS1Weapon.OuterSingleton, Z_Construct_UClass_ADS1Weapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADS1Weapon.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<ADS1Weapon>()
{
	return ADS1Weapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADS1Weapon);
ADS1Weapon::~ADS1Weapon() {}
// End Class ADS1Weapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Equipments_DS1Weapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADS1Weapon, ADS1Weapon::StaticClass, TEXT("ADS1Weapon"), &Z_Registration_Info_UClass_ADS1Weapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADS1Weapon), 1151114028U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Equipments_DS1Weapon_h_762690974(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Equipments_DS1Weapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Equipments_DS1Weapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
