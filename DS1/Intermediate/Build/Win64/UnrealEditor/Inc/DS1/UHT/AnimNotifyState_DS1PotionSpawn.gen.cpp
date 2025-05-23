// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Animation/AnimNotifyState_DS1PotionSpawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_DS1PotionSpawn() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_UAnimNotifyState_DS1PotionSpawn();
DS1_API UClass* Z_Construct_UClass_UAnimNotifyState_DS1PotionSpawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UAnimNotifyState_DS1PotionSpawn
void UAnimNotifyState_DS1PotionSpawn::StaticRegisterNativesUAnimNotifyState_DS1PotionSpawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_DS1PotionSpawn);
UClass* Z_Construct_UClass_UAnimNotifyState_DS1PotionSpawn_NoRegister()
{
	return UAnimNotifyState_DS1PotionSpawn::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_DS1PotionSpawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "DisplayName", "Potion Spawn" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimNotifyState_DS1PotionSpawn.h" },
		{ "ModuleRelativePath", "Animation/AnimNotifyState_DS1PotionSpawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_DS1PotionSpawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotifyState_DS1PotionSpawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_DS1PotionSpawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_DS1PotionSpawn_Statics::ClassParams = {
	&UAnimNotifyState_DS1PotionSpawn::StaticClass,
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
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_DS1PotionSpawn_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_DS1PotionSpawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_DS1PotionSpawn()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_DS1PotionSpawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_DS1PotionSpawn.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_DS1PotionSpawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_DS1PotionSpawn.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UAnimNotifyState_DS1PotionSpawn>()
{
	return UAnimNotifyState_DS1PotionSpawn::StaticClass();
}
UAnimNotifyState_DS1PotionSpawn::UAnimNotifyState_DS1PotionSpawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_DS1PotionSpawn);
UAnimNotifyState_DS1PotionSpawn::~UAnimNotifyState_DS1PotionSpawn() {}
// End Class UAnimNotifyState_DS1PotionSpawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotifyState_DS1PotionSpawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_DS1PotionSpawn, UAnimNotifyState_DS1PotionSpawn::StaticClass, TEXT("UAnimNotifyState_DS1PotionSpawn"), &Z_Registration_Info_UClass_UAnimNotifyState_DS1PotionSpawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_DS1PotionSpawn), 578483385U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotifyState_DS1PotionSpawn_h_1522661377(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotifyState_DS1PotionSpawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotifyState_DS1PotionSpawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
