// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Notifies/CAnimNotify_CameraShake.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAnimNotify_CameraShake() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCAnimNotify_CameraShake();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCAnimNotify_CameraShake_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UCAnimNotify_CameraShake::StaticRegisterNativesUCAnimNotify_CameraShake()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCAnimNotify_CameraShake);
	UClass* Z_Construct_UClass_UCAnimNotify_CameraShake_NoRegister()
	{
		return UCAnimNotify_CameraShake::StaticClass();
	}
	struct Z_Construct_UClass_UCAnimNotify_CameraShake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraShakeClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/CAnimNotify_CameraShake.h" },
		{ "ModuleRelativePath", "Notifies/CAnimNotify_CameraShake.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::NewProp_CameraShakeClass_MetaData[] = {
		{ "Category", "CameraShakeClass" },
		{ "ModuleRelativePath", "Notifies/CAnimNotify_CameraShake.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::NewProp_CameraShakeClass = { "CameraShakeClass", nullptr, (EPropertyFlags)0x0044000000000011, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCAnimNotify_CameraShake, CameraShakeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::NewProp_CameraShakeClass_MetaData), Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::NewProp_CameraShakeClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::NewProp_CameraShakeClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAnimNotify_CameraShake>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::ClassParams = {
		&UCAnimNotify_CameraShake::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::Class_MetaDataParams), Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCAnimNotify_CameraShake()
	{
		if (!Z_Registration_Info_UClass_UCAnimNotify_CameraShake.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCAnimNotify_CameraShake.OuterSingleton, Z_Construct_UClass_UCAnimNotify_CameraShake_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCAnimNotify_CameraShake.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCAnimNotify_CameraShake>()
	{
		return UCAnimNotify_CameraShake::StaticClass();
	}
	UCAnimNotify_CameraShake::UCAnimNotify_CameraShake(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAnimNotify_CameraShake);
	UCAnimNotify_CameraShake::~UCAnimNotify_CameraShake() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotify_CameraShake_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotify_CameraShake_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCAnimNotify_CameraShake, UCAnimNotify_CameraShake::StaticClass, TEXT("UCAnimNotify_CameraShake"), &Z_Registration_Info_UClass_UCAnimNotify_CameraShake, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCAnimNotify_CameraShake), 2825335055U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotify_CameraShake_h_3303805150(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotify_CameraShake_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotify_CameraShake_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
