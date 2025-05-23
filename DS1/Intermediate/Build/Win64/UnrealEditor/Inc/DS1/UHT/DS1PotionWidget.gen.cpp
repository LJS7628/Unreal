// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/UI/DS1PotionWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1PotionWidget() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_UDS1PotionWidget();
DS1_API UClass* Z_Construct_UClass_UDS1PotionWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UDS1PotionWidget
void UDS1PotionWidget::StaticRegisterNativesUDS1PotionWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDS1PotionWidget);
UClass* Z_Construct_UClass_UDS1PotionWidget_NoRegister()
{
	return UDS1PotionWidget::StaticClass();
}
struct Z_Construct_UClass_UDS1PotionWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "UI/DS1PotionWidget.h" },
		{ "ModuleRelativePath", "UI/DS1PotionWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PotionQuantityText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DS1PotionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/DS1PotionWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PotionQuantityText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDS1PotionWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDS1PotionWidget_Statics::NewProp_PotionQuantityText = { "PotionQuantityText", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1PotionWidget, PotionQuantityText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PotionQuantityText_MetaData), NewProp_PotionQuantityText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDS1PotionWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1PotionWidget_Statics::NewProp_PotionQuantityText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1PotionWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDS1PotionWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1PotionWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDS1PotionWidget_Statics::ClassParams = {
	&UDS1PotionWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDS1PotionWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDS1PotionWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1PotionWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDS1PotionWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDS1PotionWidget()
{
	if (!Z_Registration_Info_UClass_UDS1PotionWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDS1PotionWidget.OuterSingleton, Z_Construct_UClass_UDS1PotionWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDS1PotionWidget.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UDS1PotionWidget>()
{
	return UDS1PotionWidget::StaticClass();
}
UDS1PotionWidget::UDS1PotionWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDS1PotionWidget);
UDS1PotionWidget::~UDS1PotionWidget() {}
// End Class UDS1PotionWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_UI_DS1PotionWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDS1PotionWidget, UDS1PotionWidget::StaticClass, TEXT("UDS1PotionWidget"), &Z_Registration_Info_UClass_UDS1PotionWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDS1PotionWidget), 1077250987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_UI_DS1PotionWidget_h_973280118(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_UI_DS1PotionWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_UI_DS1PotionWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
