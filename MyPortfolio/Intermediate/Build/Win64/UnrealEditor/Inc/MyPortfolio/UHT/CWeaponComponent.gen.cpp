// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Components/CWeaponComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCWeaponComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCWeaponAsset_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCWeaponComponent();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCWeaponComponent_NoRegister();
	MYPORTFOLIO_API UEnum* Z_Construct_UEnum_MyPortfolio_EWeaponType();
	MYPORTFOLIO_API UFunction* Z_Construct_UDelegateFunction_MyPortfolio_WeaponTypeChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MyPortfolio_WeaponTypeChanged__DelegateSignature_Statics
	{
		struct _Script_MyPortfolio_eventWeaponTypeChanged_Parms
		{
			EWeaponType InPrevType;
			EWeaponType InNewType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InPrevType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InPrevType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InNewType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InNewType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_MyPortfolio_WeaponTypeChanged__DelegateSignature_Statics::NewProp_InPrevType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_MyPortfolio_WeaponTypeChanged__DelegateSignature_Statics::NewProp_InPrevType = { "InPrevType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MyPortfolio_eventWeaponTypeChanged_Parms, InPrevType), Z_Construct_UEnum_MyPortfolio_EWeaponType, METADATA_PARAMS(0, nullptr) }; // 701054448
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_MyPortfolio_WeaponTypeChanged__DelegateSignature_Statics::NewProp_InNewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_MyPortfolio_WeaponTypeChanged__DelegateSignature_Statics::NewProp_InNewType = { "InNewType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MyPortfolio_eventWeaponTypeChanged_Parms, InNewType), Z_Construct_UEnum_MyPortfolio_EWeaponType, METADATA_PARAMS(0, nullptr) }; // 701054448
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MyPortfolio_WeaponTypeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyPortfolio_WeaponTypeChanged__DelegateSignature_Statics::NewProp_InPrevType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyPortfolio_WeaponTypeChanged__DelegateSignature_Statics::NewProp_InPrevType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyPortfolio_WeaponTypeChanged__DelegateSignature_Statics::NewProp_InNewType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyPortfolio_WeaponTypeChanged__DelegateSignature_Statics::NewProp_InNewType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MyPortfolio_WeaponTypeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\xbf\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "ModuleRelativePath", "Components/CWeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe6\xbf\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MyPortfolio_WeaponTypeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MyPortfolio, nullptr, "WeaponTypeChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MyPortfolio_WeaponTypeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_WeaponTypeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MyPortfolio_WeaponTypeChanged__DelegateSignature_Statics::_Script_MyPortfolio_eventWeaponTypeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_WeaponTypeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MyPortfolio_WeaponTypeChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyPortfolio_WeaponTypeChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_MyPortfolio_WeaponTypeChanged__DelegateSignature_Statics::_Script_MyPortfolio_eventWeaponTypeChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_MyPortfolio_WeaponTypeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MyPortfolio_WeaponTypeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWeaponTypeChanged_DelegateWrapper(const FMulticastScriptDelegate& WeaponTypeChanged, EWeaponType InPrevType, EWeaponType InNewType)
{
	struct _Script_MyPortfolio_eventWeaponTypeChanged_Parms
	{
		EWeaponType InPrevType;
		EWeaponType InNewType;
	};
	_Script_MyPortfolio_eventWeaponTypeChanged_Parms Parms;
	Parms.InPrevType=InPrevType;
	Parms.InNewType=InNewType;
	WeaponTypeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UCWeaponComponent::StaticRegisterNativesUCWeaponComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCWeaponComponent);
	UClass* Z_Construct_UClass_UCWeaponComponent_NoRegister()
	{
		return UCWeaponComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCWeaponComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCWeaponComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/CWeaponComponent.h" },
		{ "ModuleRelativePath", "Components/CWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCWeaponComponent_Statics::NewProp_DataAssets_Inner = { "DataAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCWeaponAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCWeaponComponent_Statics::NewProp_DataAssets_MetaData[] = {
		{ "Category", "DataAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Components/CWeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCWeaponComponent_Statics::NewProp_DataAssets = { "DataAssets", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCWeaponComponent, DataAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponComponent_Statics::NewProp_DataAssets_MetaData), Z_Construct_UClass_UCWeaponComponent_Statics::NewProp_DataAssets_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCWeaponComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponComponent_Statics::NewProp_DataAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCWeaponComponent_Statics::NewProp_DataAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCWeaponComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCWeaponComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCWeaponComponent_Statics::ClassParams = {
		&UCWeaponComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCWeaponComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCWeaponComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCWeaponComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCWeaponComponent()
	{
		if (!Z_Registration_Info_UClass_UCWeaponComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCWeaponComponent.OuterSingleton, Z_Construct_UClass_UCWeaponComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCWeaponComponent.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCWeaponComponent>()
	{
		return UCWeaponComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCWeaponComponent);
	UCWeaponComponent::~UCWeaponComponent() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CWeaponComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CWeaponComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCWeaponComponent, UCWeaponComponent::StaticClass, TEXT("UCWeaponComponent"), &Z_Registration_Info_UClass_UCWeaponComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCWeaponComponent), 829223774U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CWeaponComponent_h_4016475983(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CWeaponComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CWeaponComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
