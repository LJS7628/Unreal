// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Notifies/CAnimNotifyState_Collision.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCAnimNotifyState_Collision() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCAnimNotifyState_Collision();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCAnimNotifyState_Collision_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	void UCAnimNotifyState_Collision::StaticRegisterNativesUCAnimNotifyState_Collision()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCAnimNotifyState_Collision);
	UClass* Z_Construct_UClass_UCAnimNotifyState_Collision_NoRegister()
	{
		return UCAnimNotifyState_Collision::StaticClass();
	}
	struct Z_Construct_UClass_UCAnimNotifyState_Collision_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCAnimNotifyState_Collision_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotifyState_Collision_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCAnimNotifyState_Collision_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Notifies/CAnimNotifyState_Collision.h" },
		{ "ModuleRelativePath", "Notifies/CAnimNotifyState_Collision.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCAnimNotifyState_Collision_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCAnimNotifyState_Collision>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCAnimNotifyState_Collision_Statics::ClassParams = {
		&UCAnimNotifyState_Collision::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCAnimNotifyState_Collision_Statics::Class_MetaDataParams), Z_Construct_UClass_UCAnimNotifyState_Collision_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCAnimNotifyState_Collision()
	{
		if (!Z_Registration_Info_UClass_UCAnimNotifyState_Collision.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCAnimNotifyState_Collision.OuterSingleton, Z_Construct_UClass_UCAnimNotifyState_Collision_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCAnimNotifyState_Collision.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCAnimNotifyState_Collision>()
	{
		return UCAnimNotifyState_Collision::StaticClass();
	}
	UCAnimNotifyState_Collision::UCAnimNotifyState_Collision(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCAnimNotifyState_Collision);
	UCAnimNotifyState_Collision::~UCAnimNotifyState_Collision() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotifyState_Collision_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotifyState_Collision_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCAnimNotifyState_Collision, UCAnimNotifyState_Collision::StaticClass, TEXT("UCAnimNotifyState_Collision"), &Z_Registration_Info_UClass_UCAnimNotifyState_Collision, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCAnimNotifyState_Collision), 2465022729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotifyState_Collision_h_3951153324(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotifyState_Collision_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Notifies_CAnimNotifyState_Collision_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
