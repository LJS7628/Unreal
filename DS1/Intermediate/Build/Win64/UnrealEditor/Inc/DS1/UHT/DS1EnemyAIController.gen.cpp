// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/AI/DS1EnemyAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1EnemyAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
DS1_API UClass* Z_Construct_UClass_ADS1Enemy_NoRegister();
DS1_API UClass* Z_Construct_UClass_ADS1EnemyAIController();
DS1_API UClass* Z_Construct_UClass_ADS1EnemyAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class ADS1EnemyAIController
void ADS1EnemyAIController::StaticRegisterNativesADS1EnemyAIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADS1EnemyAIController);
UClass* Z_Construct_UClass_ADS1EnemyAIController_NoRegister()
{
	return ADS1EnemyAIController::StaticClass();
}
struct Z_Construct_UClass_ADS1EnemyAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/DS1EnemyAIController.h" },
		{ "ModuleRelativePath", "AI/DS1EnemyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeAsset_MetaData[] = {
		{ "Category", "DS1EnemyAIController" },
		{ "ModuleRelativePath", "AI/DS1EnemyAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[] = {
		{ "Category", "DS1EnemyAIController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AI\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xba\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/DS1EnemyAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xba\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlledEnemy_MetaData[] = {
		{ "ModuleRelativePath", "AI/DS1EnemyAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledEnemy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADS1EnemyAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1EnemyAIController_Statics::NewProp_BehaviorTreeAsset = { "BehaviorTreeAsset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1EnemyAIController, BehaviorTreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeAsset_MetaData), NewProp_BehaviorTreeAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1EnemyAIController_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1EnemyAIController, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerceptionComponent_MetaData), NewProp_AIPerceptionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADS1EnemyAIController_Statics::NewProp_ControlledEnemy = { "ControlledEnemy", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADS1EnemyAIController, ControlledEnemy), Z_Construct_UClass_ADS1Enemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlledEnemy_MetaData), NewProp_ControlledEnemy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADS1EnemyAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1EnemyAIController_Statics::NewProp_BehaviorTreeAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1EnemyAIController_Statics::NewProp_AIPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADS1EnemyAIController_Statics::NewProp_ControlledEnemy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1EnemyAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADS1EnemyAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1EnemyAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADS1EnemyAIController_Statics::ClassParams = {
	&ADS1EnemyAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADS1EnemyAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADS1EnemyAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADS1EnemyAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADS1EnemyAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADS1EnemyAIController()
{
	if (!Z_Registration_Info_UClass_ADS1EnemyAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADS1EnemyAIController.OuterSingleton, Z_Construct_UClass_ADS1EnemyAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADS1EnemyAIController.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<ADS1EnemyAIController>()
{
	return ADS1EnemyAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADS1EnemyAIController);
ADS1EnemyAIController::~ADS1EnemyAIController() {}
// End Class ADS1EnemyAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_DS1EnemyAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADS1EnemyAIController, ADS1EnemyAIController::StaticClass, TEXT("ADS1EnemyAIController"), &Z_Registration_Info_UClass_ADS1EnemyAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADS1EnemyAIController), 2285424160U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_DS1EnemyAIController_h_2269331083(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_DS1EnemyAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_AI_DS1EnemyAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
