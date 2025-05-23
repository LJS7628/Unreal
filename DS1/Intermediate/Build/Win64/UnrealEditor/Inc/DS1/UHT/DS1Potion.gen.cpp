// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Items/DS1Potion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1Potion() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_ADS1Potion();
DS1_API UClass* Z_Construct_UClass_ADS1Potion_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class ADS1Potion
void ADS1Potion::StaticRegisterNativesADS1Potion()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADS1Potion);
UClass* Z_Construct_UClass_ADS1Potion_NoRegister()
{
	return ADS1Potion::StaticClass();
}
struct Z_Construct_UClass_ADS1Potion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Items/DS1Potion.h" },
		{ "ModuleRelativePath", "Items/DS1Potion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "DS1Potion" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Items/DS1Potion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADS1Potion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1Potion_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1Potion, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADS1Potion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1Potion_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Potion_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADS1Potion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Potion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADS1Potion_Statics::ClassParams = {
	&ADS1Potion::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADS1Potion_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Potion_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1Potion_Statics::Class_MetaDataParams), Z_Construct_UClass_ADS1Potion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADS1Potion()
{
	if (!Z_Registration_Info_UClass_ADS1Potion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADS1Potion.OuterSingleton, Z_Construct_UClass_ADS1Potion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADS1Potion.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<ADS1Potion>()
{
	return ADS1Potion::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADS1Potion);
ADS1Potion::~ADS1Potion() {}
// End Class ADS1Potion

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Items_DS1Potion_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADS1Potion, ADS1Potion::StaticClass, TEXT("ADS1Potion"), &Z_Registration_Info_UClass_ADS1Potion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADS1Potion), 133633141U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Items_DS1Potion_h_1618302094(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Items_DS1Potion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Items_DS1Potion_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
