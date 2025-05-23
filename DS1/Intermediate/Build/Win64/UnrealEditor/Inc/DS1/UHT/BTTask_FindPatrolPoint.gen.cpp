// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/AI/Task/BTTask_FindPatrolPoint.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_FindPatrolPoint() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
DS1_API UClass* Z_Construct_UClass_UBTTask_FindPatrolPoint();
DS1_API UClass* Z_Construct_UClass_UBTTask_FindPatrolPoint_NoRegister();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UBTTask_FindPatrolPoint
void UBTTask_FindPatrolPoint::StaticRegisterNativesUBTTask_FindPatrolPoint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_FindPatrolPoint);
UClass* Z_Construct_UClass_UBTTask_FindPatrolPoint_NoRegister()
{
	return UBTTask_FindPatrolPoint::StaticClass();
}
struct Z_Construct_UClass_UBTTask_FindPatrolPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AI/Task/BTTask_FindPatrolPoint.h" },
		{ "ModuleRelativePath", "AI/Task/BTTask_FindPatrolPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardLocation_MetaData[] = {
		{ "Category", "BTTask_FindPatrolPoint" },
		{ "ModuleRelativePath", "AI/Task/BTTask_FindPatrolPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlackboardLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FindPatrolPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_FindPatrolPoint_Statics::NewProp_BlackboardLocation = { "BlackboardLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FindPatrolPoint, BlackboardLocation), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardLocation_MetaData), NewProp_BlackboardLocation_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_FindPatrolPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindPatrolPoint_Statics::NewProp_BlackboardLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindPatrolPoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_FindPatrolPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindPatrolPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FindPatrolPoint_Statics::ClassParams = {
	&UBTTask_FindPatrolPoint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_FindPatrolPoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindPatrolPoint_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindPatrolPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_FindPatrolPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_FindPatrolPoint()
{
	if (!Z_Registration_Info_UClass_UBTTask_FindPatrolPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_FindPatrolPoint.OuterSingleton, Z_Construct_UClass_UBTTask_FindPatrolPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_FindPatrolPoint.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UBTTask_FindPatrolPoint>()
{
	return UBTTask_FindPatrolPoint::StaticClass();
}
UBTTask_FindPatrolPoint::UBTTask_FindPatrolPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FindPatrolPoint);
UBTTask_FindPatrolPoint::~UBTTask_FindPatrolPoint() {}
// End Class UBTTask_FindPatrolPoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Task_BTTask_FindPatrolPoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_FindPatrolPoint, UBTTask_FindPatrolPoint::StaticClass, TEXT("UBTTask_FindPatrolPoint"), &Z_Registration_Info_UClass_UBTTask_FindPatrolPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_FindPatrolPoint), 1216753190U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Task_BTTask_FindPatrolPoint_h_2482168352(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Task_BTTask_FindPatrolPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_Task_BTTask_FindPatrolPoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
