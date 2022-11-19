// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/VRPlayerController.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRPlayerController() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBasePlayerController_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBasePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRPlayerController_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRPlayerController();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRLocalPlayer_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRLocalPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	static FName NAME_AVRBasePlayerController_OnCameraManagerCreated = FName(TEXT("OnCameraManagerCreated"));
	void AVRBasePlayerController::OnCameraManagerCreated(APlayerCameraManager* CameraManager)
	{
		VRBasePlayerController_eventOnCameraManagerCreated_Parms Parms;
		Parms.CameraManager=CameraManager;
		ProcessEvent(FindFunctionChecked(NAME_AVRBasePlayerController_OnCameraManagerCreated),&Parms);
	}
	void AVRBasePlayerController::StaticRegisterNativesAVRBasePlayerController()
	{
	}
	struct Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated_Statics::NewProp_CameraManager = { "CameraManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRBasePlayerController_eventOnCameraManagerCreated_Parms, CameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated_Statics::NewProp_CameraManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Actor" },
		{ "Comment", "// Event called in BPs when the camera manager is created (only fired on locally controlled player controllers)\n" },
		{ "DisplayName", "OnCameraManagerCreated" },
		{ "ModuleRelativePath", "Public/VRPlayerController.h" },
		{ "ToolTip", "Event called in BPs when the camera manager is created (only fired on locally controlled player controllers)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBasePlayerController, nullptr, "OnCameraManagerCreated", nullptr, nullptr, sizeof(VRBasePlayerController_eventOnCameraManagerCreated_Parms), Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVRBasePlayerController_NoRegister()
	{
		return AVRBasePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AVRBasePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRBasePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVRBasePlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVRBasePlayerController_OnCameraManagerCreated, "OnCameraManagerCreated" }, // 2851512800
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRBasePlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// A base player controller specifically for handling OnCameraManagerCreated.\n// Used in case you don't want the VRPlayerCharacter changes in a PendingPlayerController\n" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "VRPlayerController.h" },
		{ "ModuleRelativePath", "Public/VRPlayerController.h" },
		{ "ToolTip", "A base player controller specifically for handling OnCameraManagerCreated.\nUsed in case you don't want the VRPlayerCharacter changes in a PendingPlayerController" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRBasePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRBasePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRBasePlayerController_Statics::ClassParams = {
		&AVRBasePlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVRBasePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVRBasePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRBasePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRBasePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRBasePlayerController, 3642304523);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRBasePlayerController>()
	{
		return AVRBasePlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRBasePlayerController(Z_Construct_UClass_AVRBasePlayerController, &AVRBasePlayerController::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AVRBasePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRBasePlayerController);
	void AVRPlayerController::StaticRegisterNativesAVRPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AVRPlayerController_NoRegister()
	{
		return AVRPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AVRPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableServerUpdateCamera_MetaData[];
#endif
		static void NewProp_bDisableServerUpdateCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableServerUpdateCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVRBasePlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "VRPlayerController.h" },
		{ "ModuleRelativePath", "Public/VRPlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRPlayerController_Statics::NewProp_bDisableServerUpdateCamera_MetaData[] = {
		{ "Category", "VRPlayerController" },
		{ "Comment", "// Disable the ServerUpdateCamera function defaulted on in PlayerCameraManager\n// We are manually replicating the camera position and rotation ourselves anyway\n// Generally that function will just be additional replication overhead\n" },
		{ "ModuleRelativePath", "Public/VRPlayerController.h" },
		{ "ToolTip", "Disable the ServerUpdateCamera function defaulted on in PlayerCameraManager\nWe are manually replicating the camera position and rotation ourselves anyway\nGenerally that function will just be additional replication overhead" },
	};
#endif
	void Z_Construct_UClass_AVRPlayerController_Statics::NewProp_bDisableServerUpdateCamera_SetBit(void* Obj)
	{
		((AVRPlayerController*)Obj)->bDisableServerUpdateCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVRPlayerController_Statics::NewProp_bDisableServerUpdateCamera = { "bDisableServerUpdateCamera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVRPlayerController), &Z_Construct_UClass_AVRPlayerController_Statics::NewProp_bDisableServerUpdateCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVRPlayerController_Statics::NewProp_bDisableServerUpdateCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerController_Statics::NewProp_bDisableServerUpdateCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRPlayerController_Statics::NewProp_bDisableServerUpdateCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVRPlayerController_Statics::ClassParams = {
		&AVRPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVRPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVRPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVRPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVRPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRPlayerController, 1913055093);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<AVRPlayerController>()
	{
		return AVRPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRPlayerController(Z_Construct_UClass_AVRPlayerController, &AVRPlayerController::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AVRPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRPlayerController);
	void UVRLocalPlayer::StaticRegisterNativesUVRLocalPlayer()
	{
	}
	UClass* Z_Construct_UClass_UVRLocalPlayer_NoRegister()
	{
		return UVRLocalPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UVRLocalPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridePendingLevelPlayerControllerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OverridePendingLevelPlayerControllerClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRLocalPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLocalPlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Utility class, when set as the default local player it will spawn the target PlayerController class instead as the pending player controller\n*/" },
		{ "IncludePath", "VRPlayerController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VRPlayerController.h" },
		{ "ShortTooltip", "Utility class, when set as the default local player it will spawn the target PlayerController class instead as the pending one" },
		{ "ToolTip", "Utility class, when set as the default local player it will spawn the target PlayerController class instead as the pending player controller" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRLocalPlayer_Statics::NewProp_OverridePendingLevelPlayerControllerClass_MetaData[] = {
		{ "Category", "LocalPlayer" },
		{ "ModuleRelativePath", "Public/VRPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVRLocalPlayer_Statics::NewProp_OverridePendingLevelPlayerControllerClass = { "OverridePendingLevelPlayerControllerClass", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRLocalPlayer, OverridePendingLevelPlayerControllerClass), Z_Construct_UClass_APlayerController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UVRLocalPlayer_Statics::NewProp_OverridePendingLevelPlayerControllerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLocalPlayer_Statics::NewProp_OverridePendingLevelPlayerControllerClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRLocalPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRLocalPlayer_Statics::NewProp_OverridePendingLevelPlayerControllerClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRLocalPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRLocalPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRLocalPlayer_Statics::ClassParams = {
		&UVRLocalPlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVRLocalPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRLocalPlayer_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UVRLocalPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRLocalPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRLocalPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRLocalPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRLocalPlayer, 1771755979);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRLocalPlayer>()
	{
		return UVRLocalPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRLocalPlayer(Z_Construct_UClass_UVRLocalPlayer, &UVRLocalPlayer::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRLocalPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRLocalPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
