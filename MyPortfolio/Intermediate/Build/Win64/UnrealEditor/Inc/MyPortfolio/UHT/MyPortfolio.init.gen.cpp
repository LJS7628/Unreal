// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPortfolio_init() {}
	MYPORTFOLIO_API UFunction* Z_Construct_UDelegateFunction_MyPortfolio_StateTypeChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyPortfolio;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyPortfolio()
	{
		if (!Z_Registration_Info_UPackage__Script_MyPortfolio.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MyPortfolio_StateTypeChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyPortfolio",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB94716E9,
				0x2A3D03D3,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyPortfolio.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyPortfolio.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyPortfolio(Z_Construct_UPackage__Script_MyPortfolio, TEXT("/Script/MyPortfolio"), Z_Registration_Info_UPackage__Script_MyPortfolio, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB94716E9, 0x2A3D03D3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
