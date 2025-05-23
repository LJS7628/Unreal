// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/GameModes/DS1GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1GameMode() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_ADS1GameMode();
DS1_API UClass* Z_Construct_UClass_ADS1GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class ADS1GameMode
void ADS1GameMode::StaticRegisterNativesADS1GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADS1GameMode);
UClass* Z_Construct_UClass_ADS1GameMode_NoRegister()
{
	return ADS1GameMode::StaticClass();
}
struct Z_Construct_UClass_ADS1GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/DS1GameMode.h" },
		{ "ModuleRelativePath", "GameModes/DS1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADS1GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADS1GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADS1GameMode_Statics::ClassParams = {
	&ADS1GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADS1GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADS1GameMode()
{
	if (!Z_Registration_Info_UClass_ADS1GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADS1GameMode.OuterSingleton, Z_Construct_UClass_ADS1GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADS1GameMode.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<ADS1GameMode>()
{
	return ADS1GameMode::StaticClass();
}
ADS1GameMode::ADS1GameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADS1GameMode);
ADS1GameMode::~ADS1GameMode() {}
// End Class ADS1GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_GameModes_DS1GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADS1GameMode, ADS1GameMode::StaticClass, TEXT("ADS1GameMode"), &Z_Registration_Info_UClass_ADS1GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADS1GameMode), 2159079114U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_GameModes_DS1GameMode_h_3839220655(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_GameModes_DS1GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_GameModes_DS1GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
