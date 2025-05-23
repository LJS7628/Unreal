// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Animation/NotifyState_DS1WeaponCollision.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotifyState_DS1WeaponCollision() {}

// Begin Cross Module References
DS1_API UClass* Z_Construct_UClass_UNotifyState_DS1WeaponCollision();
DS1_API UClass* Z_Construct_UClass_UNotifyState_DS1WeaponCollision_NoRegister();
DS1_API UEnum* Z_Construct_UEnum_DS1_EWeaponCollisionType();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Class UNotifyState_DS1WeaponCollision
void UNotifyState_DS1WeaponCollision::StaticRegisterNativesUNotifyState_DS1WeaponCollision()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNotifyState_DS1WeaponCollision);
UClass* Z_Construct_UClass_UNotifyState_DS1WeaponCollision_NoRegister()
{
	return UNotifyState_DS1WeaponCollision::StaticClass();
}
struct Z_Construct_UClass_UNotifyState_DS1WeaponCollision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Weapon Collision" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/NotifyState_DS1WeaponCollision.h" },
		{ "ModuleRelativePath", "Animation/NotifyState_DS1WeaponCollision.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[] = {
		{ "Category", "NotifyState_DS1WeaponCollision" },
		{ "ModuleRelativePath", "Animation/NotifyState_DS1WeaponCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNotifyState_DS1WeaponCollision>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNotifyState_DS1WeaponCollision_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNotifyState_DS1WeaponCollision_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNotifyState_DS1WeaponCollision, CollisionType), Z_Construct_UEnum_DS1_EWeaponCollisionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionType_MetaData), NewProp_CollisionType_MetaData) }; // 3509697773
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNotifyState_DS1WeaponCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotifyState_DS1WeaponCollision_Statics::NewProp_CollisionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNotifyState_DS1WeaponCollision_Statics::NewProp_CollisionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNotifyState_DS1WeaponCollision_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNotifyState_DS1WeaponCollision_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNotifyState_DS1WeaponCollision_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNotifyState_DS1WeaponCollision_Statics::ClassParams = {
	&UNotifyState_DS1WeaponCollision::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNotifyState_DS1WeaponCollision_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNotifyState_DS1WeaponCollision_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNotifyState_DS1WeaponCollision_Statics::Class_MetaDataParams), Z_Construct_UClass_UNotifyState_DS1WeaponCollision_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNotifyState_DS1WeaponCollision()
{
	if (!Z_Registration_Info_UClass_UNotifyState_DS1WeaponCollision.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNotifyState_DS1WeaponCollision.OuterSingleton, Z_Construct_UClass_UNotifyState_DS1WeaponCollision_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNotifyState_DS1WeaponCollision.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UNotifyState_DS1WeaponCollision>()
{
	return UNotifyState_DS1WeaponCollision::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNotifyState_DS1WeaponCollision);
UNotifyState_DS1WeaponCollision::~UNotifyState_DS1WeaponCollision() {}
// End Class UNotifyState_DS1WeaponCollision

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_NotifyState_DS1WeaponCollision_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNotifyState_DS1WeaponCollision, UNotifyState_DS1WeaponCollision::StaticClass, TEXT("UNotifyState_DS1WeaponCollision"), &Z_Registration_Info_UClass_UNotifyState_DS1WeaponCollision, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNotifyState_DS1WeaponCollision), 3747015317U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_NotifyState_DS1WeaponCollision_h_1202522460(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_NotifyState_DS1WeaponCollision_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Animation_NotifyState_DS1WeaponCollision_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
