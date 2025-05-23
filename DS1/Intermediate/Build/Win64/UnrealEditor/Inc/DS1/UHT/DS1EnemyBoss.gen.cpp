// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Characters/DS1EnemyBoss.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1EnemyBoss() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DS1_API UClass* Z_Construct_UClass_ADS1Enemy();
DS1_API UClass* Z_Construct_UClass_ADS1EnemyBoss();
DS1_API UClass* Z_Construct_UClass_ADS1EnemyBoss_NoRegister();
DS1_API UClass* Z_Construct_UClass_UDS1BossHealthBarWidget_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class ADS1EnemyBoss
void ADS1EnemyBoss::StaticRegisterNativesADS1EnemyBoss()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADS1EnemyBoss);
UClass* Z_Construct_UClass_ADS1EnemyBoss_NoRegister()
{
	return ADS1EnemyBoss::StaticClass();
}
struct Z_Construct_UClass_ADS1EnemyBoss_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/DS1EnemyBoss.h" },
		{ "ModuleRelativePath", "Characters/DS1EnemyBoss.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BossHealthBarWidgetClass_MetaData[] = {
		{ "Category", "DS1EnemyBoss" },
		{ "ModuleRelativePath", "Characters/DS1EnemyBoss.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BossHealthBarWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/DS1EnemyBoss.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BossMusicAsset_MetaData[] = {
		{ "Category", "DS1EnemyBoss" },
		{ "ModuleRelativePath", "Characters/DS1EnemyBoss.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BossMusic_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/DS1EnemyBoss.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_BossHealthBarWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BossHealthBarWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BossMusicAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BossMusic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADS1EnemyBoss>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADS1EnemyBoss_Statics::NewProp_BossHealthBarWidgetClass = { "BossHealthBarWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1EnemyBoss, BossHealthBarWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BossHealthBarWidgetClass_MetaData), NewProp_BossHealthBarWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1EnemyBoss_Statics::NewProp_BossHealthBarWidget = { "BossHealthBarWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1EnemyBoss, BossHealthBarWidget), Z_Construct_UClass_UDS1BossHealthBarWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BossHealthBarWidget_MetaData), NewProp_BossHealthBarWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1EnemyBoss_Statics::NewProp_BossMusicAsset = { "BossMusicAsset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1EnemyBoss, BossMusicAsset), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BossMusicAsset_MetaData), NewProp_BossMusicAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1EnemyBoss_Statics::NewProp_BossMusic = { "BossMusic", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1EnemyBoss, BossMusic), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BossMusic_MetaData), NewProp_BossMusic_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADS1EnemyBoss_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1EnemyBoss_Statics::NewProp_BossHealthBarWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1EnemyBoss_Statics::NewProp_BossHealthBarWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1EnemyBoss_Statics::NewProp_BossMusicAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1EnemyBoss_Statics::NewProp_BossMusic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1EnemyBoss_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADS1EnemyBoss_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADS1Enemy,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1EnemyBoss_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADS1EnemyBoss_Statics::ClassParams = {
	&ADS1EnemyBoss::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADS1EnemyBoss_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADS1EnemyBoss_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1EnemyBoss_Statics::Class_MetaDataParams), Z_Construct_UClass_ADS1EnemyBoss_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADS1EnemyBoss()
{
	if (!Z_Registration_Info_UClass_ADS1EnemyBoss.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADS1EnemyBoss.OuterSingleton, Z_Construct_UClass_ADS1EnemyBoss_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADS1EnemyBoss.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<ADS1EnemyBoss>()
{
	return ADS1EnemyBoss::StaticClass();
}
ADS1EnemyBoss::ADS1EnemyBoss() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADS1EnemyBoss);
ADS1EnemyBoss::~ADS1EnemyBoss() {}
// End Class ADS1EnemyBoss

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Characters_DS1EnemyBoss_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADS1EnemyBoss, ADS1EnemyBoss::StaticClass, TEXT("ADS1EnemyBoss"), &Z_Registration_Info_UClass_ADS1EnemyBoss, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADS1EnemyBoss), 3733763975U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Characters_DS1EnemyBoss_h_1507271503(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Characters_DS1EnemyBoss_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Characters_DS1EnemyBoss_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
