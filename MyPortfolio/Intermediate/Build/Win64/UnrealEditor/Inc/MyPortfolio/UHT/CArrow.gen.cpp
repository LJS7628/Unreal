// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Weapons/AddOns/CArrow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCArrow() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_ACArrow();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_ACArrow_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void ACArrow::StaticRegisterNativesACArrow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACArrow);
	UClass* Z_Construct_UClass_ACArrow_NoRegister()
	{
		return ACArrow::StaticClass();
	}
	struct Z_Construct_UClass_ACArrow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Capsule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Projectile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACArrow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACArrow_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACArrow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/AddOns/CArrow.h" },
		{ "ModuleRelativePath", "Weapons/AddOns/CArrow.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACArrow_Statics::NewProp_Capsule_MetaData[] = {
		{ "Category", "CArrow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/AddOns/CArrow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACArrow_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACArrow, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACArrow_Statics::NewProp_Capsule_MetaData), Z_Construct_UClass_ACArrow_Statics::NewProp_Capsule_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACArrow_Statics::NewProp_Projectile_MetaData[] = {
		{ "Category", "CArrow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/AddOns/CArrow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACArrow_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACArrow, Projectile), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACArrow_Statics::NewProp_Projectile_MetaData), Z_Construct_UClass_ACArrow_Statics::NewProp_Projectile_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACArrow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACArrow_Statics::NewProp_Capsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACArrow_Statics::NewProp_Projectile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACArrow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACArrow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACArrow_Statics::ClassParams = {
		&ACArrow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACArrow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACArrow_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACArrow_Statics::Class_MetaDataParams), Z_Construct_UClass_ACArrow_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACArrow_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACArrow()
	{
		if (!Z_Registration_Info_UClass_ACArrow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACArrow.OuterSingleton, Z_Construct_UClass_ACArrow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACArrow.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<ACArrow>()
	{
		return ACArrow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACArrow);
	ACArrow::~ACArrow() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACArrow, ACArrow::StaticClass, TEXT("ACArrow"), &Z_Registration_Info_UClass_ACArrow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACArrow), 2665004884U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_1639201394(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CArrow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
