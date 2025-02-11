// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Notifies/CAnimNotifyState_Combo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAnimNotifyState_Combo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCAnimNotifyState_Combo();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCAnimNotifyState_Combo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UCAnimNotifyState_Combo::StaticRegisterNativesUCAnimNotifyState_Combo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCAnimNotifyState_Combo);
	UClass* Z_Construct_UClass_UCAnimNotifyState_Combo_NoRegister()
	{
		return UCAnimNotifyState_Combo::StaticClass();
	}
	struct Z_Construct_UClass_UCAnimNotifyState_Combo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAnimNotifyState_Combo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotifyState_Combo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimNotifyState_Combo_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/CAnimNotifyState_Combo.h" },
		{ "ModuleRelativePath", "Notifies/CAnimNotifyState_Combo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAnimNotifyState_Combo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAnimNotifyState_Combo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCAnimNotifyState_Combo_Statics::ClassParams = {
		&UCAnimNotifyState_Combo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotifyState_Combo_Statics::Class_MetaDataParams), Z_Construct_UClass_UCAnimNotifyState_Combo_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCAnimNotifyState_Combo()
	{
		if (!Z_Registration_Info_UClass_UCAnimNotifyState_Combo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCAnimNotifyState_Combo.OuterSingleton, Z_Construct_UClass_UCAnimNotifyState_Combo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCAnimNotifyState_Combo.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCAnimNotifyState_Combo>()
	{
		return UCAnimNotifyState_Combo::StaticClass();
	}
	UCAnimNotifyState_Combo::UCAnimNotifyState_Combo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAnimNotifyState_Combo);
	UCAnimNotifyState_Combo::~UCAnimNotifyState_Combo() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotifyState_Combo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotifyState_Combo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCAnimNotifyState_Combo, UCAnimNotifyState_Combo::StaticClass, TEXT("UCAnimNotifyState_Combo"), &Z_Registration_Info_UClass_UCAnimNotifyState_Combo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCAnimNotifyState_Combo), 1683418020U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotifyState_Combo_h_3442927040(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotifyState_Combo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotifyState_Combo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
