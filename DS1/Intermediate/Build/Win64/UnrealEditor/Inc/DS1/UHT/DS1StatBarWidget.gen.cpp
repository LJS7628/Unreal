// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/UI/DS1StatBarWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1StatBarWidget() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DS1_API UClass* Z_Construct_UClass_UDS1StatBarWidget();
DS1_API UClass* Z_Construct_UClass_UDS1StatBarWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UDS1StatBarWidget
void UDS1StatBarWidget::StaticRegisterNativesUDS1StatBarWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDS1StatBarWidget);
UClass* Z_Construct_UClass_UDS1StatBarWidget_NoRegister()
{
	return UDS1StatBarWidget::StaticClass();
}
struct Z_Construct_UClass_UDS1StatBarWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/DS1StatBarWidget.h" },
		{ "ModuleRelativePath", "UI/DS1StatBarWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DS1StatBarWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/DS1StatBarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillColorAndOpacity_MetaData[] = {
		{ "Category", "StatBar" },
		{ "ModuleRelativePath", "UI/DS1StatBarWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatBar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FillColorAndOpacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDS1StatBarWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDS1StatBarWidget_Statics::NewProp_StatBar = { "StatBar", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1StatBarWidget, StatBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatBar_MetaData), NewProp_StatBar_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDS1StatBarWidget_Statics::NewProp_FillColorAndOpacity = { "FillColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1StatBarWidget, FillColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillColorAndOpacity_MetaData), NewProp_FillColorAndOpacity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDS1StatBarWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1StatBarWidget_Statics::NewProp_StatBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1StatBarWidget_Statics::NewProp_FillColorAndOpacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1StatBarWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDS1StatBarWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1StatBarWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDS1StatBarWidget_Statics::ClassParams = {
	&UDS1StatBarWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDS1StatBarWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDS1StatBarWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1StatBarWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDS1StatBarWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDS1StatBarWidget()
{
	if (!Z_Registration_Info_UClass_UDS1StatBarWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDS1StatBarWidget.OuterSingleton, Z_Construct_UClass_UDS1StatBarWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDS1StatBarWidget.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UDS1StatBarWidget>()
{
	return UDS1StatBarWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDS1StatBarWidget);
UDS1StatBarWidget::~UDS1StatBarWidget() {}
// End Class UDS1StatBarWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_UI_DS1StatBarWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDS1StatBarWidget, UDS1StatBarWidget::StaticClass, TEXT("UDS1StatBarWidget"), &Z_Registration_Info_UClass_UDS1StatBarWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDS1StatBarWidget), 3340385371U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_UI_DS1StatBarWidget_h_3073294359(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_UI_DS1StatBarWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_UI_DS1StatBarWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
