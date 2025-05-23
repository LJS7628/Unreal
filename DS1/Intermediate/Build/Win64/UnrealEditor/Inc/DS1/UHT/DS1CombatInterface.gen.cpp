// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DS1/Interfaces/DS1CombatInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1CombatInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DS1_API UClass* Z_Construct_UClass_UDS1CombatInterface();
DS1_API UClass* Z_Construct_UClass_UDS1CombatInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_DS1();
// End Cross Module References

// Begin Interface UDS1CombatInterface
void UDS1CombatInterface::StaticRegisterNativesUDS1CombatInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDS1CombatInterface);
UClass* Z_Construct_UClass_UDS1CombatInterface_NoRegister()
{
	return UDS1CombatInterface::StaticClass();
}
struct Z_Construct_UClass_UDS1CombatInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/DS1CombatInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDS1CombatInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDS1CombatInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DS1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1CombatInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDS1CombatInterface_Statics::ClassParams = {
	&UDS1CombatInterface::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1CombatInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDS1CombatInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDS1CombatInterface()
{
	if (!Z_Registration_Info_UClass_UDS1CombatInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDS1CombatInterface.OuterSingleton, Z_Construct_UClass_UDS1CombatInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDS1CombatInterface.OuterSingleton;
}
template<> DS1_API UClass* StaticClass<UDS1CombatInterface>()
{
	return UDS1CombatInterface::StaticClass();
}
UDS1CombatInterface::UDS1CombatInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDS1CombatInterface);
UDS1CombatInterface::~UDS1CombatInterface() {}
// End Interface UDS1CombatInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_DS1_Source_DS1_Interfaces_DS1CombatInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDS1CombatInterface, UDS1CombatInterface::StaticClass, TEXT("UDS1CombatInterface"), &Z_Registration_Info_UClass_UDS1CombatInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDS1CombatInterface), 2404795361U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DS1_Source_DS1_Interfaces_DS1CombatInterface_h_2706354843(TEXT("/Script/DS1"),
	Z_CompiledInDeferFile_FID_DS1_Source_DS1_Interfaces_DS1CombatInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DS1_Source_DS1_Interfaces_DS1CombatInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
