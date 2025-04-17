// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/BehaviorTree/CBTService_Range.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCBTService_Range() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCBTService_Range();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCBTService_Range_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UCBTService_Range::StaticRegisterNativesUCBTService_Range()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCBTService_Range);
	UClass* Z_Construct_UClass_UCBTService_Range_NoRegister()
	{
		return UCBTService_Range::StaticClass();
	}
	struct Z_Construct_UClass_UCBTService_Range_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DodgeRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DodgeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCBTService_Range_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCBTService_Range_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBTService_Range_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/CBTService_Range.h" },
		{ "ModuleRelativePath", "BehaviorTree/CBTService_Range.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBTService_Range_Statics::NewProp_DodgeRange_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "BehaviorTree/CBTService_Range.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCBTService_Range_Statics::NewProp_DodgeRange = { "DodgeRange", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCBTService_Range, DodgeRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCBTService_Range_Statics::NewProp_DodgeRange_MetaData), Z_Construct_UClass_UCBTService_Range_Statics::NewProp_DodgeRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCBTService_Range_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "BehaviorTree/CBTService_Range.h" },
	};
#endif
	void Z_Construct_UClass_UCBTService_Range_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((UCBTService_Range*)Obj)->bDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCBTService_Range_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCBTService_Range), &Z_Construct_UClass_UCBTService_Range_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCBTService_Range_Statics::NewProp_bDrawDebug_MetaData), Z_Construct_UClass_UCBTService_Range_Statics::NewProp_bDrawDebug_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCBTService_Range_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCBTService_Range_Statics::NewProp_DodgeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCBTService_Range_Statics::NewProp_bDrawDebug,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCBTService_Range_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCBTService_Range>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCBTService_Range_Statics::ClassParams = {
		&UCBTService_Range::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCBTService_Range_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCBTService_Range_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCBTService_Range_Statics::Class_MetaDataParams), Z_Construct_UClass_UCBTService_Range_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCBTService_Range_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCBTService_Range()
	{
		if (!Z_Registration_Info_UClass_UCBTService_Range.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCBTService_Range.OuterSingleton, Z_Construct_UClass_UCBTService_Range_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCBTService_Range.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCBTService_Range>()
	{
		return UCBTService_Range::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCBTService_Range);
	UCBTService_Range::~UCBTService_Range() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTService_Range_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTService_Range_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCBTService_Range, UCBTService_Range::StaticClass, TEXT("UCBTService_Range"), &Z_Registration_Info_UClass_UCBTService_Range, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCBTService_Range), 834689960U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTService_Range_h_919318037(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTService_Range_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_BehaviorTree_CBTService_Range_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
