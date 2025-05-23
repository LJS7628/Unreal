// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Player/DS1PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1PlayerController() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_ADS1PlayerController();
DS1_API UClass* Z_Construct_UClass_ADS1PlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class ADS1PlayerController
void ADS1PlayerController::StaticRegisterNativesADS1PlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADS1PlayerController);
UClass* Z_Construct_UClass_ADS1PlayerController_NoRegister()
{
	return ADS1PlayerController::StaticClass();
}
struct Z_Construct_UClass_ADS1PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/DS1PlayerController.h" },
		{ "ModuleRelativePath", "Player/DS1PlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADS1PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADS1PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADS1PlayerController_Statics::ClassParams = {
	&ADS1PlayerController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADS1PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADS1PlayerController()
{
	if (!Z_Registration_Info_UClass_ADS1PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADS1PlayerController.OuterSingleton, Z_Construct_UClass_ADS1PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADS1PlayerController.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<ADS1PlayerController>()
{
	return ADS1PlayerController::StaticClass();
}
ADS1PlayerController::ADS1PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADS1PlayerController);
ADS1PlayerController::~ADS1PlayerController() {}
// End Class ADS1PlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Player_DS1PlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADS1PlayerController, ADS1PlayerController::StaticClass, TEXT("ADS1PlayerController"), &Z_Registration_Info_UClass_ADS1PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADS1PlayerController), 4281450296U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Player_DS1PlayerController_h_3177784430(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Player_DS1PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Player_DS1PlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
