// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Characters/CEnemy_AI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCEnemy_AI() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_ACEnemy();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_ACEnemy_AI();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_ACEnemy_AI_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCWeaponComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void ACEnemy_AI::StaticRegisterNativesACEnemy_AI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACEnemy_AI);
	UClass* Z_Construct_UClass_ACEnemy_AI_NoRegister()
	{
		return ACEnemy_AI::StaticClass();
	}
	struct Z_Construct_UClass_ACEnemy_AI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeamID_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TeamID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACEnemy_AI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_AI_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_AI_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/CEnemy_AI.h" },
		{ "ModuleRelativePath", "Characters/CEnemy_AI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_TeamID_MetaData[] = {
		{ "Category", "Team" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xa3\n" },
#endif
		{ "ModuleRelativePath", "Characters/CEnemy_AI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xa3" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACEnemy_AI, TeamID), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_TeamID_MetaData), Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_TeamID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "Team" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xe0\xb5\xbf \xc6\xae\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Characters/CEnemy_AI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xe0\xb5\xbf \xc6\xae\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACEnemy_AI, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_BehaviorTree_MetaData), Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_BehaviorTree_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "CEnemy_AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/CEnemy_AI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACEnemy_AI, Weapon), Z_Construct_UClass_UCWeaponComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_Weapon_MetaData), Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_Weapon_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACEnemy_AI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_TeamID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_BehaviorTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACEnemy_AI_Statics::NewProp_Weapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACEnemy_AI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACEnemy_AI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACEnemy_AI_Statics::ClassParams = {
		&ACEnemy_AI::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACEnemy_AI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_AI_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_AI_Statics::Class_MetaDataParams), Z_Construct_UClass_ACEnemy_AI_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACEnemy_AI_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACEnemy_AI()
	{
		if (!Z_Registration_Info_UClass_ACEnemy_AI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACEnemy_AI.OuterSingleton, Z_Construct_UClass_ACEnemy_AI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACEnemy_AI.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<ACEnemy_AI>()
	{
		return ACEnemy_AI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACEnemy_AI);
	ACEnemy_AI::~ACEnemy_AI() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_AI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_AI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACEnemy_AI, ACEnemy_AI::StaticClass, TEXT("ACEnemy_AI"), &Z_Registration_Info_UClass_ACEnemy_AI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACEnemy_AI), 422478104U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_AI_h_4072099911(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_AI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Characters_CEnemy_AI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
