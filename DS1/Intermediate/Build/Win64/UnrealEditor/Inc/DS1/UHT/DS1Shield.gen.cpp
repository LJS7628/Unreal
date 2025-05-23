// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Equipments/DS1Shield.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1Shield() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_ADS1Equipment();
DS1_API UClass* Z_Construct_UClass_ADS1Shield();
DS1_API UClass* Z_Construct_UClass_ADS1Shield_NoRegister();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class ADS1Shield
void ADS1Shield::StaticRegisterNativesADS1Shield()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADS1Shield);
UClass* Z_Construct_UClass_ADS1Shield_NoRegister()
{
	return ADS1Shield::StaticClass();
}
struct Z_Construct_UClass_ADS1Shield_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Equipments/DS1Shield.h" },
		{ "ModuleRelativePath", "Equipments/DS1Shield.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipSocketName_MetaData[] = {
		{ "Category", "DS1Shield" },
		{ "ModuleRelativePath", "Equipments/DS1Shield.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnequipSocketName_MetaData[] = {
		{ "Category", "DS1Shield" },
		{ "ModuleRelativePath", "Equipments/DS1Shield.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_EquipSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UnequipSocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADS1Shield>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADS1Shield_Statics::NewProp_EquipSocketName = { "EquipSocketName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Shield, EquipSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipSocketName_MetaData), NewProp_EquipSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADS1Shield_Statics::NewProp_UnequipSocketName = { "UnequipSocketName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Shield, UnequipSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnequipSocketName_MetaData), NewProp_UnequipSocketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADS1Shield_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Shield_Statics::NewProp_EquipSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Shield_Statics::NewProp_UnequipSocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Shield_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADS1Shield_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADS1Equipment,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Shield_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADS1Shield_Statics::ClassParams = {
	&ADS1Shield::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADS1Shield_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Shield_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Shield_Statics::Class_MetaDataParams), Z_Construct_UClass_ADS1Shield_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADS1Shield()
{
	if (!Z_Registration_Info_UClass_ADS1Shield.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADS1Shield.OuterSingleton, Z_Construct_UClass_ADS1Shield_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADS1Shield.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<ADS1Shield>()
{
	return ADS1Shield::StaticClass();
}
ADS1Shield::ADS1Shield() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADS1Shield);
ADS1Shield::~ADS1Shield() {}
// End Class ADS1Shield

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Equipments_DS1Shield_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADS1Shield, ADS1Shield::StaticClass, TEXT("ADS1Shield"), &Z_Registration_Info_UClass_ADS1Shield, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADS1Shield), 1649528029U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Equipments_DS1Shield_h_2381464313(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Equipments_DS1Shield_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Equipments_DS1Shield_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
