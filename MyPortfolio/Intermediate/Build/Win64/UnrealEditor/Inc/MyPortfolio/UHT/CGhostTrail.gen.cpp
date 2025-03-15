// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Weapons/AddOns/CGhostTrail.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGhostTrail() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_ACGhostTrail();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_ACGhostTrail_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void ACGhostTrail::StaticRegisterNativesACGhostTrail()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACGhostTrail);
	UClass* Z_Construct_UClass_ACGhostTrail_NoRegister()
	{
		return ACGhostTrail::StaticClass();
	}
	struct Z_Construct_UClass_ACGhostTrail_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Interval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Exponent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Exponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleAmount_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACGhostTrail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACGhostTrail_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGhostTrail_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/AddOns/CGhostTrail.h" },
		{ "ModuleRelativePath", "Weapons/AddOns/CGhostTrail.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGhostTrail_Statics::NewProp_StartDelay_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Weapons/AddOns/CGhostTrail.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACGhostTrail_Statics::NewProp_StartDelay = { "StartDelay", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACGhostTrail, StartDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACGhostTrail_Statics::NewProp_StartDelay_MetaData), Z_Construct_UClass_ACGhostTrail_Statics::NewProp_StartDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Interval_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Weapons/AddOns/CGhostTrail.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACGhostTrail, Interval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Interval_MetaData), Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Interval_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Weapons/AddOns/CGhostTrail.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACGhostTrail, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Color_MetaData), Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Color_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Exponent_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Weapons/AddOns/CGhostTrail.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Exponent = { "Exponent", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACGhostTrail, Exponent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Exponent_MetaData), Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Exponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Weapons/AddOns/CGhostTrail.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACGhostTrail, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Scale_MetaData), Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Scale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGhostTrail_Statics::NewProp_ScaleAmount_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Weapons/AddOns/CGhostTrail.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACGhostTrail_Statics::NewProp_ScaleAmount = { "ScaleAmount", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACGhostTrail, ScaleAmount), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACGhostTrail_Statics::NewProp_ScaleAmount_MetaData), Z_Construct_UClass_ACGhostTrail_Statics::NewProp_ScaleAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "CGhostTrail" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/AddOns/CGhostTrail.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACGhostTrail, Mesh), Z_Construct_UClass_UPoseableMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACGhostTrail_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGhostTrail_Statics::NewProp_StartDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Interval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Exponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGhostTrail_Statics::NewProp_ScaleAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACGhostTrail_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACGhostTrail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACGhostTrail>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACGhostTrail_Statics::ClassParams = {
		&ACGhostTrail::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACGhostTrail_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACGhostTrail_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACGhostTrail_Statics::Class_MetaDataParams), Z_Construct_UClass_ACGhostTrail_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACGhostTrail_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACGhostTrail()
	{
		if (!Z_Registration_Info_UClass_ACGhostTrail.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACGhostTrail.OuterSingleton, Z_Construct_UClass_ACGhostTrail_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACGhostTrail.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<ACGhostTrail>()
	{
		return ACGhostTrail::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACGhostTrail);
	ACGhostTrail::~ACGhostTrail() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CGhostTrail_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CGhostTrail_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACGhostTrail, ACGhostTrail::StaticClass, TEXT("ACGhostTrail"), &Z_Registration_Info_UClass_ACGhostTrail, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACGhostTrail), 1339754220U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CGhostTrail_h_3986552154(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CGhostTrail_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_AddOns_CGhostTrail_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
