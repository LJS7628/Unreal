// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Equipments/DS1FistWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1FistWeapon() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_ADS1FistWeapon();
DS1_API UClass* Z_Construct_UClass_ADS1FistWeapon_NoRegister();
DS1_API UClass* Z_Construct_UClass_ADS1Weapon();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class ADS1FistWeapon
void ADS1FistWeapon::StaticRegisterNativesADS1FistWeapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADS1FistWeapon);
UClass* Z_Construct_UClass_ADS1FistWeapon_NoRegister()
{
	return ADS1FistWeapon::StaticClass();
}
struct Z_Construct_UClass_ADS1FistWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Equipments/DS1FistWeapon.h" },
		{ "ModuleRelativePath", "Equipments/DS1FistWeapon.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADS1FistWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADS1FistWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADS1Weapon,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1FistWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADS1FistWeapon_Statics::ClassParams = {
	&ADS1FistWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1FistWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_ADS1FistWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADS1FistWeapon()
{
	if (!Z_Registration_Info_UClass_ADS1FistWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADS1FistWeapon.OuterSingleton, Z_Construct_UClass_ADS1FistWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADS1FistWeapon.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<ADS1FistWeapon>()
{
	return ADS1FistWeapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADS1FistWeapon);
ADS1FistWeapon::~ADS1FistWeapon() {}
// End Class ADS1FistWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Equipments_DS1FistWeapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADS1FistWeapon, ADS1FistWeapon::StaticClass, TEXT("ADS1FistWeapon"), &Z_Registration_Info_UClass_ADS1FistWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADS1FistWeapon), 446883688U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Equipments_DS1FistWeapon_h_3262527767(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Equipments_DS1FistWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Equipments_DS1FistWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
