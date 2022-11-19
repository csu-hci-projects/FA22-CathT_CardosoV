// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/GripScripts/GS_Physics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGS_Physics() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_Physics_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_Physics();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGS_Default();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings();
// End Cross Module References
	void UGS_Physics::StaticRegisterNativesUGS_Physics()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGS_Physics);
	UClass* Z_Construct_UClass_UGS_Physics_NoRegister()
	{
		return UGS_Physics::StaticClass();
	}
	struct Z_Construct_UClass_UGS_Physics_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipGripMassChecks_MetaData[];
#endif
		static void NewProp_bSkipGripMassChecks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipGripMassChecks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SingleHandPhysicsSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SingleHandPhysicsSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiHandPhysicsSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultiHandPhysicsSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGS_Physics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGS_Default,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Physics_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "VRExpansionPlugin" },
		{ "Comment", "/**\n* A pure physics multi hand interaction grip script, expects that bAllowMultiGrips is set on the parent object*\n*/" },
		{ "HideCategories", "TickSettings DefaultSettings" },
		{ "IncludePath", "GripScripts/GS_Physics.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Physics.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A pure physics multi hand interaction grip script, expects that bAllowMultiGrips is set on the parent object*" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Physics_Statics::NewProp_bSkipGripMassChecks_MetaData[] = {
		{ "Category", "Physics Settings" },
		{ "Comment", "// If true then we won't bind to the objects mass updates, we don't expect thing to attach to us\n// This is a perf savings when possible\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Physics.h" },
		{ "ToolTip", "If true then we won't bind to the objects mass updates, we don't expect thing to attach to us\nThis is a perf savings when possible" },
	};
#endif
	void Z_Construct_UClass_UGS_Physics_Statics::NewProp_bSkipGripMassChecks_SetBit(void* Obj)
	{
		((UGS_Physics*)Obj)->bSkipGripMassChecks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGS_Physics_Statics::NewProp_bSkipGripMassChecks = { "bSkipGripMassChecks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGS_Physics), &Z_Construct_UClass_UGS_Physics_Statics::NewProp_bSkipGripMassChecks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGS_Physics_Statics::NewProp_bSkipGripMassChecks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Physics_Statics::NewProp_bSkipGripMassChecks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Physics_Statics::NewProp_SingleHandPhysicsSettings_MetaData[] = {
		{ "Category", "Physics Settings" },
		{ "Comment", "// Grip settings to use when a single hand is gripping, overrides interface defaults\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Physics.h" },
		{ "ToolTip", "Grip settings to use when a single hand is gripping, overrides interface defaults" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_Physics_Statics::NewProp_SingleHandPhysicsSettings = { "SingleHandPhysicsSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGS_Physics, SingleHandPhysicsSettings), Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings, METADATA_PARAMS(Z_Construct_UClass_UGS_Physics_Statics::NewProp_SingleHandPhysicsSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Physics_Statics::NewProp_SingleHandPhysicsSettings_MetaData)) }; // 4098109705
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGS_Physics_Statics::NewProp_MultiHandPhysicsSettings_MetaData[] = {
		{ "Category", "Physics Settings" },
		{ "Comment", "// Grip settings to use when multiple hands are gripping\n// Overrides interface defaults\n" },
		{ "ModuleRelativePath", "Public/GripScripts/GS_Physics.h" },
		{ "ToolTip", "Grip settings to use when multiple hands are gripping\nOverrides interface defaults" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGS_Physics_Statics::NewProp_MultiHandPhysicsSettings = { "MultiHandPhysicsSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGS_Physics, MultiHandPhysicsSettings), Z_Construct_UScriptStruct_FBPAdvancedPhysicsHandleSettings, METADATA_PARAMS(Z_Construct_UClass_UGS_Physics_Statics::NewProp_MultiHandPhysicsSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Physics_Statics::NewProp_MultiHandPhysicsSettings_MetaData)) }; // 4098109705
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGS_Physics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Physics_Statics::NewProp_bSkipGripMassChecks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Physics_Statics::NewProp_SingleHandPhysicsSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGS_Physics_Statics::NewProp_MultiHandPhysicsSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGS_Physics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGS_Physics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGS_Physics_Statics::ClassParams = {
		&UGS_Physics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGS_Physics_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Physics_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGS_Physics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGS_Physics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGS_Physics()
	{
		if (!Z_Registration_Info_UClass_UGS_Physics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGS_Physics.OuterSingleton, Z_Construct_UClass_UGS_Physics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGS_Physics.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UGS_Physics>()
	{
		return UGS_Physics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGS_Physics);
	struct Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Physics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Physics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGS_Physics, UGS_Physics::StaticClass, TEXT("UGS_Physics"), &Z_Registration_Info_UClass_UGS_Physics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGS_Physics), 3193470452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Physics_h_4233386680(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Physics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripScripts_GS_Physics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
