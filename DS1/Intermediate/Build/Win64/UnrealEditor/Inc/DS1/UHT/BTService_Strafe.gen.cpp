// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/AI/Service/BTService_Strafe.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_Strafe() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
DS1_API UClass* Z_Construct_UClass_UBTService_Strafe();
DS1_API UClass* Z_Construct_UClass_UBTService_Strafe_NoRegister();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UBTService_Strafe
void UBTService_Strafe::StaticRegisterNativesUBTService_Strafe()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_Strafe);
UClass* Z_Construct_UClass_UBTService_Strafe_NoRegister()
{
	return UBTService_Strafe::StaticClass();
}
struct Z_Construct_UClass_UBTService_Strafe_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "AI/Service/BTService_Strafe.h" },
		{ "ModuleRelativePath", "AI/Service/BTService_Strafe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetKey_MetaData[] = {
		{ "Category", "BTService_Strafe" },
		{ "ModuleRelativePath", "AI/Service/BTService_Strafe.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[] = {
		{ "Category", "BTService_Strafe" },
		{ "ModuleRelativePath", "AI/Service/BTService_Strafe.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetKey;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_Strafe>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_Strafe_Statics::NewProp_TargetKey = { "TargetKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_Strafe, TargetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetKey_MetaData), NewProp_TargetKey_MetaData) }; // 3940742986
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_Strafe_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_Strafe, SearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchRadius_MetaData), NewProp_SearchRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_Strafe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Strafe_Statics::NewProp_TargetKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Strafe_Statics::NewProp_SearchRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Strafe_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTService_Strafe_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Strafe_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_Strafe_Statics::ClassParams = {
	&UBTService_Strafe::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTService_Strafe_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Strafe_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Strafe_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_Strafe_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_Strafe()
{
	if (!Z_Registration_Info_UClass_UBTService_Strafe.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_Strafe.OuterSingleton, Z_Construct_UClass_UBTService_Strafe_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_Strafe.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UBTService_Strafe>()
{
	return UBTService_Strafe::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_Strafe);
UBTService_Strafe::~UBTService_Strafe() {}
// End Class UBTService_Strafe

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Service_BTService_Strafe_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_Strafe, UBTService_Strafe::StaticClass, TEXT("UBTService_Strafe"), &Z_Registration_Info_UClass_UBTService_Strafe, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_Strafe), 2610018841U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Service_BTService_Strafe_h_2755199440(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Service_BTService_Strafe_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Service_BTService_Strafe_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
