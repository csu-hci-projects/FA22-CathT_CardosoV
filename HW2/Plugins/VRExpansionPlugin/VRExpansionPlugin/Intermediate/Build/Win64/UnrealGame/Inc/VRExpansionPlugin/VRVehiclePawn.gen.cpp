// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VRVehiclePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRVehiclePawn() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRVehiclePawn_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRVehiclePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVRVehiclePawn::execForceSecondaryPossession)
	{
		P_GET_OBJECT(AController,Z_Param_NewController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ForceSecondaryPossession(Z_Param_NewController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRVehiclePawn::execSetBindToInput)
	{
		P_GET_OBJECT(AController,Z_Param_CController);
		P_GET_UBOOL(Z_Param_bBindToInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetBindToInput(Z_Param_CController,Z_Param_bBindToInput);
		P_NATIVE_END;
	}
	void AVRVehiclePawn::StaticRegisterNativesAVRVehiclePawn()
	{
		UClass* Class = AVRVehiclePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForceSecondaryPossession", &AVRVehiclePawn::execForceSecondaryPossession },
			{ "SetBindToInput", &AVRVehiclePawn::execSetBindToInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics
	{
		struct VRVehiclePawn_eventForceSecondaryPossession_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRVehiclePawn_eventForceSecondaryPossession_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRVehiclePawn_eventForceSecondaryPossession_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRVehiclePawn_eventForceSecondaryPossession_Parms), &Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::NewProp_NewController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Public/Misc/VRVehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRVehiclePawn, nullptr, "ForceSecondaryPossession", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::VRVehiclePawn_eventForceSecondaryPossession_Parms), Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics
	{
		struct VRVehiclePawn_eventSetBindToInput_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::NewProp_CController = { "CController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRVehiclePawn_eventSetBindToInput_Parms, CController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::NewProp_bBindToInput_SetBit(void* Obj)
	{
		((VRVehiclePawn_eventSetBindToInput_Parms*)Obj)->bBindToInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::NewProp_bBindToInput = { "bBindToInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRVehiclePawn_eventSetBindToInput_Parms), &Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::NewProp_bBindToInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRVehiclePawn_eventSetBindToInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRVehiclePawn_eventSetBindToInput_Parms), &Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::NewProp_CController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::NewProp_bBindToInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Public/Misc/VRVehiclePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRVehiclePawn, nullptr, "SetBindToInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::VRVehiclePawn_eventSetBindToInput_Parms), Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRVehiclePawn);
	UClass* Z_Construct_UClass_AVRVehiclePawn_NoRegister()
	{
		return AVRVehiclePawn::StaticClass();
	}
	struct Z_Construct_UClass_AVRVehiclePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRVehiclePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVRVehiclePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVRVehiclePawn_ForceSecondaryPossession, "ForceSecondaryPossession" }, // 1711319396
		{ &Z_Construct_UFunction_AVRVehiclePawn_SetBindToInput, "SetBindToInput" }, // 2531754524
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRVehiclePawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This override of the base pawn allows for dual pawn usage in engine.\n* It adds two new functions: SetBindToInput to bind input locally to the pawn and ForceSecondaryPossession which fakes possession so the \n* player can control the pawn as if they were locally possessed into it in a multiplayer enviroment (no lag).\n*/" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Misc/VRVehiclePawn.h" },
		{ "ModuleRelativePath", "Public/Misc/VRVehiclePawn.h" },
		{ "ToolTip", "This override of the base pawn allows for dual pawn usage in engine.\nIt adds two new functions: SetBindToInput to bind input locally to the pawn and ForceSecondaryPossession which fakes possession so the\nplayer can control the pawn as if they were locally possessed into it in a multiplayer enviroment (no lag)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRVehiclePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRVehiclePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRVehiclePawn_Statics::ClassParams = {
		&AVRVehiclePawn::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AVRVehiclePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVRVehiclePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRVehiclePawn()
	{
		if (!Z_Registration_Info_UClass_AVRVehiclePawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRVehiclePawn.OuterSingleton, Z_Construct_UClass_AVRVehiclePawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVRVehiclePawn.OuterSingleton;
	}
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRVehiclePawn>()
	{
		return AVRVehiclePawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRVehiclePawn);
	struct Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRVehiclePawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRVehiclePawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVRVehiclePawn, AVRVehiclePawn::StaticClass, TEXT("AVRVehiclePawn"), &Z_Registration_Info_UClass_AVRVehiclePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRVehiclePawn), 3889400032U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRVehiclePawn_h_1348358179(TEXT("/Script/VRExpansionPlugin"),
		Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRVehiclePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRVehiclePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
