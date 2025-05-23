// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Animation/AnimNotify_DS1PotionDrink.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_DS1PotionDrink() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_UAnimNotify_DS1PotionDrink();
DS1_API UClass* Z_Construct_UClass_UAnimNotify_DS1PotionDrink_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UAnimNotify_DS1PotionDrink
void UAnimNotify_DS1PotionDrink::StaticRegisterNativesUAnimNotify_DS1PotionDrink()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_DS1PotionDrink);
UClass* Z_Construct_UClass_UAnimNotify_DS1PotionDrink_NoRegister()
{
	return UAnimNotify_DS1PotionDrink::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_DS1PotionDrink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "DisplayName", "Potion Drink" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimNotify_DS1PotionDrink.h" },
		{ "ModuleRelativePath", "Animation/AnimNotify_DS1PotionDrink.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_DS1PotionDrink>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotify_DS1PotionDrink_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_DS1PotionDrink_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_DS1PotionDrink_Statics::ClassParams = {
	&UAnimNotify_DS1PotionDrink::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_DS1PotionDrink_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_DS1PotionDrink_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_DS1PotionDrink()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_DS1PotionDrink.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_DS1PotionDrink.OuterSingleton, Z_Construct_UClass_UAnimNotify_DS1PotionDrink_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_DS1PotionDrink.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UAnimNotify_DS1PotionDrink>()
{
	return UAnimNotify_DS1PotionDrink::StaticClass();
}
UAnimNotify_DS1PotionDrink::UAnimNotify_DS1PotionDrink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_DS1PotionDrink);
UAnimNotify_DS1PotionDrink::~UAnimNotify_DS1PotionDrink() {}
// End Class UAnimNotify_DS1PotionDrink

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotify_DS1PotionDrink_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_DS1PotionDrink, UAnimNotify_DS1PotionDrink::StaticClass, TEXT("UAnimNotify_DS1PotionDrink"), &Z_Registration_Info_UClass_UAnimNotify_DS1PotionDrink, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_DS1PotionDrink), 2601383155U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotify_DS1PotionDrink_h_517909710(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotify_DS1PotionDrink_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotify_DS1PotionDrink_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
