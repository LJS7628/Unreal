// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Components/DS1RotationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1RotationComponent() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_UDS1RotationComponent();
DS1_API UClass* Z_Construct_UClass_UDS1RotationComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UDS1RotationComponent
void UDS1RotationComponent::StaticRegisterNativesUDS1RotationComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDS1RotationComponent);
UClass* Z_Construct_UClass_UDS1RotationComponent_NoRegister()
{
	return UDS1RotationComponent::StaticClass();
}
struct Z_Construct_UClass_UDS1RotationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/DS1RotationComponent.h" },
		{ "ModuleRelativePath", "Components/DS1RotationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "DS1RotationComponent" },
		{ "ModuleRelativePath", "Components/DS1RotationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldRotate_MetaData[] = {
		{ "Category", "DS1RotationComponent" },
		{ "ModuleRelativePath", "Components/DS1RotationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static void NewProp_bShouldRotate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRotate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDS1RotationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDS1RotationComponent_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1RotationComponent, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
void Z_Construct_UClass_UDS1RotationComponent_Statics::NewProp_bShouldRotate_SetBit(void* Obj)
{
	((UDS1RotationComponent*)Obj)->bShouldRotate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDS1RotationComponent_Statics::NewProp_bShouldRotate = { "bShouldRotate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDS1RotationComponent), &Z_Construct_UClass_UDS1RotationComponent_Statics::NewProp_bShouldRotate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldRotate_MetaData), NewProp_bShouldRotate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDS1RotationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1RotationComponent_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1RotationComponent_Statics::NewProp_bShouldRotate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1RotationComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDS1RotationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1RotationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDS1RotationComponent_Statics::ClassParams = {
	&UDS1RotationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDS1RotationComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDS1RotationComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1RotationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDS1RotationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDS1RotationComponent()
{
	if (!Z_Registration_Info_UClass_UDS1RotationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDS1RotationComponent.OuterSingleton, Z_Construct_UClass_UDS1RotationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDS1RotationComponent.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UDS1RotationComponent>()
{
	return UDS1RotationComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDS1RotationComponent);
UDS1RotationComponent::~UDS1RotationComponent() {}
// End Class UDS1RotationComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Components_DS1RotationComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDS1RotationComponent, UDS1RotationComponent::StaticClass, TEXT("UDS1RotationComponent"), &Z_Registration_Info_UClass_UDS1RotationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDS1RotationComponent), 238019287U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Components_DS1RotationComponent_h_3814491845(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Components_DS1RotationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Components_DS1RotationComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
