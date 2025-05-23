// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Animation/AnimNotify_DS1KnockBack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_DS1KnockBack() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_UAnimNotify_DS1KnockBack();
DS1_API UClass* Z_Construct_UClass_UAnimNotify_DS1KnockBack_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UAnimNotify_DS1KnockBack
void UAnimNotify_DS1KnockBack::StaticRegisterNativesUAnimNotify_DS1KnockBack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_DS1KnockBack);
UClass* Z_Construct_UClass_UAnimNotify_DS1KnockBack_NoRegister()
{
	return UAnimNotify_DS1KnockBack::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_DS1KnockBack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "DisplayName", "Knockback Damage" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimNotify_DS1KnockBack.h" },
		{ "ModuleRelativePath", "Animation/AnimNotify_DS1KnockBack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
		{ "Category", "AnimNotify_DS1KnockBack" },
		{ "ModuleRelativePath", "Animation/AnimNotify_DS1KnockBack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationSocketName_MetaData[] = {
		{ "Category", "AnimNotify_DS1KnockBack" },
		{ "ModuleRelativePath", "Animation/AnimNotify_DS1KnockBack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageRadius_MetaData[] = {
		{ "Category", "AnimNotify_DS1KnockBack" },
		{ "ModuleRelativePath", "Animation/AnimNotify_DS1KnockBack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "AnimNotify_DS1KnockBack" },
		{ "ModuleRelativePath", "Animation/AnimNotify_DS1KnockBack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LocationSocketName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageRadius;
	static void NewProp_bDrawDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_DS1KnockBack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotify_DS1KnockBack_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0020080000000011, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_DS1KnockBack, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDamage_MetaData), NewProp_BaseDamage_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_DS1KnockBack_Statics::NewProp_LocationSocketName = { "LocationSocketName", nullptr, (EPropertyFlags)0x0020080000000011, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_DS1KnockBack, LocationSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationSocketName_MetaData), NewProp_LocationSocketName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotify_DS1KnockBack_Statics::NewProp_DamageRadius = { "DamageRadius", nullptr, (EPropertyFlags)0x0020080000000011, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_DS1KnockBack, DamageRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageRadius_MetaData), NewProp_DamageRadius_MetaData) };
void Z_Construct_UClass_UAnimNotify_DS1KnockBack_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
{
	((UAnimNotify_DS1KnockBack*)Obj)->bDrawDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_DS1KnockBack_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0020080000000011, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_DS1KnockBack), &Z_Construct_UClass_UAnimNotify_DS1KnockBack_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebug_MetaData), NewProp_bDrawDebug_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_DS1KnockBack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_DS1KnockBack_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_DS1KnockBack_Statics::NewProp_LocationSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_DS1KnockBack_Statics::NewProp_DamageRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_DS1KnockBack_Statics::NewProp_bDrawDebug,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_DS1KnockBack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_DS1KnockBack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_DS1KnockBack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_DS1KnockBack_Statics::ClassParams = {
	&UAnimNotify_DS1KnockBack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotify_DS1KnockBack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_DS1KnockBack_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_DS1KnockBack_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_DS1KnockBack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_DS1KnockBack()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_DS1KnockBack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_DS1KnockBack.OuterSingleton, Z_Construct_UClass_UAnimNotify_DS1KnockBack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_DS1KnockBack.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UAnimNotify_DS1KnockBack>()
{
	return UAnimNotify_DS1KnockBack::StaticClass();
}
UAnimNotify_DS1KnockBack::UAnimNotify_DS1KnockBack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_DS1KnockBack);
UAnimNotify_DS1KnockBack::~UAnimNotify_DS1KnockBack() {}
// End Class UAnimNotify_DS1KnockBack

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotify_DS1KnockBack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_DS1KnockBack, UAnimNotify_DS1KnockBack::StaticClass, TEXT("UAnimNotify_DS1KnockBack"), &Z_Registration_Info_UClass_UAnimNotify_DS1KnockBack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_DS1KnockBack), 315124699U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotify_DS1KnockBack_h_3899711961(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotify_DS1KnockBack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_AnimNotify_DS1KnockBack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
