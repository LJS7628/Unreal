// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/AI/Task/BTTaskNode_UpdateMoveSpeed.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTaskNode_UpdateMoveSpeed() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
DS1_API UClass* Z_Construct_UClass_UBTTaskNode_UpdateMoveSpeed();
DS1_API UClass* Z_Construct_UClass_UBTTaskNode_UpdateMoveSpeed_NoRegister();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UBTTaskNode_UpdateMoveSpeed
void UBTTaskNode_UpdateMoveSpeed::StaticRegisterNativesUBTTaskNode_UpdateMoveSpeed()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTaskNode_UpdateMoveSpeed);
UClass* Z_Construct_UClass_UBTTaskNode_UpdateMoveSpeed_NoRegister()
{
	return UBTTaskNode_UpdateMoveSpeed::StaticClass();
}
struct Z_Construct_UClass_UBTTaskNode_UpdateMoveSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AI/Task/BTTaskNode_UpdateMoveSpeed.h" },
		{ "ModuleRelativePath", "AI/Task/BTTaskNode_UpdateMoveSpeed.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeed_MetaData[] = {
		{ "Category", "BTTaskNode_UpdateMoveSpeed" },
		{ "ModuleRelativePath", "AI/Task/BTTaskNode_UpdateMoveSpeed.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTaskNode_UpdateMoveSpeed>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTaskNode_UpdateMoveSpeed_Statics::NewProp_MaxWalkSpeed = { "MaxWalkSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTaskNode_UpdateMoveSpeed, MaxWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWalkSpeed_MetaData), NewProp_MaxWalkSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTaskNode_UpdateMoveSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTaskNode_UpdateMoveSpeed_Statics::NewProp_MaxWalkSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_UpdateMoveSpeed_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTaskNode_UpdateMoveSpeed_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_UpdateMoveSpeed_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTaskNode_UpdateMoveSpeed_Statics::ClassParams = {
	&UBTTaskNode_UpdateMoveSpeed::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTaskNode_UpdateMoveSpeed_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_UpdateMoveSpeed_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_UpdateMoveSpeed_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTaskNode_UpdateMoveSpeed_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTaskNode_UpdateMoveSpeed()
{
	if (!Z_Registration_Info_UClass_UBTTaskNode_UpdateMoveSpeed.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTaskNode_UpdateMoveSpeed.OuterSingleton, Z_Construct_UClass_UBTTaskNode_UpdateMoveSpeed_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTaskNode_UpdateMoveSpeed.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UBTTaskNode_UpdateMoveSpeed>()
{
	return UBTTaskNode_UpdateMoveSpeed::StaticClass();
}
UBTTaskNode_UpdateMoveSpeed::UBTTaskNode_UpdateMoveSpeed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTaskNode_UpdateMoveSpeed);
UBTTaskNode_UpdateMoveSpeed::~UBTTaskNode_UpdateMoveSpeed() {}
// End Class UBTTaskNode_UpdateMoveSpeed

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Task_BTTaskNode_UpdateMoveSpeed_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTaskNode_UpdateMoveSpeed, UBTTaskNode_UpdateMoveSpeed::StaticClass, TEXT("UBTTaskNode_UpdateMoveSpeed"), &Z_Registration_Info_UClass_UBTTaskNode_UpdateMoveSpeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTaskNode_UpdateMoveSpeed), 3800735558U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Task_BTTaskNode_UpdateMoveSpeed_h_3258375490(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Task_BTTaskNode_UpdateMoveSpeed_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Task_BTTaskNode_UpdateMoveSpeed_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
