// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/UI/DS1PlayerHUDWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1PlayerHUDWidget() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_UDS1PlayerHUDWidget();
DS1_API UClass* Z_Construct_UClass_UDS1PlayerHUDWidget_NoRegister();
DS1_API UClass* Z_Construct_UClass_UDS1PotionWidget_NoRegister();
DS1_API UClass* Z_Construct_UClass_UDS1StatBarWidget_NoRegister();
DS1_API UClass* Z_Construct_UClass_UDS1WeaponWidget_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UDS1PlayerHUDWidget
void UDS1PlayerHUDWidget::StaticRegisterNativesUDS1PlayerHUDWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDS1PlayerHUDWidget);
UClass* Z_Construct_UClass_UDS1PlayerHUDWidget_NoRegister()
{
	return UDS1PlayerHUDWidget::StaticClass();
}
struct Z_Construct_UClass_UDS1PlayerHUDWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/DS1PlayerHUDWidget.h" },
		{ "ModuleRelativePath", "UI/DS1PlayerHUDWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaBarWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DS1PlayerHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/DS1PlayerHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DS1PlayerHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/DS1PlayerHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PotionWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DS1PlayerHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/DS1PlayerHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DS1PlayerHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/DS1PlayerHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShieldWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DS1PlayerHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/DS1PlayerHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlankIcon_MetaData[] = {
		{ "Category", "DS1PlayerHUDWidget" },
		{ "ModuleRelativePath", "UI/DS1PlayerHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaminaBarWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBarWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PotionWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShieldWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlankIcon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDS1PlayerHUDWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDS1PlayerHUDWidget_Statics::NewProp_StaminaBarWidget = { "StaminaBarWidget", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1PlayerHUDWidget, StaminaBarWidget), Z_Construct_UClass_UDS1StatBarWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaBarWidget_MetaData), NewProp_StaminaBarWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDS1PlayerHUDWidget_Statics::NewProp_HealthBarWidget = { "HealthBarWidget", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1PlayerHUDWidget, HealthBarWidget), Z_Construct_UClass_UDS1StatBarWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarWidget_MetaData), NewProp_HealthBarWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDS1PlayerHUDWidget_Statics::NewProp_PotionWidget = { "PotionWidget", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1PlayerHUDWidget, PotionWidget), Z_Construct_UClass_UDS1PotionWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PotionWidget_MetaData), NewProp_PotionWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDS1PlayerHUDWidget_Statics::NewProp_WeaponWidget = { "WeaponWidget", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1PlayerHUDWidget, WeaponWidget), Z_Construct_UClass_UDS1WeaponWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponWidget_MetaData), NewProp_WeaponWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDS1PlayerHUDWidget_Statics::NewProp_ShieldWidget = { "ShieldWidget", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1PlayerHUDWidget, ShieldWidget), Z_Construct_UClass_UDS1WeaponWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShieldWidget_MetaData), NewProp_ShieldWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDS1PlayerHUDWidget_Statics::NewProp_BlankIcon = { "BlankIcon", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1PlayerHUDWidget, BlankIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlankIcon_MetaData), NewProp_BlankIcon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDS1PlayerHUDWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1PlayerHUDWidget_Statics::NewProp_StaminaBarWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1PlayerHUDWidget_Statics::NewProp_HealthBarWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1PlayerHUDWidget_Statics::NewProp_PotionWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1PlayerHUDWidget_Statics::NewProp_WeaponWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1PlayerHUDWidget_Statics::NewProp_ShieldWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1PlayerHUDWidget_Statics::NewProp_BlankIcon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1PlayerHUDWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDS1PlayerHUDWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1PlayerHUDWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDS1PlayerHUDWidget_Statics::ClassParams = {
	&UDS1PlayerHUDWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDS1PlayerHUDWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDS1PlayerHUDWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1PlayerHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDS1PlayerHUDWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDS1PlayerHUDWidget()
{
	if (!Z_Registration_Info_UClass_UDS1PlayerHUDWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDS1PlayerHUDWidget.OuterSingleton, Z_Construct_UClass_UDS1PlayerHUDWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDS1PlayerHUDWidget.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UDS1PlayerHUDWidget>()
{
	return UDS1PlayerHUDWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDS1PlayerHUDWidget);
UDS1PlayerHUDWidget::~UDS1PlayerHUDWidget() {}
// End Class UDS1PlayerHUDWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_UI_DS1PlayerHUDWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDS1PlayerHUDWidget, UDS1PlayerHUDWidget::StaticClass, TEXT("UDS1PlayerHUDWidget"), &Z_Registration_Info_UClass_UDS1PlayerHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDS1PlayerHUDWidget), 1512892387U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_UI_DS1PlayerHUDWidget_h_3821354595(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_UI_DS1PlayerHUDWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_UI_DS1PlayerHUDWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
