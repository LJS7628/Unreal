// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/BehaviorTree/CBTTaskNode_Patrol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCBTTaskNode_Patrol() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCBTTaskNode_Patrol();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCBTTaskNode_Patrol_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UCBTTaskNode_Patrol::StaticRegisterNativesUCBTTaskNode_Patrol()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCBTTaskNode_Patrol);
	UClass* Z_Construct_UClass_UCBTTaskNode_Patrol_NoRegister()
	{
		return UCBTTaskNode_Patrol::StaticClass();
	}
	struct Z_Construct_UClass_UCBTTaskNode_Patrol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GoalDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/CBTTaskNode_Patrol.h" },
		{ "ModuleRelativePath", "BehaviorTree/CBTTaskNode_Patrol.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Patrol" },
		{ "ModuleRelativePath", "BehaviorTree/CBTTaskNode_Patrol.h" },
	};
#endif
	void Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((UCBTTaskNode_Patrol*)Obj)->bDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCBTTaskNode_Patrol), &Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::NewProp_bDebug_MetaData), Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::NewProp_bDebug_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::NewProp_GoalDistance_MetaData[] = {
		{ "Category", "Patrol" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xbc\xc5\xa9\n" },
#endif
		{ "ModuleRelativePath", "BehaviorTree/CBTTaskNode_Patrol.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xbc\xc5\xa9" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::NewProp_GoalDistance = { "GoalDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCBTTaskNode_Patrol, GoalDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::NewProp_GoalDistance_MetaData), Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::NewProp_GoalDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::NewProp_RandomRadius_MetaData[] = {
		{ "Category", "Patrol" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "BehaviorTree/CBTTaskNode_Patrol.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::NewProp_RandomRadius = { "RandomRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCBTTaskNode_Patrol, RandomRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::NewProp_RandomRadius_MetaData), Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::NewProp_RandomRadius_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::NewProp_bDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::NewProp_GoalDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::NewProp_RandomRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCBTTaskNode_Patrol>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::ClassParams = {
		&UCBTTaskNode_Patrol::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::Class_MetaDataParams), Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCBTTaskNode_Patrol()
	{
		if (!Z_Registration_Info_UClass_UCBTTaskNode_Patrol.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCBTTaskNode_Patrol.OuterSingleton, Z_Construct_UClass_UCBTTaskNode_Patrol_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCBTTaskNode_Patrol.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCBTTaskNode_Patrol>()
	{
		return UCBTTaskNode_Patrol::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCBTTaskNode_Patrol);
	UCBTTaskNode_Patrol::~UCBTTaskNode_Patrol() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTTaskNode_Patrol_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTTaskNode_Patrol_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCBTTaskNode_Patrol, UCBTTaskNode_Patrol::StaticClass, TEXT("UCBTTaskNode_Patrol"), &Z_Registration_Info_UClass_UCBTTaskNode_Patrol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCBTTaskNode_Patrol), 615509489U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTTaskNode_Patrol_h_546823619(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTTaskNode_Patrol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTTaskNode_Patrol_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
