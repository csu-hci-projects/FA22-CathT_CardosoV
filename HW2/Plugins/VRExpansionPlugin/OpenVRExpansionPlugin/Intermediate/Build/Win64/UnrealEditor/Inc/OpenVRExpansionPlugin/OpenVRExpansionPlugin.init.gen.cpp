// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenVRExpansionPlugin_init() {}
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardNullCallbackSignature__DelegateSignature();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OpenVRExpansionPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OpenVRExpansionPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_OpenVRExpansionPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardNullCallbackSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OpenVRExpansionPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4092312D,
				0x2A2DB2AE,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OpenVRExpansionPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OpenVRExpansionPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OpenVRExpansionPlugin(Z_Construct_UPackage__Script_OpenVRExpansionPlugin, TEXT("/Script/OpenVRExpansionPlugin"), Z_Registration_Info_UPackage__Script_OpenVRExpansionPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4092312D, 0x2A2DB2AE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
