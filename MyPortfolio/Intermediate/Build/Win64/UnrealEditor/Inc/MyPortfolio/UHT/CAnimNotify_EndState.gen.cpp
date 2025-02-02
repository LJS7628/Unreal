// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Notifies/CAnimNotify_EndState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAnimNotify_EndState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCAnimNotify_EndState();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCAnimNotify_EndState_NoRegister();
	MYPORTFOLIO_API UEnum* Z_Construct_UEnum_MyPortfolio_EStateType();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UCAnimNotify_EndState::StaticRegisterNativesUCAnimNotify_EndState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCAnimNotify_EndState);
	UClass* Z_Construct_UClass_UCAnimNotify_EndState_NoRegister()
	{
		return UCAnimNotify_EndState::StaticClass();
	}
	struct Z_Construct_UClass_UCAnimNotify_EndState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_StateType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StateType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAnimNotify_EndState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_EndState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimNotify_EndState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/CAnimNotify_EndState.h" },
		{ "ModuleRelativePath", "Notifies/CAnimNotify_EndState.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCAnimNotify_EndState_Statics::NewProp_StateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimNotify_EndState_Statics::NewProp_StateType_MetaData[] = {
		{ "Category", "CAnimNotify_EndState" },
		{ "ModuleRelativePath", "Notifies/CAnimNotify_EndState.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCAnimNotify_EndState_Statics::NewProp_StateType = { "StateType", nullptr, (EPropertyFlags)0x0040000000000011, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCAnimNotify_EndState, StateType), Z_Construct_UEnum_MyPortfolio_EStateType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_EndState_Statics::NewProp_StateType_MetaData), Z_Construct_UClass_UCAnimNotify_EndState_Statics::NewProp_StateType_MetaData) }; // 3742531876
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCAnimNotify_EndState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimNotify_EndState_Statics::NewProp_StateType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimNotify_EndState_Statics::NewProp_StateType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAnimNotify_EndState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAnimNotify_EndState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCAnimNotify_EndState_Statics::ClassParams = {
		&UCAnimNotify_EndState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCAnimNotify_EndState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_EndState_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_EndState_Statics::Class_MetaDataParams), Z_Construct_UClass_UCAnimNotify_EndState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_EndState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCAnimNotify_EndState()
	{
		if (!Z_Registration_Info_UClass_UCAnimNotify_EndState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCAnimNotify_EndState.OuterSingleton, Z_Construct_UClass_UCAnimNotify_EndState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCAnimNotify_EndState.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCAnimNotify_EndState>()
	{
		return UCAnimNotify_EndState::StaticClass();
	}
	UCAnimNotify_EndState::UCAnimNotify_EndState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAnimNotify_EndState);
	UCAnimNotify_EndState::~UCAnimNotify_EndState() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotify_EndState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotify_EndState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCAnimNotify_EndState, UCAnimNotify_EndState::StaticClass, TEXT("UCAnimNotify_EndState"), &Z_Registration_Info_UClass_UCAnimNotify_EndState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCAnimNotify_EndState), 901040246U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotify_EndState_h_2102722726(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotify_EndState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotify_EndState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
