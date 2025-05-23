// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Animation/AnimNotify_DS1EquipWeapon.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_DS1EquipWeapon() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_UAnimNotify_DS1EquipWeapon();
DS1_API UClass* Z_Construct_UClass_UAnimNotify_DS1EquipWeapon_NoRegister();
DS1_API UEnum* Z_Construct_UEnum_DS1_EDS1EquipmentType();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UAnimNotify_DS1EquipWeapon
void UAnimNotify_DS1EquipWeapon::StaticRegisterNativesUAnimNotify_DS1EquipWeapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_DS1EquipWeapon);
UClass* Z_Construct_UClass_UAnimNotify_DS1EquipWeapon_NoRegister()
{
	return UAnimNotify_DS1EquipWeapon::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_DS1EquipWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Equip Weapon" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimNotify_DS1EquipWeapon.h" },
		{ "ModuleRelativePath", "Animation/AnimNotify_DS1EquipWeapon.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageActionTag_MetaData[] = {
		{ "Category", "AnimNotify_DS1EquipWeapon" },
		{ "ModuleRelativePath", "Animation/AnimNotify_DS1EquipWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentType_MetaData[] = {
		{ "Category", "AnimNotify_DS1EquipWeapon" },
		{ "ModuleRelativePath", "Animation/AnimNotify_DS1EquipWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MontageActionTag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EquipmentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EquipmentType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_DS1EquipWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_DS1EquipWeapon_Statics::NewProp_MontageActionTag = { "MontageActionTag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_DS1EquipWeapon, MontageActionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageActionTag_MetaData), NewProp_MontageActionTag_MetaData) }; // 1298103297
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotify_DS1EquipWeapon_Statics::NewProp_EquipmentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimNotify_DS1EquipWeapon_Statics::NewProp_EquipmentType = { "EquipmentType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_DS1EquipWeapon, EquipmentType), Z_Construct_UEnum_DS1_EDS1EquipmentType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentType_MetaData), NewProp_EquipmentType_MetaData) }; // 3396511923
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_DS1EquipWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_DS1EquipWeapon_Statics::NewProp_MontageActionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_DS1EquipWeapon_Statics::NewProp_EquipmentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_DS1EquipWeapon_Statics::NewProp_EquipmentType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_DS1EquipWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_DS1EquipWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_DS1EquipWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_DS1EquipWeapon_Statics::ClassParams = {
	&UAnimNotify_DS1EquipWeapon::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotify_DS1EquipWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_DS1EquipWeapon_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_DS1EquipWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_DS1EquipWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_DS1EquipWeapon()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_DS1EquipWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_DS1EquipWeapon.OuterSingleton, Z_Construct_UClass_UAnimNotify_DS1EquipWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_DS1EquipWeapon.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UAnimNotify_DS1EquipWeapon>()
{
	return UAnimNotify_DS1EquipWeapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_DS1EquipWeapon);
UAnimNotify_DS1EquipWeapon::~UAnimNotify_DS1EquipWeapon() {}
// End Class UAnimNotify_DS1EquipWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotify_DS1EquipWeapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_DS1EquipWeapon, UAnimNotify_DS1EquipWeapon::StaticClass, TEXT("UAnimNotify_DS1EquipWeapon"), &Z_Registration_Info_UClass_UAnimNotify_DS1EquipWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_DS1EquipWeapon), 1280444213U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotify_DS1EquipWeapon_h_218783683(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotify_DS1EquipWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotify_DS1EquipWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
