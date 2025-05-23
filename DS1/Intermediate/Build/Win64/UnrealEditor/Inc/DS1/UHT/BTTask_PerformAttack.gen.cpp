// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/AI/Task/BTTask_PerformAttack.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PerformAttack() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
DS1_API UClass* Z_Construct_UClass_UBTTask_PerformAttack();
DS1_API UClass* Z_Construct_UClass_UBTTask_PerformAttack_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UBTTask_PerformAttack
void UBTTask_PerformAttack::StaticRegisterNativesUBTTask_PerformAttack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_PerformAttack);
UClass* Z_Construct_UClass_UBTTask_PerformAttack_NoRegister()
{
	return UBTTask_PerformAttack::StaticClass();
}
struct Z_Construct_UClass_UBTTask_PerformAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AI/Task/BTTask_PerformAttack.h" },
		{ "ModuleRelativePath", "AI/Task/BTTask_PerformAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTypeTag_MetaData[] = {
		{ "Category", "BTTask_PerformAttack" },
		{ "ModuleRelativePath", "AI/Task/BTTask_PerformAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackTypeTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PerformAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_PerformAttack_Statics::NewProp_AttackTypeTag = { "AttackTypeTag", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_PerformAttack, AttackTypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTypeTag_MetaData), NewProp_AttackTypeTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_PerformAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PerformAttack_Statics::NewProp_AttackTypeTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PerformAttack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_PerformAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PerformAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PerformAttack_Statics::ClassParams = {
	&UBTTask_PerformAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_PerformAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PerformAttack_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PerformAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_PerformAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_PerformAttack()
{
	if (!Z_Registration_Info_UClass_UBTTask_PerformAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_PerformAttack.OuterSingleton, Z_Construct_UClass_UBTTask_PerformAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_PerformAttack.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UBTTask_PerformAttack>()
{
	return UBTTask_PerformAttack::StaticClass();
}
UBTTask_PerformAttack::UBTTask_PerformAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PerformAttack);
UBTTask_PerformAttack::~UBTTask_PerformAttack() {}
// End Class UBTTask_PerformAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Task_BTTask_PerformAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_PerformAttack, UBTTask_PerformAttack::StaticClass, TEXT("UBTTask_PerformAttack"), &Z_Registration_Info_UClass_UBTTask_PerformAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_PerformAttack), 455703184U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Task_BTTask_PerformAttack_h_2686216824(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Task_BTTask_PerformAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Task_BTTask_PerformAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
