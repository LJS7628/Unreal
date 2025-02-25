// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Weapons/DoActions/CDoAction_Combo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCDoAction_Combo() {}
// Cross Module References
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCDoAction();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCDoAction_Combo();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCDoAction_Combo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UCDoAction_Combo::StaticRegisterNativesUCDoAction_Combo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCDoAction_Combo);
	UClass* Z_Construct_UClass_UCDoAction_Combo_NoRegister()
	{
		return UCDoAction_Combo::StaticClass();
	}
	struct Z_Construct_UClass_UCDoAction_Combo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinishAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FinishAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AvailableAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCDoAction_Combo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCDoAction,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Combo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDoAction_Combo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Weapons/DoActions/CDoAction_Combo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Weapons/DoActions/CDoAction_Combo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDoAction_Combo_Statics::NewProp_FinishAngle_MetaData[] = {
		{ "Category", "Angle" },
		{ "ModuleRelativePath", "Weapons/DoActions/CDoAction_Combo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCDoAction_Combo_Statics::NewProp_FinishAngle = { "FinishAngle", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCDoAction_Combo, FinishAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Combo_Statics::NewProp_FinishAngle_MetaData), Z_Construct_UClass_UCDoAction_Combo_Statics::NewProp_FinishAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDoAction_Combo_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Angle" },
		{ "ModuleRelativePath", "Weapons/DoActions/CDoAction_Combo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCDoAction_Combo_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCDoAction_Combo, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Combo_Statics::NewProp_RotationSpeed_MetaData), Z_Construct_UClass_UCDoAction_Combo_Statics::NewProp_RotationSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDoAction_Combo_Statics::NewProp_AvailableAngle_MetaData[] = {
		{ "Category", "Angle" },
		{ "ModuleRelativePath", "Weapons/DoActions/CDoAction_Combo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCDoAction_Combo_Statics::NewProp_AvailableAngle = { "AvailableAngle", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCDoAction_Combo, AvailableAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Combo_Statics::NewProp_AvailableAngle_MetaData), Z_Construct_UClass_UCDoAction_Combo_Statics::NewProp_AvailableAngle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCDoAction_Combo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDoAction_Combo_Statics::NewProp_FinishAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDoAction_Combo_Statics::NewProp_RotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDoAction_Combo_Statics::NewProp_AvailableAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCDoAction_Combo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCDoAction_Combo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCDoAction_Combo_Statics::ClassParams = {
		&UCDoAction_Combo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCDoAction_Combo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Combo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Combo_Statics::Class_MetaDataParams), Z_Construct_UClass_UCDoAction_Combo_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCDoAction_Combo_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCDoAction_Combo()
	{
		if (!Z_Registration_Info_UClass_UCDoAction_Combo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCDoAction_Combo.OuterSingleton, Z_Construct_UClass_UCDoAction_Combo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCDoAction_Combo.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCDoAction_Combo>()
	{
		return UCDoAction_Combo::StaticClass();
	}
	UCDoAction_Combo::UCDoAction_Combo() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCDoAction_Combo);
	UCDoAction_Combo::~UCDoAction_Combo() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_DoActions_CDoAction_Combo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_DoActions_CDoAction_Combo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCDoAction_Combo, UCDoAction_Combo::StaticClass, TEXT("UCDoAction_Combo"), &Z_Registration_Info_UClass_UCDoAction_Combo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCDoAction_Combo), 1033969181U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_DoActions_CDoAction_Combo_h_1430208548(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_DoActions_CDoAction_Combo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Weapons_DoActions_CDoAction_Combo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
