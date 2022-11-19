// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRPathFollowingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRPathFollowingComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRPathFollowingComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRPathFollowingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent_NoRegister();
// End Cross Module References
	void UVRPathFollowingComponent::StaticRegisterNativesUVRPathFollowingComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRPathFollowingComponent);
	UClass* Z_Construct_UClass_UVRPathFollowingComponent_NoRegister()
	{
		return UVRPathFollowingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVRPathFollowingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRMovementComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VRMovementComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRPathFollowingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPathFollowingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRPathFollowingComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VRPathFollowingComponent.h" },
		{ "ModuleRelativePath", "Public/VRPathFollowingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRPathFollowingComponent_Statics::NewProp_VRMovementComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRPathFollowingComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRPathFollowingComponent_Statics::NewProp_VRMovementComp = { "VRMovementComp", nullptr, (EPropertyFlags)0x0010000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRPathFollowingComponent, VRMovementComp), Z_Construct_UClass_UVRBaseCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRPathFollowingComponent_Statics::NewProp_VRMovementComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRPathFollowingComponent_Statics::NewProp_VRMovementComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRPathFollowingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRPathFollowingComponent_Statics::NewProp_VRMovementComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRPathFollowingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRPathFollowingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRPathFollowingComponent_Statics::ClassParams = {
		&UVRPathFollowingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVRPathFollowingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRPathFollowingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVRPathFollowingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRPathFollowingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRPathFollowingComponent()
	{
		if (!Z_Registration_Info_UClass_UVRPathFollowingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRPathFollowingComponent.OuterSingleton, Z_Construct_UClass_UVRPathFollowingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVRPathFollowingComponent.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRPathFollowingComponent>()
	{
		return UVRPathFollowingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRPathFollowingComponent);
	struct Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRPathFollowingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRPathFollowingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVRPathFollowingComponent, UVRPathFollowingComponent::StaticClass, TEXT("UVRPathFollowingComponent"), &Z_Registration_Info_UClass_UVRPathFollowingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRPathFollowingComponent), 255620993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRPathFollowingComponent_h_2020911191(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRPathFollowingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRPathFollowingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
