// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Equipments/DS1Armour.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1Armour() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_ADS1Armour();
DS1_API UClass* Z_Construct_UClass_ADS1Armour_NoRegister();
DS1_API UClass* Z_Construct_UClass_ADS1Equipment();
DS1_API UEnum* Z_Construct_UEnum_DS1_EDS1ArmourType();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class ADS1Armour
void ADS1Armour::StaticRegisterNativesADS1Armour()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADS1Armour);
UClass* Z_Construct_UClass_ADS1Armour_NoRegister()
{
	return ADS1Armour::StaticClass();
}
struct Z_Construct_UClass_ADS1Armour_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Equipments/DS1Armour.h" },
		{ "ModuleRelativePath", "Equipments/DS1Armour.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmourType_MetaData[] = {
		{ "Category", "Equipment | Armour" },
		{ "ModuleRelativePath", "Equipments/DS1Armour.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefenseAmount_MetaData[] = {
		{ "Category", "Equipment | Armour" },
		{ "ModuleRelativePath", "Equipments/DS1Armour.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ArmourType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ArmourType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefenseAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADS1Armour>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADS1Armour_Statics::NewProp_ArmourType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADS1Armour_Statics::NewProp_ArmourType = { "ArmourType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Armour, ArmourType), Z_Construct_UEnum_DS1_EDS1ArmourType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmourType_MetaData), NewProp_ArmourType_MetaData) }; // 3455327441
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADS1Armour_Statics::NewProp_DefenseAmount = { "DefenseAmount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Armour, DefenseAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefenseAmount_MetaData), NewProp_DefenseAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADS1Armour_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Armour_Statics::NewProp_ArmourType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Armour_Statics::NewProp_ArmourType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Armour_Statics::NewProp_DefenseAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Armour_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADS1Armour_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADS1Equipment,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Armour_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADS1Armour_Statics::ClassParams = {
	&ADS1Armour::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADS1Armour_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Armour_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Armour_Statics::Class_MetaDataParams), Z_Construct_UClass_ADS1Armour_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADS1Armour()
{
	if (!Z_Registration_Info_UClass_ADS1Armour.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADS1Armour.OuterSingleton, Z_Construct_UClass_ADS1Armour_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADS1Armour.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<ADS1Armour>()
{
	return ADS1Armour::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADS1Armour);
ADS1Armour::~ADS1Armour() {}
// End Class ADS1Armour

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Equipments_DS1Armour_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADS1Armour, ADS1Armour::StaticClass, TEXT("ADS1Armour"), &Z_Registration_Info_UClass_ADS1Armour, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADS1Armour), 1783664681U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Equipments_DS1Armour_h_1648981405(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Equipments_DS1Armour_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Equipments_DS1Armour_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
