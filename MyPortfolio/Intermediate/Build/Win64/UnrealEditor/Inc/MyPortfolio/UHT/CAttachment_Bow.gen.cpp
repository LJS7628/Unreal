// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Weapons/Attachments/CAttachment_Bow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAttachment_Bow() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_ACAttachment();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_ACAttachment_Bow();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_ACAttachment_Bow_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void ACAttachment_Bow::StaticRegisterNativesACAttachment_Bow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACAttachment_Bow);
	UClass* Z_Construct_UClass_ACAttachment_Bow_NoRegister()
	{
		return ACAttachment_Bow::StaticClass();
	}
	struct Z_Construct_UClass_ACAttachment_Bow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewPitchAngle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewPitchAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseableMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PoseableMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACAttachment_Bow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Bow_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAttachment_Bow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/Attachments/CAttachment_Bow.h" },
		{ "ModuleRelativePath", "Weapons/Attachments/CAttachment_Bow.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_ViewPitchAngle_MetaData[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Weapons/Attachments/CAttachment_Bow.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_ViewPitchAngle = { "ViewPitchAngle", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACAttachment_Bow, ViewPitchAngle), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_ViewPitchAngle_MetaData), Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_ViewPitchAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "CAttachment_Bow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/Attachments/CAttachment_Bow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACAttachment_Bow, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_SkeletalMesh_MetaData), Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_SkeletalMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_PoseableMesh_MetaData[] = {
		{ "Category", "CAttachment_Bow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/Attachments/CAttachment_Bow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_PoseableMesh = { "PoseableMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACAttachment_Bow, PoseableMesh), Z_Construct_UClass_UPoseableMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_PoseableMesh_MetaData), Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_PoseableMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACAttachment_Bow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_ViewPitchAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACAttachment_Bow_Statics::NewProp_PoseableMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACAttachment_Bow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACAttachment_Bow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACAttachment_Bow_Statics::ClassParams = {
		&ACAttachment_Bow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACAttachment_Bow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Bow_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Bow_Statics::Class_MetaDataParams), Z_Construct_UClass_ACAttachment_Bow_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACAttachment_Bow_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACAttachment_Bow()
	{
		if (!Z_Registration_Info_UClass_ACAttachment_Bow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACAttachment_Bow.OuterSingleton, Z_Construct_UClass_ACAttachment_Bow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACAttachment_Bow.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<ACAttachment_Bow>()
	{
		return ACAttachment_Bow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACAttachment_Bow);
	ACAttachment_Bow::~ACAttachment_Bow() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_Attachments_CAttachment_Bow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_Attachments_CAttachment_Bow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACAttachment_Bow, ACAttachment_Bow::StaticClass, TEXT("ACAttachment_Bow"), &Z_Registration_Info_UClass_ACAttachment_Bow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACAttachment_Bow), 1719245472U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_Attachments_CAttachment_Bow_h_796441655(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_Attachments_CAttachment_Bow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_Attachments_CAttachment_Bow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
