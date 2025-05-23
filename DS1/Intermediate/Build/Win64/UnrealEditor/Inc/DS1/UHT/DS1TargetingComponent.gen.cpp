// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Components/DS1TargetingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1TargetingComponent() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_UDS1TargetingComponent();
DS1_API UClass* Z_Construct_UClass_UDS1TargetingComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UDS1TargetingComponent
void UDS1TargetingComponent::StaticRegisterNativesUDS1TargetingComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDS1TargetingComponent);
UClass* Z_Construct_UClass_UDS1TargetingComponent_NoRegister()
{
	return UDS1TargetingComponent::StaticClass();
}
struct Z_Construct_UClass_UDS1TargetingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/DS1TargetingComponent.h" },
		{ "ModuleRelativePath", "Components/DS1TargetingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingRadius_MetaData[] = {
		{ "Category", "DS1TargetingComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** LockOn \xec\x8b\x9c\xed\x82\xac \xed\x9b\x84\xeb\xb3\xb4\xea\xb5\xb0\xec\x9d\x84 \xea\xb0\x90\xec\xa7\x80\xed\x95\xa0 \xec\x98\x81\xec\x97\xad\xec\x9d\x98 \xed\x81\xac\xea\xb8\xb0(\xeb\xb0\x98\xec\xa7\x80\xeb\xa6\x84) */" },
#endif
		{ "ModuleRelativePath", "Components/DS1TargetingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LockOn \xec\x8b\x9c\xed\x82\xac \xed\x9b\x84\xeb\xb3\xb4\xea\xb5\xb0\xec\x9d\x84 \xea\xb0\x90\xec\xa7\x80\xed\x95\xa0 \xec\x98\x81\xec\x97\xad\xec\x9d\x98 \xed\x81\xac\xea\xb8\xb0(\xeb\xb0\x98\xec\xa7\x80\xeb\xa6\x84)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceLockOnRotationSpeed_MetaData[] = {
		{ "Category", "DS1TargetingComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** LockOn\xec\x8b\x9c \xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc \xed\x9a\x8c\xec\xa0\x84 \xec\x86\x8d\xeb\x8f\x84 */" },
#endif
		{ "ModuleRelativePath", "Components/DS1TargetingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LockOn\xec\x8b\x9c \xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc \xed\x9a\x8c\xec\xa0\x84 \xec\x86\x8d\xeb\x8f\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawDebugType_MetaData[] = {
		{ "Category", "DS1TargetingComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\x94\x94\xeb\xb2\x84\xea\xb7\xb8 \xeb\x93\x9c\xeb\xa1\x9c\xec\x9a\xb0 \xed\x83\x80\xec\x9e\x85 */" },
#endif
		{ "ModuleRelativePath", "Components/DS1TargetingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x94\x94\xeb\xb2\x84\xea\xb7\xb8 \xeb\x93\x9c\xeb\xa1\x9c\xec\x9a\xb0 \xed\x83\x80\xec\x9e\x85" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Components/DS1TargetingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/DS1TargetingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedTargetActor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xed\x98\x84\xec\x9e\xac LockOn\xeb\x90\x9c \xeb\x8c\x80\xec\x83\x81 */" },
#endif
		{ "ModuleRelativePath", "Components/DS1TargetingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac LockOn\xeb\x90\x9c \xeb\x8c\x80\xec\x83\x81" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetingRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FaceLockOnRotationSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LockedTargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDS1TargetingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDS1TargetingComponent_Statics::NewProp_TargetingRadius = { "TargetingRadius", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1TargetingComponent, TargetingRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingRadius_MetaData), NewProp_TargetingRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDS1TargetingComponent_Statics::NewProp_FaceLockOnRotationSpeed = { "FaceLockOnRotationSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1TargetingComponent, FaceLockOnRotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceLockOnRotationSpeed_MetaData), NewProp_FaceLockOnRotationSpeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDS1TargetingComponent_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1TargetingComponent, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawDebugType_MetaData), NewProp_DrawDebugType_MetaData) }; // 2070357899
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDS1TargetingComponent_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1TargetingComponent, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDS1TargetingComponent_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1TargetingComponent, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDS1TargetingComponent_Statics::NewProp_LockedTargetActor = { "LockedTargetActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDS1TargetingComponent, LockedTargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedTargetActor_MetaData), NewProp_LockedTargetActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDS1TargetingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1TargetingComponent_Statics::NewProp_TargetingRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1TargetingComponent_Statics::NewProp_FaceLockOnRotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1TargetingComponent_Statics::NewProp_DrawDebugType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1TargetingComponent_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1TargetingComponent_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDS1TargetingComponent_Statics::NewProp_LockedTargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1TargetingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDS1TargetingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1TargetingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDS1TargetingComponent_Statics::ClassParams = {
	&UDS1TargetingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDS1TargetingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDS1TargetingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1TargetingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDS1TargetingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDS1TargetingComponent()
{
	if (!Z_Registration_Info_UClass_UDS1TargetingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDS1TargetingComponent.OuterSingleton, Z_Construct_UClass_UDS1TargetingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDS1TargetingComponent.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UDS1TargetingComponent>()
{
	return UDS1TargetingComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDS1TargetingComponent);
UDS1TargetingComponent::~UDS1TargetingComponent() {}
// End Class UDS1TargetingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Components_DS1TargetingComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDS1TargetingComponent, UDS1TargetingComponent::StaticClass, TEXT("UDS1TargetingComponent"), &Z_Registration_Info_UClass_UDS1TargetingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDS1TargetingComponent), 3838396770U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Components_DS1TargetingComponent_h_2296722312(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Components_DS1TargetingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Components_DS1TargetingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
