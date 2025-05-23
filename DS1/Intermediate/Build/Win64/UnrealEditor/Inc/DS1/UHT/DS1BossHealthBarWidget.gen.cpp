// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/UI/DS1BossHealthBarWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1BossHealthBarWidget() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_UDS1BossHealthBarWidget();
DS1_API UClass* Z_Construct_UClass_UDS1BossHealthBarWidget_NoRegister();
DS1_API UClass* Z_Construct_UClass_UDS1StatBarWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UDS1BossHealthBarWidget
void UDS1BossHealthBarWidget::StaticRegisterNativesUDS1BossHealthBarWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDS1BossHealthBarWidget);
UClass* Z_Construct_UClass_UDS1BossHealthBarWidget_NoRegister()
{
	return UDS1BossHealthBarWidget::StaticClass();
}
struct Z_Construct_UClass_UDS1BossHealthBarWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "UI/DS1BossHealthBarWidget.h" },
		{ "ModuleRelativePath", "UI/DS1BossHealthBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DS1BossHealthBarWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/DS1BossHealthBarWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBarWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDS1BossHealthBarWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDS1BossHealthBarWidget_Statics::NewProp_HealthBarWidget = { "HealthBarWidget", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1BossHealthBarWidget, HealthBarWidget), Z_Construct_UClass_UDS1StatBarWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarWidget_MetaData), NewProp_HealthBarWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDS1BossHealthBarWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1BossHealthBarWidget_Statics::NewProp_HealthBarWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1BossHealthBarWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDS1BossHealthBarWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1BossHealthBarWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDS1BossHealthBarWidget_Statics::ClassParams = {
	&UDS1BossHealthBarWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDS1BossHealthBarWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDS1BossHealthBarWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1BossHealthBarWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDS1BossHealthBarWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDS1BossHealthBarWidget()
{
	if (!Z_Registration_Info_UClass_UDS1BossHealthBarWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDS1BossHealthBarWidget.OuterSingleton, Z_Construct_UClass_UDS1BossHealthBarWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDS1BossHealthBarWidget.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UDS1BossHealthBarWidget>()
{
	return UDS1BossHealthBarWidget::StaticClass();
}
UDS1BossHealthBarWidget::UDS1BossHealthBarWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDS1BossHealthBarWidget);
UDS1BossHealthBarWidget::~UDS1BossHealthBarWidget() {}
// End Class UDS1BossHealthBarWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_UI_DS1BossHealthBarWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDS1BossHealthBarWidget, UDS1BossHealthBarWidget::StaticClass, TEXT("UDS1BossHealthBarWidget"), &Z_Registration_Info_UClass_UDS1BossHealthBarWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDS1BossHealthBarWidget), 2369968977U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_UI_DS1BossHealthBarWidget_h_3150274390(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_UI_DS1BossHealthBarWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_UI_DS1BossHealthBarWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
