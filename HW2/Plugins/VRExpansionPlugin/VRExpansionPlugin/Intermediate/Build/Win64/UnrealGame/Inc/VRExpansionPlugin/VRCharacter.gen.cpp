// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRCharacter() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRCharacter_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRCharacter();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBaseCharacter();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRRootComponent_NoRegister();
// End Cross Module References
	void AVRCharacter::StaticRegisterNativesAVRCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRCharacter);
	UClass* Z_Construct_UClass_AVRCharacter_NoRegister()
	{
		return AVRCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AVRCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRRootReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VRRootReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVRBaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VRCharacter.h" },
		{ "ModuleRelativePath", "Public/VRCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCharacter_Statics::NewProp_VRRootReference_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VRCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVRCharacter_Statics::NewProp_VRRootReference = { "VRRootReference", nullptr, (EPropertyFlags)0x00140000000a201d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCharacter, VRRootReference), Z_Construct_UClass_UVRRootComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRCharacter_Statics::NewProp_VRRootReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::NewProp_VRRootReference_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCharacter_Statics::NewProp_VRRootReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRCharacter_Statics::ClassParams = {
		&AVRCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVRCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVRCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRCharacter()
	{
		if (!Z_Registration_Info_UClass_AVRCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRCharacter.OuterSingleton, Z_Construct_UClass_AVRCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVRCharacter.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRCharacter>()
	{
		return AVRCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRCharacter);
	struct Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVRCharacter, AVRCharacter::StaticClass, TEXT("AVRCharacter"), &Z_Registration_Info_UClass_AVRCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRCharacter), 3867835906U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_946980673(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
