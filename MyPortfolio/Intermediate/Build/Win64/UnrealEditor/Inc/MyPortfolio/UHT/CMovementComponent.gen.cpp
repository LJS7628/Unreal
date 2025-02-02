// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPortfolio/Components/CMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCMovementComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCMovementComponent();
	MYPORTFOLIO_API UClass* Z_Construct_UClass_UCMovementComponent_NoRegister();
	MYPORTFOLIO_API UEnum* Z_Construct_UEnum_MyPortfolio_ESpeedType();
	UPackage* Z_Construct_UPackage__Script_MyPortfolio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpeedType;
	static UEnum* ESpeedType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESpeedType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESpeedType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MyPortfolio_ESpeedType, (UObject*)Z_Construct_UPackage__Script_MyPortfolio(), TEXT("ESpeedType"));
		}
		return Z_Registration_Info_UEnum_ESpeedType.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UEnum* StaticEnum<ESpeedType>()
	{
		return ESpeedType_StaticEnum();
	}
	struct Z_Construct_UEnum_MyPortfolio_ESpeedType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MyPortfolio_ESpeedType_Statics::Enumerators[] = {
		{ "ESpeedType::Walk", (int64)ESpeedType::Walk },
		{ "ESpeedType::Run", (int64)ESpeedType::Run },
		{ "ESpeedType::Sprint", (int64)ESpeedType::Sprint },
		{ "ESpeedType::Max", (int64)ESpeedType::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MyPortfolio_ESpeedType_Statics::Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb8\xef\xbf\xbd Enum\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "Max.Name", "ESpeedType::Max" },
		{ "ModuleRelativePath", "Components/CMovementComponent.h" },
		{ "Run.Name", "ESpeedType::Run" },
		{ "Sprint.Name", "ESpeedType::Sprint" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb8\xef\xbf\xbd Enum\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
		{ "Walk.Name", "ESpeedType::Walk" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MyPortfolio_ESpeedType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MyPortfolio,
		nullptr,
		"ESpeedType",
		"ESpeedType",
		Z_Construct_UEnum_MyPortfolio_ESpeedType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MyPortfolio_ESpeedType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MyPortfolio_ESpeedType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MyPortfolio_ESpeedType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MyPortfolio_ESpeedType()
	{
		if (!Z_Registration_Info_UEnum_ESpeedType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpeedType.InnerSingleton, Z_Construct_UEnum_MyPortfolio_ESpeedType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESpeedType.InnerSingleton;
	}
	void UCMovementComponent::StaticRegisterNativesUCMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCMovementComponent);
	UClass* Z_Construct_UClass_UCMovementComponent_NoRegister()
	{
		return UCMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchAngle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PitchAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalLook_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalLook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalLook_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalLook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackStepMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackStepMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackStepMontage_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BackStepMontage_PlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPortfolio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCMovementComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CMovementComponent.h" },
		{ "ModuleRelativePath", "Components/CMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCMovementComponent_Statics::NewProp_Speed_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MyPortfolio.ESpeedType" },
		{ "Category", "Speed" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Components/CMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCMovementComponent_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Speed, UCMovementComponent), STRUCT_OFFSET(UCMovementComponent, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCMovementComponent_Statics::NewProp_Speed_MetaData), Z_Construct_UClass_UCMovementComponent_Statics::NewProp_Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCMovementComponent_Statics::NewProp_PitchAngle_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Camera \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Components/CMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCMovementComponent_Statics::NewProp_PitchAngle = { "PitchAngle", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCMovementComponent, PitchAngle), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCMovementComponent_Statics::NewProp_PitchAngle_MetaData), Z_Construct_UClass_UCMovementComponent_Statics::NewProp_PitchAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCMovementComponent_Statics::NewProp_HorizontalLook_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Camera \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xec\xbd\xba \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Components/CMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xec\xbd\xba \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCMovementComponent_Statics::NewProp_HorizontalLook = { "HorizontalLook", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCMovementComponent, HorizontalLook), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCMovementComponent_Statics::NewProp_HorizontalLook_MetaData), Z_Construct_UClass_UCMovementComponent_Statics::NewProp_HorizontalLook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCMovementComponent_Statics::NewProp_VerticalLook_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Camera \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xec\xbd\xba \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Components/CMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xec\xbd\xba \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCMovementComponent_Statics::NewProp_VerticalLook = { "VerticalLook", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCMovementComponent, VerticalLook), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCMovementComponent_Statics::NewProp_VerticalLook_MetaData), Z_Construct_UClass_UCMovementComponent_Statics::NewProp_VerticalLook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCMovementComponent_Statics::NewProp_BackStepMontage_MetaData[] = {
		{ "Category", "Evade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Evade Montage\n" },
#endif
		{ "ModuleRelativePath", "Components/CMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Evade Montage" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCMovementComponent_Statics::NewProp_BackStepMontage = { "BackStepMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCMovementComponent, BackStepMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCMovementComponent_Statics::NewProp_BackStepMontage_MetaData), Z_Construct_UClass_UCMovementComponent_Statics::NewProp_BackStepMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCMovementComponent_Statics::NewProp_BackStepMontage_PlayRate_MetaData[] = {
		{ "Category", "Evade" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Evade Animation \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Components/CMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Evade Animation \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCMovementComponent_Statics::NewProp_BackStepMontage_PlayRate = { "BackStepMontage_PlayRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCMovementComponent, BackStepMontage_PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCMovementComponent_Statics::NewProp_BackStepMontage_PlayRate_MetaData), Z_Construct_UClass_UCMovementComponent_Statics::NewProp_BackStepMontage_PlayRate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCMovementComponent_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCMovementComponent_Statics::NewProp_PitchAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCMovementComponent_Statics::NewProp_HorizontalLook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCMovementComponent_Statics::NewProp_VerticalLook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCMovementComponent_Statics::NewProp_BackStepMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCMovementComponent_Statics::NewProp_BackStepMontage_PlayRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCMovementComponent_Statics::ClassParams = {
		&UCMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCMovementComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCMovementComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UCMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCMovementComponent.OuterSingleton, Z_Construct_UClass_UCMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCMovementComponent.OuterSingleton;
	}
	template<> MYPORTFOLIO_API UClass* StaticClass<UCMovementComponent>()
	{
		return UCMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCMovementComponent);
	UCMovementComponent::~UCMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h_Statics::EnumInfo[] = {
		{ ESpeedType_StaticEnum, TEXT("ESpeedType"), &Z_Registration_Info_UEnum_ESpeedType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3349901852U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCMovementComponent, UCMovementComponent::StaticClass, TEXT("UCMovementComponent"), &Z_Registration_Info_UClass_UCMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCMovementComponent), 3475528041U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h_2783029906(TEXT("/Script/MyPortfolio"),
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPortfolio_Source_MyPortfolio_Components_CMovementComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
