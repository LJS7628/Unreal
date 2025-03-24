// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Weapons/CWeaponAsset.h"
#include "MyPortfolio/Weapons/CWeaponStructures.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCWeaponAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_ACAttachment_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCDoAction_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCEquipment_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCSubAction_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCWeaponAsset();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCWeaponAsset_NoRegister();
	MYPORTFOLIO_API UEnum* Z_Construct_UEnum_MyPortfolio_EWeaponType();
	MYPORTFOLIO_API UScriptStruct* Z_Construct_UScriptStruct_FDoActionData();
	MYPORTFOLIO_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentData();
	MYPORTFOLIO_API UScriptStruct* Z_Construct_UScriptStruct_FHitData();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UCWeaponAsset::StaticRegisterNativesUCWeaponAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCWeaponAsset);
	UClass* Z_Construct_UClass_UCWeaponAsset_NoRegister()
	{
		return UCWeaponAsset::StaticClass();
	}
	struct Z_Construct_UClass_UCWeaponAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttachmentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EquipmentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoActionClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DoActionClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubActionClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SubActionClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DoActionDatas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoActionDatas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DoActionDatas;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitDatas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitDatas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HitDatas;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCWeaponAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/CWeaponAsset.h" },
		{ "ModuleRelativePath", "Weapons/CWeaponAsset.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_WeaponType_MetaData[] = {
		{ "Category", "CWeaponAsset" },
		{ "ModuleRelativePath", "Weapons/CWeaponAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCWeaponAsset, WeaponType), Z_Construct_UEnum_MyPortfolio_EWeaponType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_WeaponType_MetaData), Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_WeaponType_MetaData) }; // 1952477368
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_AttachmentClass_MetaData[] = {
		{ "Category", "CWeaponAsset" },
		{ "ModuleRelativePath", "Weapons/CWeaponAsset.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_AttachmentClass = { "AttachmentClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCWeaponAsset, AttachmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACAttachment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_AttachmentClass_MetaData), Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_AttachmentClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_EquipmentClass_MetaData[] = {
		{ "Category", "CWeaponAsset" },
		{ "ModuleRelativePath", "Weapons/CWeaponAsset.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_EquipmentClass = { "EquipmentClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCWeaponAsset, EquipmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_EquipmentClass_MetaData), Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_EquipmentClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_EquipmentData_MetaData[] = {
		{ "Category", "CWeaponAsset" },
		{ "ModuleRelativePath", "Weapons/CWeaponAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_EquipmentData = { "EquipmentData", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCWeaponAsset, EquipmentData), Z_Construct_UScriptStruct_FEquipmentData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_EquipmentData_MetaData), Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_EquipmentData_MetaData) }; // 314561670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoActionClass_MetaData[] = {
		{ "Category", "CWeaponAsset" },
		{ "ModuleRelativePath", "Weapons/CWeaponAsset.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoActionClass = { "DoActionClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCWeaponAsset, DoActionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCDoAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoActionClass_MetaData), Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoActionClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_SubActionClass_MetaData[] = {
		{ "Category", "CWeaponAsset" },
		{ "ModuleRelativePath", "Weapons/CWeaponAsset.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_SubActionClass = { "SubActionClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCWeaponAsset, SubActionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCSubAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_SubActionClass_MetaData), Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_SubActionClass_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoActionDatas_Inner = { "DoActionDatas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDoActionData, METADATA_PARAMS(0, nullptr) }; // 223035043
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoActionDatas_MetaData[] = {
		{ "Category", "CWeaponAsset" },
		{ "ModuleRelativePath", "Weapons/CWeaponAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoActionDatas = { "DoActionDatas", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCWeaponAsset, DoActionDatas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoActionDatas_MetaData), Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoActionDatas_MetaData) }; // 223035043
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_HitDatas_Inner = { "HitDatas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitData, METADATA_PARAMS(0, nullptr) }; // 642212284
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_HitDatas_MetaData[] = {
		{ "Category", "CWeaponAsset" },
		{ "ModuleRelativePath", "Weapons/CWeaponAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_HitDatas = { "HitDatas", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCWeaponAsset, HitDatas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_HitDatas_MetaData), Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_HitDatas_MetaData) }; // 642212284
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCWeaponAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_WeaponType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_WeaponType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_AttachmentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_EquipmentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_EquipmentData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoActionClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_SubActionClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoActionDatas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_DoActionDatas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_HitDatas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponAsset_Statics::NewProp_HitDatas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCWeaponAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCWeaponAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCWeaponAsset_Statics::ClassParams = {
		&UCWeaponAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCWeaponAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UCWeaponAsset_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponAsset_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCWeaponAsset()
	{
		if (!Z_Registration_Info_UClass_UCWeaponAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCWeaponAsset.OuterSingleton, Z_Construct_UClass_UCWeaponAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCWeaponAsset.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCWeaponAsset>()
	{
		return UCWeaponAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCWeaponAsset);
	UCWeaponAsset::~UCWeaponAsset() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCWeaponAsset, UCWeaponAsset::StaticClass, TEXT("UCWeaponAsset"), &Z_Registration_Info_UClass_UCWeaponAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCWeaponAsset), 2058695139U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponAsset_h_1661559222(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_CWeaponAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
