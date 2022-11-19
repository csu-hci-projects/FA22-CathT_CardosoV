// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRExpansionPlugin/Public/Misc/VRGameViewportClient.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRGameViewportClient() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnWindowCloseRequested__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGameViewportClient_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGameViewportClient();
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnWindowCloseRequested__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnWindowCloseRequested__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnWindowCloseRequested__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, nullptr, "VROnWindowCloseRequested__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnWindowCloseRequested__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnWindowCloseRequested__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnWindowCloseRequested__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnWindowCloseRequested__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EVRGameInputMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRGameInputMethod"));
		}
		return Singleton;
	}
	template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRGameInputMethod>()
	{
		return EVRGameInputMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRGameInputMethod(EVRGameInputMethod_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRGameInputMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod_Hash() { return 980955914U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRGameInputMethod"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRGameInputMethod::GameInput_Default", (int64)EVRGameInputMethod::GameInput_Default },
				{ "EVRGameInputMethod::GameInput_SharedKeyboardAndMouse", (int64)EVRGameInputMethod::GameInput_SharedKeyboardAndMouse },
				{ "EVRGameInputMethod::GameInput_KeyboardAndMouseToPlayer2", (int64)EVRGameInputMethod::GameInput_KeyboardAndMouseToPlayer2 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GameInput_Default.Name", "EVRGameInputMethod::GameInput_Default" },
				{ "GameInput_KeyboardAndMouseToPlayer2.Name", "EVRGameInputMethod::GameInput_KeyboardAndMouseToPlayer2" },
				{ "GameInput_SharedKeyboardAndMouse.Name", "EVRGameInputMethod::GameInput_SharedKeyboardAndMouse" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				"EVRGameInputMethod",
				"EVRGameInputMethod",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UVRGameViewportClient::execEventWindowClosing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EventWindowClosing();
		P_NATIVE_END;
	}
	void UVRGameViewportClient::StaticRegisterNativesUVRGameViewportClient()
	{
		UClass* Class = UVRGameViewportClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EventWindowClosing", &UVRGameViewportClient::execEventWindowClosing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics
	{
		struct VRGameViewportClient_eventEventWindowClosing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRGameViewportClient_eventEventWindowClosing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRGameViewportClient_eventEventWindowClosing_Parms), &Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGameViewportClient, nullptr, "EventWindowClosing", nullptr, nullptr, sizeof(VRGameViewportClient_eventEventWindowClosing_Parms), Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRGameViewportClient_NoRegister()
	{
		return UVRGameViewportClient::StaticClass();
	}
	struct Z_Construct_UClass_UVRGameViewportClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BPOnWindowCloseRequested_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_BPOnWindowCloseRequested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreWindowCloseCommands_MetaData[];
#endif
		static void NewProp_bIgnoreWindowCloseCommands_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreWindowCloseCommands;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameInputMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInputMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameInputMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlsoChangeGamepPadInput_MetaData[];
#endif
		static void NewProp_bAlsoChangeGamepPadInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlsoChangeGamepPadInput;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GamepadInputCategories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamepadInputCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GamepadInputCategories;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRGameViewportClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameViewportClient,
		(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRGameViewportClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRGameViewportClient_EventWindowClosing, "EventWindowClosing" }, // 2205616765
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGameViewportClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Subclass this in a blueprint to overwrite how default input is passed around in engine between local characters.\n* Generally used for passing keyboard / mouse input to a secondary local player for local mixed gameplay in VR\n*/" },
		{ "IncludePath", "Misc/VRGameViewportClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
		{ "ToolTip", "Subclass this in a blueprint to overwrite how default input is passed around in engine between local characters.\nGenerally used for passing keyboard / mouse input to a secondary local player for local mixed gameplay in VR" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_BPOnWindowCloseRequested_MetaData[] = {
		{ "Category", "VRExpansionPlugin" },
		{ "Comment", "// Event thrown when the window is closed\n" },
		{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
		{ "ToolTip", "Event thrown when the window is closed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_BPOnWindowCloseRequested = { "BPOnWindowCloseRequested", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRGameViewportClient, BPOnWindowCloseRequested), Z_Construct_UDelegateFunction_VRExpansionPlugin_VROnWindowCloseRequested__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_BPOnWindowCloseRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_BPOnWindowCloseRequested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bIgnoreWindowCloseCommands_MetaData[] = {
		{ "Category", "VRExpansionPlugin" },
		{ "Comment", "// If true then forced window closing will be canceled (alt-f4, ect)\n" },
		{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
		{ "ToolTip", "If true then forced window closing will be canceled (alt-f4, ect)" },
	};
#endif
	void Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bIgnoreWindowCloseCommands_SetBit(void* Obj)
	{
		((UVRGameViewportClient*)Obj)->bIgnoreWindowCloseCommands = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bIgnoreWindowCloseCommands = { "bIgnoreWindowCloseCommands", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRGameViewportClient), &Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bIgnoreWindowCloseCommands_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bIgnoreWindowCloseCommands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bIgnoreWindowCloseCommands_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod_MetaData[] = {
		{ "Category", "VRExpansionPlugin" },
		{ "Comment", "// Input Method for the viewport\n" },
		{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
		{ "ToolTip", "Input Method for the viewport" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod = { "GameInputMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRGameViewportClient, GameInputMethod), Z_Construct_UEnum_VRExpansionPlugin_EVRGameInputMethod, METADATA_PARAMS(Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bAlsoChangeGamepPadInput_MetaData[] = {
		{ "Category", "VRExpansionPlugin" },
		{ "Comment", "// If true we will also shuffle gamepad input according to the GameInputMethod\n" },
		{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
		{ "ToolTip", "If true we will also shuffle gamepad input according to the GameInputMethod" },
	};
#endif
	void Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bAlsoChangeGamepPadInput_SetBit(void* Obj)
	{
		((UVRGameViewportClient*)Obj)->bAlsoChangeGamepPadInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bAlsoChangeGamepPadInput = { "bAlsoChangeGamepPadInput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVRGameViewportClient), &Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bAlsoChangeGamepPadInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bAlsoChangeGamepPadInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bAlsoChangeGamepPadInput_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GamepadInputCategories_Inner = { "GamepadInputCategories", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GamepadInputCategories_MetaData[] = {
		{ "Category", "VRExpansionPlugin" },
		{ "Comment", "// A List of input categories to consider as valid gamepad ones if bIsGamepad is true on the input event\n" },
		{ "ModuleRelativePath", "Public/Misc/VRGameViewportClient.h" },
		{ "ToolTip", "A List of input categories to consider as valid gamepad ones if bIsGamepad is true on the input event" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GamepadInputCategories = { "GamepadInputCategories", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVRGameViewportClient, GamepadInputCategories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GamepadInputCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GamepadInputCategories_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRGameViewportClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_BPOnWindowCloseRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bIgnoreWindowCloseCommands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GameInputMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_bAlsoChangeGamepPadInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GamepadInputCategories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRGameViewportClient_Statics::NewProp_GamepadInputCategories,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRGameViewportClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRGameViewportClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRGameViewportClient_Statics::ClassParams = {
		&UVRGameViewportClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVRGameViewportClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::PropPointers),
		0,
		0x009000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UVRGameViewportClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRGameViewportClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRGameViewportClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRGameViewportClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRGameViewportClient, 715478870);
	template<> VREXPANSIONPLUGIN_API UClass* StaticClass<UVRGameViewportClient>()
	{
		return UVRGameViewportClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRGameViewportClient(Z_Construct_UClass_UVRGameViewportClient, &UVRGameViewportClient::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRGameViewportClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRGameViewportClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
