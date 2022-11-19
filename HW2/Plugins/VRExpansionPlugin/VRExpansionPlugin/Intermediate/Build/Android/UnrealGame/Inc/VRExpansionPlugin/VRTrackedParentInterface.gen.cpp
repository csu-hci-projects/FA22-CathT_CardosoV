// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRTrackedParentInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRTrackedParentInterface() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRTrackedParentInterface_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRTrackedParentInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode();
// End Cross Module References
	DEFINE_FUNCTION(IVRTrackedParentInterface::execSetTrackedParent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewParentComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WaistRadius);
		P_GET_ENUM(EBPVRWaistTrackingMode,Z_Param_WaistTrackingMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrackedParent(Z_Param_NewParentComponent,Z_Param_WaistRadius,EBPVRWaistTrackingMode(Z_Param_WaistTrackingMode));
		P_NATIVE_END;
	}
	void UVRTrackedParentInterface::StaticRegisterNativesUVRTrackedParentInterface()
	{
		UClass* Class = UVRTrackedParentInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTrackedParent", &IVRTrackedParentInterface::execSetTrackedParent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics
	{
		struct VRTrackedParentInterface_eventSetTrackedParent_Parms
		{
			UPrimitiveComponent* NewParentComponent;
			float WaistRadius;
			EBPVRWaistTrackingMode WaistTrackingMode;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewParentComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewParentComponent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaistRadius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WaistTrackingMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WaistTrackingMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_NewParentComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_NewParentComponent = { "NewParentComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRTrackedParentInterface_eventSetTrackedParent_Parms, NewParentComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_NewParentComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_NewParentComponent_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_WaistRadius = { "WaistRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRTrackedParentInterface_eventSetTrackedParent_Parms, WaistRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_WaistTrackingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_WaistTrackingMode = { "WaistTrackingMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRTrackedParentInterface_eventSetTrackedParent_Parms, WaistTrackingMode), Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode, METADATA_PARAMS(nullptr, 0) }; // 3751524348
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_NewParentComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_WaistRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_WaistTrackingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::NewProp_WaistTrackingMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRTrackedParentInterface" },
		{ "Comment", "// Set a tracked parent\n" },
		{ "ModuleRelativePath", "Public/VRTrackedParentInterface.h" },
		{ "ToolTip", "Set a tracked parent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRTrackedParentInterface, nullptr, "SetTrackedParent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::VRTrackedParentInterface_eventSetTrackedParent_Parms), Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRTrackedParentInterface);
	UClass* Z_Construct_UClass_UVRTrackedParentInterface_NoRegister()
	{
		return UVRTrackedParentInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVRTrackedParentInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRTrackedParentInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRTrackedParentInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent, "SetTrackedParent" }, // 3368300837
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRTrackedParentInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/VRTrackedParentInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRTrackedParentInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVRTrackedParentInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRTrackedParentInterface_Statics::ClassParams = {
		&UVRTrackedParentInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVRTrackedParentInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRTrackedParentInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRTrackedParentInterface()
	{
		if (!Z_Registration_Info_UClass_UVRTrackedParentInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRTrackedParentInterface.OuterSingleton, Z_Construct_UClass_UVRTrackedParentInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVRTrackedParentInterface.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRTrackedParentInterface>()
	{
		return UVRTrackedParentInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRTrackedParentInterface);
	struct Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVRTrackedParentInterface, UVRTrackedParentInterface::StaticClass, TEXT("UVRTrackedParentInterface"), &Z_Registration_Info_UClass_UVRTrackedParentInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRTrackedParentInterface), 3040851625U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_3651742742(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
