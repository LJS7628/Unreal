// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/BehaviorTree/CBTTaskNode_Speed.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCBTTaskNode_Speed() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCBTTaskNode_Speed();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCBTTaskNode_Speed_NoRegister();
	MYPORTFOLIO_API UEnum* Z_Construct_UEnum_MyPortfolio_ESpeedType();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UCBTTaskNode_Speed::StaticRegisterNativesUCBTTaskNode_Speed()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCBTTaskNode_Speed);
	UClass* Z_Construct_UClass_UCBTTaskNode_Speed_NoRegister()
	{
		return UCBTTaskNode_Speed::StaticClass();
	}
	struct Z_Construct_UClass_UCBTTaskNode_Speed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCBTTaskNode_Speed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCBTTaskNode_Speed_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBTTaskNode_Speed_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/CBTTaskNode_Speed.h" },
		{ "ModuleRelativePath", "BehaviorTree/CBTTaskNode_Speed.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCBTTaskNode_Speed_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBTTaskNode_Speed_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Type" },
		{ "ModuleRelativePath", "BehaviorTree/CBTTaskNode_Speed.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCBTTaskNode_Speed_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCBTTaskNode_Speed, Type), Z_Construct_UEnum_MyPortfolio_ESpeedType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCBTTaskNode_Speed_Statics::NewProp_Type_MetaData), Z_Construct_UClass_UCBTTaskNode_Speed_Statics::NewProp_Type_MetaData) }; // 3349901852
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCBTTaskNode_Speed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCBTTaskNode_Speed_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCBTTaskNode_Speed_Statics::NewProp_Type,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCBTTaskNode_Speed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCBTTaskNode_Speed>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCBTTaskNode_Speed_Statics::ClassParams = {
		&UCBTTaskNode_Speed::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCBTTaskNode_Speed_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCBTTaskNode_Speed_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCBTTaskNode_Speed_Statics::Class_MetaDataParams), Z_Construct_UClass_UCBTTaskNode_Speed_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCBTTaskNode_Speed_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCBTTaskNode_Speed()
	{
		if (!Z_Registration_Info_UClass_UCBTTaskNode_Speed.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCBTTaskNode_Speed.OuterSingleton, Z_Construct_UClass_UCBTTaskNode_Speed_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCBTTaskNode_Speed.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCBTTaskNode_Speed>()
	{
		return UCBTTaskNode_Speed::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCBTTaskNode_Speed);
	UCBTTaskNode_Speed::~UCBTTaskNode_Speed() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTTaskNode_Speed_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTTaskNode_Speed_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCBTTaskNode_Speed, UCBTTaskNode_Speed::StaticClass, TEXT("UCBTTaskNode_Speed"), &Z_Registration_Info_UClass_UCBTTaskNode_Speed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCBTTaskNode_Speed), 2828637699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTTaskNode_Speed_h_4288538113(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTTaskNode_Speed_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTTaskNode_Speed_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
