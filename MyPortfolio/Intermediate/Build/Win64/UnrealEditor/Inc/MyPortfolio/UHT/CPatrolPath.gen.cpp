// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/BehaviorTree/CPatrolPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPatrolPath() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_ACPatrolPath();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_ACPatrolPath_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void ACPatrolPath::StaticRegisterNativesACPatrolPath()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPatrolPath);
	UClass* Z_Construct_UClass_ACPatrolPath_NoRegister()
	{
		return ACPatrolPath::StaticClass();
	}
	struct Z_Construct_UClass_ACPatrolPath_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[];
#endif
		static void NewProp_bReverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPatrolPath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPatrolPath_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPatrolPath_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/CPatrolPath.h" },
		{ "ModuleRelativePath", "BehaviorTree/CPatrolPath.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "Path" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdd\xba\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "BehaviorTree/CPatrolPath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdd\xba\xef\xbf\xbd" },
#endif
	};
#endif
	void Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((ACPatrolPath*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACPatrolPath), &Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bLoop_MetaData), Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bLoop_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Path" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "ModuleRelativePath", "BehaviorTree/CPatrolPath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPatrolPath, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Index_MetaData), Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bReverse_MetaData[] = {
		{ "Category", "Path" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "BehaviorTree/CPatrolPath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	void Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bReverse_SetBit(void* Obj)
	{
		((ACPatrolPath*)Obj)->bReverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACPatrolPath), &Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bReverse_MetaData), Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bReverse_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "CPatrolPath" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BehaviorTree/CPatrolPath.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPatrolPath, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Root_MetaData), Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Root_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "CPatrolPath" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xee\xbc\xb1\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BehaviorTree/CPatrolPath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xee\xbc\xb1" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPatrolPath, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Spline_MetaData), Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Spline_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "CPatrolPath" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BehaviorTree/CPatrolPath.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPatrolPath, Text), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Text_MetaData), Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Text_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPatrolPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPatrolPath_Statics::NewProp_bReverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Spline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPatrolPath_Statics::NewProp_Text,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPatrolPath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPatrolPath>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPatrolPath_Statics::ClassParams = {
		&ACPatrolPath::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACPatrolPath_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPatrolPath_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPatrolPath_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPatrolPath_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPatrolPath_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACPatrolPath()
	{
		if (!Z_Registration_Info_UClass_ACPatrolPath.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPatrolPath.OuterSingleton, Z_Construct_UClass_ACPatrolPath_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPatrolPath.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<ACPatrolPath>()
	{
		return ACPatrolPath::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPatrolPath);
	ACPatrolPath::~ACPatrolPath() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CPatrolPath_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CPatrolPath_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPatrolPath, ACPatrolPath::StaticClass, TEXT("ACPatrolPath"), &Z_Registration_Info_UClass_ACPatrolPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPatrolPath), 2599913336U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CPatrolPath_h_1525463805(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CPatrolPath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CPatrolPath_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
