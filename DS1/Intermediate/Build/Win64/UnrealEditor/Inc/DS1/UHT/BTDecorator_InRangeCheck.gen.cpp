// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/AI/Decorator/BTDecorator_InRangeCheck.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_InRangeCheck() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
DS1_API UClass* Z_Construct_UClass_UBTDecorator_InRangeCheck();
DS1_API UClass* Z_Construct_UClass_UBTDecorator_InRangeCheck_NoRegister();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UBTDecorator_InRangeCheck
void UBTDecorator_InRangeCheck::StaticRegisterNativesUBTDecorator_InRangeCheck()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_InRangeCheck);
UClass* Z_Construct_UClass_UBTDecorator_InRangeCheck_NoRegister()
{
	return UBTDecorator_InRangeCheck::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_InRangeCheck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "AI/Decorator/BTDecorator_InRangeCheck.h" },
		{ "ModuleRelativePath", "AI/Decorator/BTDecorator_InRangeCheck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetBlackboardKey_MetaData[] = {
		{ "Category", "BTDecorator_InRangeCheck" },
		{ "ModuleRelativePath", "AI/Decorator/BTDecorator_InRangeCheck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMin_MetaData[] = {
		{ "Category", "BTDecorator_InRangeCheck" },
		{ "ModuleRelativePath", "AI/Decorator/BTDecorator_InRangeCheck.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeMax_MetaData[] = {
		{ "Category", "BTDecorator_InRangeCheck" },
		{ "ModuleRelativePath", "AI/Decorator/BTDecorator_InRangeCheck.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetBlackboardKey;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_InRangeCheck>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_InRangeCheck_Statics::NewProp_TargetBlackboardKey = { "TargetBlackboardKey", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_InRangeCheck, TargetBlackboardKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetBlackboardKey_MetaData), NewProp_TargetBlackboardKey_MetaData) }; // 3940742986
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_InRangeCheck_Statics::NewProp_RangeMin = { "RangeMin", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_InRangeCheck, RangeMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMin_MetaData), NewProp_RangeMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_InRangeCheck_Statics::NewProp_RangeMax = { "RangeMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_InRangeCheck, RangeMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeMax_MetaData), NewProp_RangeMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_InRangeCheck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_InRangeCheck_Statics::NewProp_TargetBlackboardKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_InRangeCheck_Statics::NewProp_RangeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_InRangeCheck_Statics::NewProp_RangeMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_InRangeCheck_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTDecorator_InRangeCheck_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_InRangeCheck_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_InRangeCheck_Statics::ClassParams = {
	&UBTDecorator_InRangeCheck::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTDecorator_InRangeCheck_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_InRangeCheck_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_InRangeCheck_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_InRangeCheck_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_InRangeCheck()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_InRangeCheck.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_InRangeCheck.OuterSingleton, Z_Construct_UClass_UBTDecorator_InRangeCheck_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_InRangeCheck.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UBTDecorator_InRangeCheck>()
{
	return UBTDecorator_InRangeCheck::StaticClass();
}
UBTDecorator_InRangeCheck::UBTDecorator_InRangeCheck(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_InRangeCheck);
UBTDecorator_InRangeCheck::~UBTDecorator_InRangeCheck() {}
// End Class UBTDecorator_InRangeCheck

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Decorator_BTDecorator_InRangeCheck_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_InRangeCheck, UBTDecorator_InRangeCheck::StaticClass, TEXT("UBTDecorator_InRangeCheck"), &Z_Registration_Info_UClass_UBTDecorator_InRangeCheck, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_InRangeCheck), 3387434229U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Decorator_BTDecorator_InRangeCheck_h_3785378433(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Decorator_BTDecorator_InRangeCheck_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Decorator_BTDecorator_InRangeCheck_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
