// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRAIController() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRAIController_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRDetourCrowdAIController_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRDetourCrowdAIController();
// End Cross Module References
	void AVRAIController::StaticRegisterNativesAVRAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRAIController);
	UClass* Z_Construct_UClass_AVRAIController_NoRegister()
	{
		return AVRAIController::StaticClass();
	}
	struct Z_Construct_UClass_AVRAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "VRAIController.h" },
		{ "ModuleRelativePath", "Public/VRAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRAIController_Statics::ClassParams = {
		&AVRAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVRAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVRAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRAIController()
	{
		if (!Z_Registration_Info_UClass_AVRAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRAIController.OuterSingleton, Z_Construct_UClass_AVRAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVRAIController.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRAIController>()
	{
		return AVRAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRAIController);
	void AVRDetourCrowdAIController::StaticRegisterNativesAVRDetourCrowdAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRDetourCrowdAIController);
	UClass* Z_Construct_UClass_AVRDetourCrowdAIController_NoRegister()
	{
		return AVRDetourCrowdAIController::StaticClass();
	}
	struct Z_Construct_UClass_AVRDetourCrowdAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRDetourCrowdAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVRAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRDetourCrowdAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "VRAIController.h" },
		{ "ModuleRelativePath", "Public/VRAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRDetourCrowdAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRDetourCrowdAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRDetourCrowdAIController_Statics::ClassParams = {
		&AVRDetourCrowdAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVRDetourCrowdAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVRDetourCrowdAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRDetourCrowdAIController()
	{
		if (!Z_Registration_Info_UClass_AVRDetourCrowdAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRDetourCrowdAIController.OuterSingleton, Z_Construct_UClass_AVRDetourCrowdAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVRDetourCrowdAIController.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRDetourCrowdAIController>()
	{
		return AVRDetourCrowdAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRDetourCrowdAIController);
	struct Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVRAIController, AVRAIController::StaticClass, TEXT("AVRAIController"), &Z_Registration_Info_UClass_AVRAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRAIController), 1950233503U) },
		{ Z_Construct_UClass_AVRDetourCrowdAIController, AVRDetourCrowdAIController::StaticClass, TEXT("AVRDetourCrowdAIController"), &Z_Registration_Info_UClass_AVRDetourCrowdAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRDetourCrowdAIController), 1884864201U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRAIController_h_135610437(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
