// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/AI/Decorator/BTDecorator_Chance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_Chance() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
DS1_API UClass* Z_Construct_UClass_UBTDecorator_Chance();
DS1_API UClass* Z_Construct_UClass_UBTDecorator_Chance_NoRegister();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UBTDecorator_Chance
void UBTDecorator_Chance::StaticRegisterNativesUBTDecorator_Chance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_Chance);
UClass* Z_Construct_UClass_UBTDecorator_Chance_NoRegister()
{
	return UBTDecorator_Chance::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_Chance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "AI/Decorator/BTDecorator_Chance.h" },
		{ "ModuleRelativePath", "AI/Decorator/BTDecorator_Chance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChanceRate_MetaData[] = {
		{ "Category", "BTDecorator_Chance" },
		{ "ModuleRelativePath", "AI/Decorator/BTDecorator_Chance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChanceRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_Chance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBTDecorator_Chance_Statics::NewProp_ChanceRate = { "ChanceRate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_Chance, ChanceRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChanceRate_MetaData), NewProp_ChanceRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_Chance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_Chance_Statics::NewProp_ChanceRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Chance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTDecorator_Chance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Chance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_Chance_Statics::ClassParams = {
	&UBTDecorator_Chance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTDecorator_Chance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Chance_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_Chance_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_Chance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_Chance()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_Chance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_Chance.OuterSingleton, Z_Construct_UClass_UBTDecorator_Chance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_Chance.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UBTDecorator_Chance>()
{
	return UBTDecorator_Chance::StaticClass();
}
UBTDecorator_Chance::UBTDecorator_Chance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_Chance);
UBTDecorator_Chance::~UBTDecorator_Chance() {}
// End Class UBTDecorator_Chance

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Decorator_BTDecorator_Chance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_Chance, UBTDecorator_Chance::StaticClass, TEXT("UBTDecorator_Chance"), &Z_Registration_Info_UClass_UBTDecorator_Chance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_Chance), 2224287310U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Decorator_BTDecorator_Chance_h_899845942(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Decorator_BTDecorator_Chance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Decorator_BTDecorator_Chance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
