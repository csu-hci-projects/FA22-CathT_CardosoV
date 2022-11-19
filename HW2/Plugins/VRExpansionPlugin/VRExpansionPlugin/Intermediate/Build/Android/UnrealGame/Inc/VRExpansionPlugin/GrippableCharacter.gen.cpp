// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Grippables/GrippableCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrippableCharacter() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AGrippableCharacter_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AGrippableCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGrippableSkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AGrippableCharacter::StaticRegisterNativesAGrippableCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrippableCharacter);
	UClass* Z_Construct_UClass_AGrippableCharacter_NoRegister()
	{
		return AGrippableCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGrippableCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrippableMeshReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GrippableMeshReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewOriginationSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ViewOriginationSocket;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrippableCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Grippables/GrippableCharacter.h" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableCharacter_Statics::NewProp_GrippableMeshReference_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GrippableCharacter" },
		{ "Comment", "// A reference to the grippable character that can be used instead of casting the root, BP doesn't like the class override.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCharacter.h" },
		{ "ToolTip", "A reference to the grippable character that can be used instead of casting the root, BP doesn't like the class override." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGrippableCharacter_Statics::NewProp_GrippableMeshReference = { "GrippableMeshReference", nullptr, (EPropertyFlags)0x00140000000a201d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableCharacter, GrippableMeshReference), Z_Construct_UClass_UGrippableSkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrippableCharacter_Statics::NewProp_GrippableMeshReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableCharacter_Statics::NewProp_GrippableMeshReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrippableCharacter_Statics::NewProp_ViewOriginationSocket_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "// A Custom bone to use on the character mesh as the originator for the perception systems sight sense\n" },
		{ "ModuleRelativePath", "Public/Grippables/GrippableCharacter.h" },
		{ "ToolTip", "A Custom bone to use on the character mesh as the originator for the perception systems sight sense" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGrippableCharacter_Statics::NewProp_ViewOriginationSocket = { "ViewOriginationSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrippableCharacter, ViewOriginationSocket), METADATA_PARAMS(Z_Construct_UClass_AGrippableCharacter_Statics::NewProp_ViewOriginationSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableCharacter_Statics::NewProp_ViewOriginationSocket_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrippableCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableCharacter_Statics::NewProp_GrippableMeshReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrippableCharacter_Statics::NewProp_ViewOriginationSocket,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrippableCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrippableCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrippableCharacter_Statics::ClassParams = {
		&AGrippableCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGrippableCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGrippableCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrippableCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrippableCharacter()
	{
		if (!Z_Registration_Info_UClass_AGrippableCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrippableCharacter.OuterSingleton, Z_Construct_UClass_AGrippableCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGrippableCharacter.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AGrippableCharacter>()
	{
		return AGrippableCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrippableCharacter);
	struct Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGrippableCharacter, AGrippableCharacter::StaticClass, TEXT("AGrippableCharacter"), &Z_Registration_Info_UClass_AGrippableCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrippableCharacter), 144230893U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCharacter_h_3422525489(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Grippables_GrippableCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
