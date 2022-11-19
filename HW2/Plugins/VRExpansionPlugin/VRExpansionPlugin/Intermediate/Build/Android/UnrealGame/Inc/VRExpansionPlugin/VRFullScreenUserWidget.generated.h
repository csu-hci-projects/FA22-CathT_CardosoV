// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
class UUserWidget;
class UWorld;
enum class EVRWidgetDisplayType : uint8;
class UVRFullScreenUserWidget;
#ifdef VREXPANSIONPLUGIN_VRFullScreenUserWidget_generated_h
#error "VRFullScreenUserWidget.generated.h already included, missing '#pragma once' in VRFullScreenUserWidget.h"
#endif
#define VREXPANSIONPLUGIN_VRFullScreenUserWidget_generated_h

#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRFullScreenUserWidget_Viewport_Statics; \
	VREXPANSIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRFullScreenUserWidget_Viewport>();

#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRFullScreenUserWidget_PostProcess_Statics; \
	VREXPANSIONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRFullScreenUserWidget_PostProcess>();

#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_206_SPARSE_DATA
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_206_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPostProcessRenderTarget); \
	DECLARE_FUNCTION(execGetWidget); \
	DECLARE_FUNCTION(execSetIsHidden); \
	DECLARE_FUNCTION(execHide); \
	DECLARE_FUNCTION(execDisplay); \
	DECLARE_FUNCTION(execIsDisplayRequested);


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_206_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPostProcessRenderTarget); \
	DECLARE_FUNCTION(execGetWidget); \
	DECLARE_FUNCTION(execSetIsHidden); \
	DECLARE_FUNCTION(execHide); \
	DECLARE_FUNCTION(execDisplay); \
	DECLARE_FUNCTION(execIsDisplayRequested);


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_206_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRFullScreenUserWidget(); \
	friend struct Z_Construct_UClass_UVRFullScreenUserWidget_Statics; \
public: \
	DECLARE_CLASS(UVRFullScreenUserWidget, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRFullScreenUserWidget)


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_206_INCLASS \
private: \
	static void StaticRegisterNativesUVRFullScreenUserWidget(); \
	friend struct Z_Construct_UClass_UVRFullScreenUserWidget_Statics; \
public: \
	DECLARE_CLASS(UVRFullScreenUserWidget, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRFullScreenUserWidget)


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_206_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRFullScreenUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRFullScreenUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRFullScreenUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRFullScreenUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRFullScreenUserWidget(UVRFullScreenUserWidget&&); \
	NO_API UVRFullScreenUserWidget(const UVRFullScreenUserWidget&); \
public:


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_206_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRFullScreenUserWidget(UVRFullScreenUserWidget&&); \
	NO_API UVRFullScreenUserWidget(const UVRFullScreenUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRFullScreenUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRFullScreenUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRFullScreenUserWidget)


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_203_PROLOG
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_206_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_206_SPARSE_DATA \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_206_RPC_WRAPPERS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_206_INCLASS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_206_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_206_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_206_SPARSE_DATA \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_206_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_206_INCLASS_NO_PURE_DECLS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_206_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRFullScreenUserWidget>();

#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_343_SPARSE_DATA
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_343_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPostProcessRenderTarget); \
	DECLARE_FUNCTION(execGetWidget); \
	DECLARE_FUNCTION(execSetWidgetVisible); \
	DECLARE_FUNCTION(execSetGameDisplayType); \
	DECLARE_FUNCTION(execSetPIEDisplayType); \
	DECLARE_FUNCTION(execGetPreviewWidgetComp);


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_343_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPostProcessRenderTarget); \
	DECLARE_FUNCTION(execGetWidget); \
	DECLARE_FUNCTION(execSetWidgetVisible); \
	DECLARE_FUNCTION(execSetGameDisplayType); \
	DECLARE_FUNCTION(execSetPIEDisplayType); \
	DECLARE_FUNCTION(execGetPreviewWidgetComp);


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_343_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRFullScreenUserWidgetActor(); \
	friend struct Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics; \
public: \
	DECLARE_CLASS(AVRFullScreenUserWidgetActor, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRFullScreenUserWidgetActor)


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_343_INCLASS \
private: \
	static void StaticRegisterNativesAVRFullScreenUserWidgetActor(); \
	friend struct Z_Construct_UClass_AVRFullScreenUserWidgetActor_Statics; \
public: \
	DECLARE_CLASS(AVRFullScreenUserWidgetActor, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRFullScreenUserWidgetActor)


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_343_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRFullScreenUserWidgetActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRFullScreenUserWidgetActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRFullScreenUserWidgetActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRFullScreenUserWidgetActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRFullScreenUserWidgetActor(AVRFullScreenUserWidgetActor&&); \
	NO_API AVRFullScreenUserWidgetActor(const AVRFullScreenUserWidgetActor&); \
public:


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_343_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRFullScreenUserWidgetActor(AVRFullScreenUserWidgetActor&&); \
	NO_API AVRFullScreenUserWidgetActor(const AVRFullScreenUserWidgetActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRFullScreenUserWidgetActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRFullScreenUserWidgetActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRFullScreenUserWidgetActor)


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_340_PROLOG
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_343_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_343_SPARSE_DATA \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_343_RPC_WRAPPERS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_343_INCLASS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_343_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_343_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_343_SPARSE_DATA \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_343_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_343_INCLASS_NO_PURE_DECLS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h_343_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class AVRFullScreenUserWidgetActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Misc_VRFullScreenUserWidget_h


#define FOREACH_ENUM_EVRWIDGETDISPLAYTYPE(op) \
	op(EVRWidgetDisplayType::Inactive) \
	op(EVRWidgetDisplayType::Viewport) \
	op(EVRWidgetDisplayType::PostProcess) 

enum class EVRWidgetDisplayType : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRWidgetDisplayType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
