// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenXRExpansionPlugin_init() {}
	OPENXREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature();
	OPENXREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OpenXRExpansionPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OpenXRExpansionPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_OpenXRExpansionPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureDetected__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OpenXRExpansionPlugin_OpenXRGestureEnded__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OpenXRExpansionPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA887C0FA,
				0xF802E6AA,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OpenXRExpansionPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OpenXRExpansionPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OpenXRExpansionPlugin(Z_Construct_UPackage__Script_OpenXRExpansionPlugin, TEXT("/Script/OpenXRExpansionPlugin"), Z_Registration_Info_UPackage__Script_OpenXRExpansionPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA887C0FA, 0xF802E6AA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
