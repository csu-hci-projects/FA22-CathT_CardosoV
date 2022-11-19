// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VRWheeledVehicle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRWheeledVehicle() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRWheeledVehicle_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRWheeledVehicle();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVRWheeledVehicle::execSetOverrideController)
	{
		P_GET_OBJECT(AController,Z_Param_NewController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetOverrideController(Z_Param_NewController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRWheeledVehicle::execSetBindToInput)
	{
		P_GET_OBJECT(AController,Z_Param_CController);
		P_GET_UBOOL(Z_Param_bBindToInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetBindToInput(Z_Param_CController,Z_Param_bBindToInput);
		P_NATIVE_END;
	}
	void AVRWheeledVehicle::StaticRegisterNativesAVRWheeledVehicle()
	{
		UClass* Class = AVRWheeledVehicle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBindToInput", &AVRWheeledVehicle::execSetBindToInput },
			{ "SetOverrideController", &AVRWheeledVehicle::execSetOverrideController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics
	{
		struct VRWheeledVehicle_eventSetBindToInput_Parms
		{
			AController* CController;
			bool bBindToInput;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CController;
		static void NewProp_bBindToInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBindToInput;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_CController = { "CController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRWheeledVehicle_eventSetBindToInput_Parms, CController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_bBindToInput_SetBit(void* Obj)
	{
		((VRWheeledVehicle_eventSetBindToInput_Parms*)Obj)->bBindToInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_bBindToInput = { "bBindToInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRWheeledVehicle_eventSetBindToInput_Parms), &Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_bBindToInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRWheeledVehicle_eventSetBindToInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRWheeledVehicle_eventSetBindToInput_Parms), &Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_CController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_bBindToInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Public/Misc/VRWheeledVehicle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRWheeledVehicle, nullptr, "SetBindToInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::VRWheeledVehicle_eventSetBindToInput_Parms), Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics
	{
		struct VRWheeledVehicle_eventSetOverrideController_Parms
		{
			AController* NewController;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRWheeledVehicle_eventSetOverrideController_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRWheeledVehicle_eventSetOverrideController_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRWheeledVehicle_eventSetOverrideController_Parms), &Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::NewProp_NewController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "// Calls the movement components override controller function\n" },
		{ "ModuleRelativePath", "Public/Misc/VRWheeledVehicle.h" },
		{ "ToolTip", "Calls the movement components override controller function" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRWheeledVehicle, nullptr, "SetOverrideController", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::VRWheeledVehicle_eventSetOverrideController_Parms), Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRWheeledVehicle);
	UClass* Z_Construct_UClass_AVRWheeledVehicle_NoRegister()
	{
		return AVRWheeledVehicle::StaticClass();
	}
	struct Z_Construct_UClass_AVRWheeledVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRWheeledVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWheeledVehiclePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVRWheeledVehicle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput, "SetBindToInput" }, // 3396356016
		{ &Z_Construct_UFunction_AVRWheeledVehicle_SetOverrideController, "SetOverrideController" }, // 162755926
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRWheeledVehicle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This override of the base wheeled vehicle allows for dual pawn usage in engine.\n*/" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Misc/VRWheeledVehicle.h" },
		{ "ModuleRelativePath", "Public/Misc/VRWheeledVehicle.h" },
		{ "ToolTip", "This override of the base wheeled vehicle allows for dual pawn usage in engine." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRWheeledVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRWheeledVehicle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRWheeledVehicle_Statics::ClassParams = {
		&AVRWheeledVehicle::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVRWheeledVehicle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVRWheeledVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRWheeledVehicle()
	{
		if (!Z_Registration_Info_UClass_AVRWheeledVehicle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRWheeledVehicle.OuterSingleton, Z_Construct_UClass_AVRWheeledVehicle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVRWheeledVehicle.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRWheeledVehicle>()
	{
		return AVRWheeledVehicle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRWheeledVehicle);
	struct Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVRWheeledVehicle, AVRWheeledVehicle::StaticClass, TEXT("AVRWheeledVehicle"), &Z_Registration_Info_UClass_AVRWheeledVehicle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRWheeledVehicle), 3041050917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_1517424217(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRWheeledVehicle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
