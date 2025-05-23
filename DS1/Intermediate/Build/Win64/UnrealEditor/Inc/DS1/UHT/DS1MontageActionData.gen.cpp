// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Data/DS1MontageActionData.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1MontageActionData() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_UDS1MontageActionData();
DS1_API UClass* Z_Construct_UClass_UDS1MontageActionData_NoRegister();
DS1_API UScriptStruct* Z_Construct_UScriptStruct_FDS1MontageGroup();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin ScriptStruct FDS1MontageGroup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DS1MontageGroup;
class UScriptStruct* FDS1MontageGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DS1MontageGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DS1MontageGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDS1MontageGroup, (UObject*)Z_Construct_UPackage__Script_DS1(), TEXT("DS1MontageGroup"));
	}
	return Z_Registration_Info_UScriptStruct_DS1MontageGroup.OuterSingleton;
}
template<> DS1_API UScriptStruct* StaticStruct<FDS1MontageGroup>()
{
	return FDS1MontageGroup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDS1MontageGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/DS1MontageActionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animations_MetaData[] = {
		{ "Category", "DS1MontageGroup" },
		{ "ModuleRelativePath", "Data/DS1MontageActionData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Animations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Animations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDS1MontageGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDS1MontageGroup_Statics::NewProp_Animations_Inner = { "Animations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDS1MontageGroup_Statics::NewProp_Animations = { "Animations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDS1MontageGroup, Animations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animations_MetaData), NewProp_Animations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDS1MontageGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDS1MontageGroup_Statics::NewProp_Animations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDS1MontageGroup_Statics::NewProp_Animations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDS1MontageGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDS1MontageGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
	nullptr,
	&NewStructOps,
	"DS1MontageGroup",
	Z_Construct_UScriptStruct_FDS1MontageGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDS1MontageGroup_Statics::PropPointers),
	sizeof(FDS1MontageGroup),
	alignof(FDS1MontageGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDS1MontageGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDS1MontageGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDS1MontageGroup()
{
	if (!Z_Registration_Info_UScriptStruct_DS1MontageGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DS1MontageGroup.InnerSingleton, Z_Construct_UScriptStruct_FDS1MontageGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DS1MontageGroup.InnerSingleton;
}
// End ScriptStruct FDS1MontageGroup

// Begin Class UDS1MontageActionData
void UDS1MontageActionData::StaticRegisterNativesUDS1MontageActionData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDS1MontageActionData);
UClass* Z_Construct_UClass_UDS1MontageActionData_NoRegister()
{
	return UDS1MontageActionData::StaticClass();
}
struct Z_Construct_UClass_UDS1MontageActionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Data/DS1MontageActionData.h" },
		{ "ModuleRelativePath", "Data/DS1MontageActionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageGroupMap_MetaData[] = {
		{ "Category", "DS1MontageActionData" },
		{ "DisplayName", "Montage Groups" },
		{ "ModuleRelativePath", "Data/DS1MontageActionData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MontageGroupMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MontageGroupMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MontageGroupMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDS1MontageActionData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDS1MontageActionData_Statics::NewProp_MontageGroupMap_ValueProp = { "MontageGroupMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDS1MontageGroup, METADATA_PARAMS(0, nullptr) }; // 321818389
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDS1MontageActionData_Statics::NewProp_MontageGroupMap_Key_KeyProp = { "MontageGroupMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDS1MontageActionData_Statics::NewProp_MontageGroupMap = { "MontageGroupMap", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1MontageActionData, MontageGroupMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageGroupMap_MetaData), NewProp_MontageGroupMap_MetaData) }; // 1298103297 321818389
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDS1MontageActionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1MontageActionData_Statics::NewProp_MontageGroupMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1MontageActionData_Statics::NewProp_MontageGroupMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1MontageActionData_Statics::NewProp_MontageGroupMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1MontageActionData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDS1MontageActionData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1MontageActionData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDS1MontageActionData_Statics::ClassParams = {
	&UDS1MontageActionData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDS1MontageActionData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDS1MontageActionData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1MontageActionData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDS1MontageActionData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDS1MontageActionData()
{
	if (!Z_Registration_Info_UClass_UDS1MontageActionData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDS1MontageActionData.OuterSingleton, Z_Construct_UClass_UDS1MontageActionData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDS1MontageActionData.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UDS1MontageActionData>()
{
	return UDS1MontageActionData::StaticClass();
}
UDS1MontageActionData::UDS1MontageActionData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDS1MontageActionData);
UDS1MontageActionData::~UDS1MontageActionData() {}
// End Class UDS1MontageActionData

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Data_DS1MontageActionData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDS1MontageGroup::StaticStruct, Z_Construct_UScriptStruct_FDS1MontageGroup_Statics::NewStructOps, TEXT("DS1MontageGroup"), &Z_Registration_Info_UScriptStruct_DS1MontageGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDS1MontageGroup), 321818389U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDS1MontageActionData, UDS1MontageActionData::StaticClass, TEXT("UDS1MontageActionData"), &Z_Registration_Info_UClass_UDS1MontageActionData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDS1MontageActionData), 696919037U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Data_DS1MontageActionData_h_2494281152(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Data_DS1MontageActionData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Data_DS1MontageActionData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Data_DS1MontageActionData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Data_DS1MontageActionData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
