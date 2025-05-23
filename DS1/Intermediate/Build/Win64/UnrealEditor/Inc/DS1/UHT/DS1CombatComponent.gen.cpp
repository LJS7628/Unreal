// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Components/DS1CombatComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1CombatComponent() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_ADS1Armour_NoRegister();
DS1_API UClass* Z_Construct_UClass_ADS1Shield_NoRegister();
DS1_API UClass* Z_Construct_UClass_ADS1Weapon_NoRegister();
DS1_API UClass* Z_Construct_UClass_UDS1CombatComponent();
DS1_API UClass* Z_Construct_UClass_UDS1CombatComponent_NoRegister();
DS1_API UEnum* Z_Construct_UEnum_DS1_EDS1ArmourType();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UDS1CombatComponent
void UDS1CombatComponent::StaticRegisterNativesUDS1CombatComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDS1CombatComponent);
UClass* Z_Construct_UClass_UDS1CombatComponent_NoRegister()
{
	return UDS1CombatComponent::StaticClass();
}
struct Z_Construct_UClass_UDS1CombatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/DS1CombatComponent.h" },
		{ "ModuleRelativePath", "Components/DS1CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Components/DS1CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmourMap_MetaData[] = {
		{ "ModuleRelativePath", "Components/DS1CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shield_MetaData[] = {
		{ "ModuleRelativePath", "Components/DS1CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCombatEnabled_MetaData[] = {
		{ "Category", "DS1CombatComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \xec\xa0\x84\xed\x88\xac \xed\x99\x9c\xec\x84\xb1\xed\x99\x94 \xec\x83\x81\xed\x83\x9c\xec\x9d\xb8\xec\xa7\x80? */" },
#endif
		{ "ModuleRelativePath", "Components/DS1CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa0\x84\xed\x88\xac \xed\x99\x9c\xec\x84\xb1\xed\x99\x94 \xec\x83\x81\xed\x83\x9c\xec\x9d\xb8\xec\xa7\x80?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlockingEnabled_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\xb0\xa9\xec\x96\xb4 \xec\x9e\x90\xec\x84\xb8\xeb\xa5\xbc \xec\xb7\xa8\xed\x95\x98\xea\xb3\xa0 \xec\x9e\x88\xeb\x8a\x94\xec\xa7\x80*/" },
#endif
		{ "ModuleRelativePath", "Components/DS1CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb0\xa9\xec\x96\xb4 \xec\x9e\x90\xec\x84\xb8\xeb\xa5\xbc \xec\xb7\xa8\xed\x95\x98\xea\xb3\xa0 \xec\x9e\x88\xeb\x8a\x94\xec\xa7\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastAttackType_MetaData[] = {
		{ "Category", "DS1CombatComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\xa7\x88\xec\xa7\x80\xeb\xa7\x89 AttackType */" },
#endif
		{ "ModuleRelativePath", "Components/DS1CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa7\x88\xec\xa7\x80\xeb\xa7\x89 AttackType" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArmourMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ArmourMap_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ArmourMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ArmourMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Shield;
	static void NewProp_bCombatEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCombatEnabled;
	static void NewProp_bBlockingEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockingEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastAttackType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDS1CombatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDS1CombatComponent_Statics::NewProp_MainWeapon = { "MainWeapon", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1CombatComponent, MainWeapon), Z_Construct_UClass_ADS1Weapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainWeapon_MetaData), NewProp_MainWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDS1CombatComponent_Statics::NewProp_ArmourMap_ValueProp = { "ArmourMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ADS1Armour_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDS1CombatComponent_Statics::NewProp_ArmourMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDS1CombatComponent_Statics::NewProp_ArmourMap_Key_KeyProp = { "ArmourMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DS1_EDS1ArmourType, METADATA_PARAMS(0, nullptr) }; // 3455327441
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDS1CombatComponent_Statics::NewProp_ArmourMap = { "ArmourMap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1CombatComponent, ArmourMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmourMap_MetaData), NewProp_ArmourMap_MetaData) }; // 3455327441
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDS1CombatComponent_Statics::NewProp_Shield = { "Shield", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1CombatComponent, Shield), Z_Construct_UClass_ADS1Shield_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shield_MetaData), NewProp_Shield_MetaData) };
void Z_Construct_UClass_UDS1CombatComponent_Statics::NewProp_bCombatEnabled_SetBit(void* Obj)
{
	((UDS1CombatComponent*)Obj)->bCombatEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDS1CombatComponent_Statics::NewProp_bCombatEnabled = { "bCombatEnabled", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDS1CombatComponent), &Z_Construct_UClass_UDS1CombatComponent_Statics::NewProp_bCombatEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCombatEnabled_MetaData), NewProp_bCombatEnabled_MetaData) };
void Z_Construct_UClass_UDS1CombatComponent_Statics::NewProp_bBlockingEnabled_SetBit(void* Obj)
{
	((UDS1CombatComponent*)Obj)->bBlockingEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDS1CombatComponent_Statics::NewProp_bBlockingEnabled = { "bBlockingEnabled", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDS1CombatComponent), &Z_Construct_UClass_UDS1CombatComponent_Statics::NewProp_bBlockingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlockingEnabled_MetaData), NewProp_bBlockingEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDS1CombatComponent_Statics::NewProp_LastAttackType = { "LastAttackType", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1CombatComponent, LastAttackType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastAttackType_MetaData), NewProp_LastAttackType_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDS1CombatComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1CombatComponent_Statics::NewProp_MainWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1CombatComponent_Statics::NewProp_ArmourMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1CombatComponent_Statics::NewProp_ArmourMap_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1CombatComponent_Statics::NewProp_ArmourMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1CombatComponent_Statics::NewProp_ArmourMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1CombatComponent_Statics::NewProp_Shield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1CombatComponent_Statics::NewProp_bCombatEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1CombatComponent_Statics::NewProp_bBlockingEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1CombatComponent_Statics::NewProp_LastAttackType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1CombatComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDS1CombatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1CombatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDS1CombatComponent_Statics::ClassParams = {
	&UDS1CombatComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDS1CombatComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDS1CombatComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1CombatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDS1CombatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDS1CombatComponent()
{
	if (!Z_Registration_Info_UClass_UDS1CombatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDS1CombatComponent.OuterSingleton, Z_Construct_UClass_UDS1CombatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDS1CombatComponent.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UDS1CombatComponent>()
{
	return UDS1CombatComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDS1CombatComponent);
UDS1CombatComponent::~UDS1CombatComponent() {}
// End Class UDS1CombatComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Components_DS1CombatComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDS1CombatComponent, UDS1CombatComponent::StaticClass, TEXT("UDS1CombatComponent"), &Z_Registration_Info_UClass_UDS1CombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDS1CombatComponent), 2414748281U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Components_DS1CombatComponent_h_375345271(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Components_DS1CombatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Components_DS1CombatComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
