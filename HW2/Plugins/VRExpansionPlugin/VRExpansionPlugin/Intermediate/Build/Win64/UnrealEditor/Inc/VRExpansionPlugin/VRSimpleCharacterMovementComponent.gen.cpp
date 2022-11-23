// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/SimpleChar/VRSimpleCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRSimpleCharacterMovementComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRSimpleCharacterMovementComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRSimpleCharacterMovementComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void UVRSimpleCharacterMovementComponent::StaticRegisterNativesUVRSimpleCharacterMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRSimpleCharacterMovementComponent);
	UClass* Z_Construct_UClass_UVRSimpleCharacterMovementComponent_NoRegister()
	{
		return UVRSimpleCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRRootCapsule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VRRootCapsule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VRCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipHMDChecks_MetaData[];
#endif
		static void NewProp_bSkipHMDChecks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipHMDChecks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIMoveCompletedSignature, FAIRequestID, RequestID, EPathFollowingResult::Type, Result);\n" },
		{ "IncludePath", "SimpleChar/VRSimpleCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIMoveCompletedSignature, FAIRequestID, RequestID, EPathFollowingResult::Type, Result);" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_VRRootCapsule_MetaData[] = {
		{ "Category", "VRMovement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_VRRootCapsule = { "VRRootCapsule", nullptr, (EPropertyFlags)0x001000000008201c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSimpleCharacterMovementComponent, VRRootCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_VRRootCapsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_VRRootCapsule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_VRCameraComponent_MetaData[] = {
		{ "Category", "VRMovement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_VRCameraComponent = { "VRCameraComponent", nullptr, (EPropertyFlags)0x001000000008201c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRSimpleCharacterMovementComponent, VRCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_VRCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_VRCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_bSkipHMDChecks_MetaData[] = {
		{ "Category", "VRMovement" },
		{ "Comment", "// Skips checking for the HMD location on tick, for 2D pawns when a headset is connected\n" },
		{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacterMovementComponent.h" },
		{ "ToolTip", "Skips checking for the HMD location on tick, for 2D pawns when a headset is connected" },
	};
#endif
	void Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_bSkipHMDChecks_SetBit(void* Obj)
	{
		((UVRSimpleCharacterMovementComponent*)Obj)->bSkipHMDChecks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_bSkipHMDChecks = { "bSkipHMDChecks", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRSimpleCharacterMovementComponent), &Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_bSkipHMDChecks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_bSkipHMDChecks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_bSkipHMDChecks_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_VRRootCapsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_VRCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::NewProp_bSkipHMDChecks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRSimpleCharacterMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::ClassParams = {
		&UVRSimpleCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRSimpleCharacterMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UVRSimpleCharacterMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRSimpleCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UVRSimpleCharacterMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVRSimpleCharacterMovementComponent.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRSimpleCharacterMovementComponent>()
	{
		return UVRSimpleCharacterMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRSimpleCharacterMovementComponent);
	struct Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacterMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacterMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVRSimpleCharacterMovementComponent, UVRSimpleCharacterMovementComponent::StaticClass, TEXT("UVRSimpleCharacterMovementComponent"), &Z_Registration_Info_UClass_UVRSimpleCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRSimpleCharacterMovementComponent), 2261869885U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacterMovementComponent_h_2377239970(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HW2_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacterMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
