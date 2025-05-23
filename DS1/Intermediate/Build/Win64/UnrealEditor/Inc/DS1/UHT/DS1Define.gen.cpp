// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/DS1Define.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1Define() {}

// Begin Cross Module References
DS1_API UEnum* Z_Construct_UEnum_DS1_ECombatType();
DS1_API UEnum* Z_Construct_UEnum_DS1_EDS1AIBehavior();
DS1_API UEnum* Z_Construct_UEnum_DS1_EDS1ArmourType();
DS1_API UEnum* Z_Construct_UEnum_DS1_EDS1AttributeType();
DS1_API UEnum* Z_Construct_UEnum_DS1_EDS1DamageType();
DS1_API UEnum* Z_Construct_UEnum_DS1_EDS1EquipmentType();
DS1_API UEnum* Z_Construct_UEnum_DS1_EHitDirection();
DS1_API UEnum* Z_Construct_UEnum_DS1_ESwitchingDirection();
DS1_API UEnum* Z_Construct_UEnum_DS1_EWeaponCollisionType();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Enum EDS1AttributeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDS1AttributeType;
static UEnum* EDS1AttributeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDS1AttributeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDS1AttributeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DS1_EDS1AttributeType, (UObject*)Z_Construct_UPackage__Script_DS1(), TEXT("EDS1AttributeType"));
	}
	return Z_Registration_Info_UEnum_EDS1AttributeType.OuterSingleton;
}
template<> DS1_API UEnum* StaticEnum<EDS1AttributeType>()
{
	return EDS1AttributeType_StaticEnum();
}
struct Z_Construct_UEnum_DS1_EDS1AttributeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Health.Name", "EDS1AttributeType::Health" },
		{ "ModuleRelativePath", "DS1Define.h" },
		{ "Stamina.Name", "EDS1AttributeType::Stamina" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDS1AttributeType::Stamina", (int64)EDS1AttributeType::Stamina },
		{ "EDS1AttributeType::Health", (int64)EDS1AttributeType::Health },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DS1_EDS1AttributeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DS1,
	nullptr,
	"EDS1AttributeType",
	"EDS1AttributeType",
	Z_Construct_UEnum_DS1_EDS1AttributeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DS1_EDS1AttributeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DS1_EDS1AttributeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DS1_EDS1AttributeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DS1_EDS1AttributeType()
{
	if (!Z_Registration_Info_UEnum_EDS1AttributeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDS1AttributeType.InnerSingleton, Z_Construct_UEnum_DS1_EDS1AttributeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDS1AttributeType.InnerSingleton;
}
// End Enum EDS1AttributeType

// Begin Enum EHitDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHitDirection;
static UEnum* EHitDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHitDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHitDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DS1_EHitDirection, (UObject*)Z_Construct_UPackage__Script_DS1(), TEXT("EHitDirection"));
	}
	return Z_Registration_Info_UEnum_EHitDirection.OuterSingleton;
}
template<> DS1_API UEnum* StaticEnum<EHitDirection>()
{
	return EHitDirection_StaticEnum();
}
struct Z_Construct_UEnum_DS1_EHitDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Back.Name", "EHitDirection::Back" },
		{ "BlueprintType", "true" },
		{ "Front.Name", "EHitDirection::Front" },
		{ "Left.Name", "EHitDirection::Left" },
		{ "ModuleRelativePath", "DS1Define.h" },
		{ "Right.Name", "EHitDirection::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHitDirection::Front", (int64)EHitDirection::Front },
		{ "EHitDirection::Back", (int64)EHitDirection::Back },
		{ "EHitDirection::Left", (int64)EHitDirection::Left },
		{ "EHitDirection::Right", (int64)EHitDirection::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DS1_EHitDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DS1,
	nullptr,
	"EHitDirection",
	"EHitDirection",
	Z_Construct_UEnum_DS1_EHitDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DS1_EHitDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DS1_EHitDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DS1_EHitDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DS1_EHitDirection()
{
	if (!Z_Registration_Info_UEnum_EHitDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHitDirection.InnerSingleton, Z_Construct_UEnum_DS1_EHitDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHitDirection.InnerSingleton;
}
// End Enum EHitDirection

// Begin Enum ESwitchingDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESwitchingDirection;
static UEnum* ESwitchingDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESwitchingDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESwitchingDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DS1_ESwitchingDirection, (UObject*)Z_Construct_UPackage__Script_DS1(), TEXT("ESwitchingDirection"));
	}
	return Z_Registration_Info_UEnum_ESwitchingDirection.OuterSingleton;
}
template<> DS1_API UEnum* StaticEnum<ESwitchingDirection>()
{
	return ESwitchingDirection_StaticEnum();
}
struct Z_Construct_UEnum_DS1_ESwitchingDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.Name", "ESwitchingDirection::Left" },
		{ "ModuleRelativePath", "DS1Define.h" },
		{ "None.Name", "ESwitchingDirection::None" },
		{ "Right.Name", "ESwitchingDirection::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESwitchingDirection::None", (int64)ESwitchingDirection::None },
		{ "ESwitchingDirection::Left", (int64)ESwitchingDirection::Left },
		{ "ESwitchingDirection::Right", (int64)ESwitchingDirection::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DS1_ESwitchingDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DS1,
	nullptr,
	"ESwitchingDirection",
	"ESwitchingDirection",
	Z_Construct_UEnum_DS1_ESwitchingDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DS1_ESwitchingDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DS1_ESwitchingDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DS1_ESwitchingDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DS1_ESwitchingDirection()
{
	if (!Z_Registration_Info_UEnum_ESwitchingDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESwitchingDirection.InnerSingleton, Z_Construct_UEnum_DS1_ESwitchingDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESwitchingDirection.InnerSingleton;
}
// End Enum ESwitchingDirection

// Begin Enum ECombatType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECombatType;
static UEnum* ECombatType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECombatType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECombatType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DS1_ECombatType, (UObject*)Z_Construct_UPackage__Script_DS1(), TEXT("ECombatType"));
	}
	return Z_Registration_Info_UEnum_ECombatType.OuterSingleton;
}
template<> DS1_API UEnum* StaticEnum<ECombatType>()
{
	return ECombatType_StaticEnum();
}
struct Z_Construct_UEnum_DS1_ECombatType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MeleeFists.Name", "ECombatType::MeleeFists" },
		{ "ModuleRelativePath", "DS1Define.h" },
		{ "None.Name", "ECombatType::None" },
		{ "SwordShield.Name", "ECombatType::SwordShield" },
		{ "TwoHanded.Name", "ECombatType::TwoHanded" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECombatType::None", (int64)ECombatType::None },
		{ "ECombatType::SwordShield", (int64)ECombatType::SwordShield },
		{ "ECombatType::TwoHanded", (int64)ECombatType::TwoHanded },
		{ "ECombatType::MeleeFists", (int64)ECombatType::MeleeFists },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DS1_ECombatType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DS1,
	nullptr,
	"ECombatType",
	"ECombatType",
	Z_Construct_UEnum_DS1_ECombatType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DS1_ECombatType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DS1_ECombatType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DS1_ECombatType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DS1_ECombatType()
{
	if (!Z_Registration_Info_UEnum_ECombatType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECombatType.InnerSingleton, Z_Construct_UEnum_DS1_ECombatType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECombatType.InnerSingleton;
}
// End Enum ECombatType

// Begin Enum EWeaponCollisionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponCollisionType;
static UEnum* EWeaponCollisionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponCollisionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponCollisionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DS1_EWeaponCollisionType, (UObject*)Z_Construct_UPackage__Script_DS1(), TEXT("EWeaponCollisionType"));
	}
	return Z_Registration_Info_UEnum_EWeaponCollisionType.OuterSingleton;
}
template<> DS1_API UEnum* StaticEnum<EWeaponCollisionType>()
{
	return EWeaponCollisionType_StaticEnum();
}
struct Z_Construct_UEnum_DS1_EWeaponCollisionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MainCollision.Name", "EWeaponCollisionType::MainCollision" },
		{ "ModuleRelativePath", "DS1Define.h" },
		{ "SecondCollision.Name", "EWeaponCollisionType::SecondCollision" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeaponCollisionType::MainCollision", (int64)EWeaponCollisionType::MainCollision },
		{ "EWeaponCollisionType::SecondCollision", (int64)EWeaponCollisionType::SecondCollision },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DS1_EWeaponCollisionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DS1,
	nullptr,
	"EWeaponCollisionType",
	"EWeaponCollisionType",
	Z_Construct_UEnum_DS1_EWeaponCollisionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DS1_EWeaponCollisionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DS1_EWeaponCollisionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DS1_EWeaponCollisionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DS1_EWeaponCollisionType()
{
	if (!Z_Registration_Info_UEnum_EWeaponCollisionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponCollisionType.InnerSingleton, Z_Construct_UEnum_DS1_EWeaponCollisionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponCollisionType.InnerSingleton;
}
// End Enum EWeaponCollisionType

// Begin Enum EDS1AIBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDS1AIBehavior;
static UEnum* EDS1AIBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDS1AIBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDS1AIBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DS1_EDS1AIBehavior, (UObject*)Z_Construct_UPackage__Script_DS1(), TEXT("EDS1AIBehavior"));
	}
	return Z_Registration_Info_UEnum_EDS1AIBehavior.OuterSingleton;
}
template<> DS1_API UEnum* StaticEnum<EDS1AIBehavior>()
{
	return EDS1AIBehavior_StaticEnum();
}
struct Z_Construct_UEnum_DS1_EDS1AIBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Approach.Name", "EDS1AIBehavior::Approach" },
		{ "BlueprintType", "true" },
		{ "Idle.Name", "EDS1AIBehavior::Idle" },
		{ "MeleeAttack.Name", "EDS1AIBehavior::MeleeAttack" },
		{ "ModuleRelativePath", "DS1Define.h" },
		{ "Patrol.Name", "EDS1AIBehavior::Patrol" },
		{ "Strafe.Name", "EDS1AIBehavior::Strafe" },
		{ "Stunned.Name", "EDS1AIBehavior::Stunned" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDS1AIBehavior::Idle", (int64)EDS1AIBehavior::Idle },
		{ "EDS1AIBehavior::Patrol", (int64)EDS1AIBehavior::Patrol },
		{ "EDS1AIBehavior::MeleeAttack", (int64)EDS1AIBehavior::MeleeAttack },
		{ "EDS1AIBehavior::Approach", (int64)EDS1AIBehavior::Approach },
		{ "EDS1AIBehavior::Stunned", (int64)EDS1AIBehavior::Stunned },
		{ "EDS1AIBehavior::Strafe", (int64)EDS1AIBehavior::Strafe },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DS1_EDS1AIBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DS1,
	nullptr,
	"EDS1AIBehavior",
	"EDS1AIBehavior",
	Z_Construct_UEnum_DS1_EDS1AIBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DS1_EDS1AIBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DS1_EDS1AIBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DS1_EDS1AIBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DS1_EDS1AIBehavior()
{
	if (!Z_Registration_Info_UEnum_EDS1AIBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDS1AIBehavior.InnerSingleton, Z_Construct_UEnum_DS1_EDS1AIBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDS1AIBehavior.InnerSingleton;
}
// End Enum EDS1AIBehavior

// Begin Enum EDS1ArmourType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDS1ArmourType;
static UEnum* EDS1ArmourType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDS1ArmourType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDS1ArmourType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DS1_EDS1ArmourType, (UObject*)Z_Construct_UPackage__Script_DS1(), TEXT("EDS1ArmourType"));
	}
	return Z_Registration_Info_UEnum_EDS1ArmourType.OuterSingleton;
}
template<> DS1_API UEnum* StaticEnum<EDS1ArmourType>()
{
	return EDS1ArmourType_StaticEnum();
}
struct Z_Construct_UEnum_DS1_EDS1ArmourType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Boots.Name", "EDS1ArmourType::Boots" },
		{ "Chest.Name", "EDS1ArmourType::Chest" },
		{ "Gloves.Name", "EDS1ArmourType::Gloves" },
		{ "ModuleRelativePath", "DS1Define.h" },
		{ "Pants.Name", "EDS1ArmourType::Pants" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDS1ArmourType::Chest", (int64)EDS1ArmourType::Chest },
		{ "EDS1ArmourType::Pants", (int64)EDS1ArmourType::Pants },
		{ "EDS1ArmourType::Boots", (int64)EDS1ArmourType::Boots },
		{ "EDS1ArmourType::Gloves", (int64)EDS1ArmourType::Gloves },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DS1_EDS1ArmourType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DS1,
	nullptr,
	"EDS1ArmourType",
	"EDS1ArmourType",
	Z_Construct_UEnum_DS1_EDS1ArmourType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DS1_EDS1ArmourType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DS1_EDS1ArmourType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DS1_EDS1ArmourType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DS1_EDS1ArmourType()
{
	if (!Z_Registration_Info_UEnum_EDS1ArmourType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDS1ArmourType.InnerSingleton, Z_Construct_UEnum_DS1_EDS1ArmourType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDS1ArmourType.InnerSingleton;
}
// End Enum EDS1ArmourType

// Begin Enum EDS1EquipmentType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDS1EquipmentType;
static UEnum* EDS1EquipmentType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDS1EquipmentType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDS1EquipmentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DS1_EDS1EquipmentType, (UObject*)Z_Construct_UPackage__Script_DS1(), TEXT("EDS1EquipmentType"));
	}
	return Z_Registration_Info_UEnum_EDS1EquipmentType.OuterSingleton;
}
template<> DS1_API UEnum* StaticEnum<EDS1EquipmentType>()
{
	return EDS1EquipmentType_StaticEnum();
}
struct Z_Construct_UEnum_DS1_EDS1EquipmentType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DS1Define.h" },
		{ "Shield.Name", "EDS1EquipmentType::Shield" },
		{ "Weapon.Name", "EDS1EquipmentType::Weapon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDS1EquipmentType::Weapon", (int64)EDS1EquipmentType::Weapon },
		{ "EDS1EquipmentType::Shield", (int64)EDS1EquipmentType::Shield },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DS1_EDS1EquipmentType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DS1,
	nullptr,
	"EDS1EquipmentType",
	"EDS1EquipmentType",
	Z_Construct_UEnum_DS1_EDS1EquipmentType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DS1_EDS1EquipmentType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DS1_EDS1EquipmentType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DS1_EDS1EquipmentType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DS1_EDS1EquipmentType()
{
	if (!Z_Registration_Info_UEnum_EDS1EquipmentType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDS1EquipmentType.InnerSingleton, Z_Construct_UEnum_DS1_EDS1EquipmentType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDS1EquipmentType.InnerSingleton;
}
// End Enum EDS1EquipmentType

// Begin Enum EDS1DamageType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDS1DamageType;
static UEnum* EDS1DamageType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDS1DamageType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDS1DamageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DS1_EDS1DamageType, (UObject*)Z_Construct_UPackage__Script_DS1(), TEXT("EDS1DamageType"));
	}
	return Z_Registration_Info_UEnum_EDS1DamageType.OuterSingleton;
}
template<> DS1_API UEnum* StaticEnum<EDS1DamageType>()
{
	return EDS1DamageType_StaticEnum();
}
struct Z_Construct_UEnum_DS1_EDS1DamageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HitBack.Name", "EDS1DamageType::HitBack" },
		{ "KnockBack.Name", "EDS1DamageType::KnockBack" },
		{ "ModuleRelativePath", "DS1Define.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDS1DamageType::HitBack", (int64)EDS1DamageType::HitBack },
		{ "EDS1DamageType::KnockBack", (int64)EDS1DamageType::KnockBack },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DS1_EDS1DamageType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DS1,
	nullptr,
	"EDS1DamageType",
	"EDS1DamageType",
	Z_Construct_UEnum_DS1_EDS1DamageType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DS1_EDS1DamageType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DS1_EDS1DamageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DS1_EDS1DamageType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DS1_EDS1DamageType()
{
	if (!Z_Registration_Info_UEnum_EDS1DamageType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDS1DamageType.InnerSingleton, Z_Construct_UEnum_DS1_EDS1DamageType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDS1DamageType.InnerSingleton;
}
// End Enum EDS1DamageType

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_DS1Define_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDS1AttributeType_StaticEnum, TEXT("EDS1AttributeType"), &Z_Registration_Info_UEnum_EDS1AttributeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1113165802U) },
		{ EHitDirection_StaticEnum, TEXT("EHitDirection"), &Z_Registration_Info_UEnum_EHitDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3467568965U) },
		{ ESwitchingDirection_StaticEnum, TEXT("ESwitchingDirection"), &Z_Registration_Info_UEnum_ESwitchingDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 148214486U) },
		{ ECombatType_StaticEnum, TEXT("ECombatType"), &Z_Registration_Info_UEnum_ECombatType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4240672285U) },
		{ EWeaponCollisionType_StaticEnum, TEXT("EWeaponCollisionType"), &Z_Registration_Info_UEnum_EWeaponCollisionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3509697773U) },
		{ EDS1AIBehavior_StaticEnum, TEXT("EDS1AIBehavior"), &Z_Registration_Info_UEnum_EDS1AIBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1694159200U) },
		{ EDS1ArmourType_StaticEnum, TEXT("EDS1ArmourType"), &Z_Registration_Info_UEnum_EDS1ArmourType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3455327441U) },
		{ EDS1EquipmentType_StaticEnum, TEXT("EDS1EquipmentType"), &Z_Registration_Info_UEnum_EDS1EquipmentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3396511923U) },
		{ EDS1DamageType_StaticEnum, TEXT("EDS1DamageType"), &Z_Registration_Info_UEnum_EDS1DamageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 531196404U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_DS1Define_h_1134819061(TEXT("/Script/DS1"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_DS1Define_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_DS1Define_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
