// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DS1Define.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DS1_DS1Define_generated_h
#error "DS1Define.generated.h already included, missing '#pragma once' in DS1Define.h"
#endif
#define DS1_DS1Define_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DS1_Source_DS1_DS1Define_h


#define FOREACH_ENUM_EDS1ATTRIBUTETYPE(op) \
	op(EDS1AttributeType::Stamina) \
	op(EDS1AttributeType::Health) 

enum class EDS1AttributeType : uint8;
template<> struct TIsUEnumClass<EDS1AttributeType> { enum { Value = true }; };
template<> DS1_API UEnum* StaticEnum<EDS1AttributeType>();

#define FOREACH_ENUM_EHITDIRECTION(op) \
	op(EHitDirection::Front) \
	op(EHitDirection::Back) \
	op(EHitDirection::Left) \
	op(EHitDirection::Right) 

enum class EHitDirection : uint8;
template<> struct TIsUEnumClass<EHitDirection> { enum { Value = true }; };
template<> DS1_API UEnum* StaticEnum<EHitDirection>();

#define FOREACH_ENUM_ESWITCHINGDIRECTION(op) \
	op(ESwitchingDirection::None) \
	op(ESwitchingDirection::Left) \
	op(ESwitchingDirection::Right) 

enum class ESwitchingDirection : uint8;
template<> struct TIsUEnumClass<ESwitchingDirection> { enum { Value = true }; };
template<> DS1_API UEnum* StaticEnum<ESwitchingDirection>();

#define FOREACH_ENUM_ECOMBATTYPE(op) \
	op(ECombatType::None) \
	op(ECombatType::SwordShield) \
	op(ECombatType::TwoHanded) \
	op(ECombatType::MeleeFists) 

enum class ECombatType : uint8;
template<> struct TIsUEnumClass<ECombatType> { enum { Value = true }; };
template<> DS1_API UEnum* StaticEnum<ECombatType>();

#define FOREACH_ENUM_EWEAPONCOLLISIONTYPE(op) \
	op(EWeaponCollisionType::MainCollision) \
	op(EWeaponCollisionType::SecondCollision) 

enum class EWeaponCollisionType : uint8;
template<> struct TIsUEnumClass<EWeaponCollisionType> { enum { Value = true }; };
template<> DS1_API UEnum* StaticEnum<EWeaponCollisionType>();

#define FOREACH_ENUM_EDS1AIBEHAVIOR(op) \
	op(EDS1AIBehavior::Idle) \
	op(EDS1AIBehavior::Patrol) \
	op(EDS1AIBehavior::MeleeAttack) \
	op(EDS1AIBehavior::Approach) \
	op(EDS1AIBehavior::Stunned) \
	op(EDS1AIBehavior::Strafe) 

enum class EDS1AIBehavior : uint8;
template<> struct TIsUEnumClass<EDS1AIBehavior> { enum { Value = true }; };
template<> DS1_API UEnum* StaticEnum<EDS1AIBehavior>();

#define FOREACH_ENUM_EDS1ARMOURTYPE(op) \
	op(EDS1ArmourType::Chest) \
	op(EDS1ArmourType::Pants) \
	op(EDS1ArmourType::Boots) \
	op(EDS1ArmourType::Gloves) 

enum class EDS1ArmourType : uint8;
template<> struct TIsUEnumClass<EDS1ArmourType> { enum { Value = true }; };
template<> DS1_API UEnum* StaticEnum<EDS1ArmourType>();

#define FOREACH_ENUM_EDS1EQUIPMENTTYPE(op) \
	op(EDS1EquipmentType::Weapon) \
	op(EDS1EquipmentType::Shield) 

enum class EDS1EquipmentType : uint8;
template<> struct TIsUEnumClass<EDS1EquipmentType> { enum { Value = true }; };
template<> DS1_API UEnum* StaticEnum<EDS1EquipmentType>();

#define FOREACH_ENUM_EDS1DAMAGETYPE(op) \
	op(EDS1DamageType::HitBack) \
	op(EDS1DamageType::KnockBack) 

enum class EDS1DamageType : uint8;
template<> struct TIsUEnumClass<EDS1DamageType> { enum { Value = true }; };
template<> DS1_API UEnum* StaticEnum<EDS1DamageType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
