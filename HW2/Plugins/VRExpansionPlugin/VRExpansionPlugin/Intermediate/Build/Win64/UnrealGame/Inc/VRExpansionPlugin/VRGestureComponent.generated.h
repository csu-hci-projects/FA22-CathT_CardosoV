// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;
struct FVRGesture;
class UStaticMesh;
class UMaterial;
class UGesturesDatabase;
class UObject;
struct FColor;
#ifdef VREXPANSIONPLUGIN_VRGestureComponent_generated_h
#error "VRGestureComponent.generated.h already included, missing '#pragma once' in VRGestureComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRGestureComponent_generated_h

#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRGestureSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRGestureSettings>();

#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRGesture_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRGesture>();

#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_149_SPARSE_DATA
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_149_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execImportSplineAsGesture); \
	DECLARE_FUNCTION(execFillSplineWithGesture); \
	DECLARE_FUNCTION(execRecalculateGestures);


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_149_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execImportSplineAsGesture); \
	DECLARE_FUNCTION(execFillSplineWithGesture); \
	DECLARE_FUNCTION(execRecalculateGestures);


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_149_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGesturesDatabase(); \
	friend struct Z_Construct_UClass_UGesturesDatabase_Statics; \
public: \
	DECLARE_CLASS(UGesturesDatabase, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGesturesDatabase)


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_149_INCLASS \
private: \
	static void StaticRegisterNativesUGesturesDatabase(); \
	friend struct Z_Construct_UClass_UGesturesDatabase_Statics; \
public: \
	DECLARE_CLASS(UGesturesDatabase, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGesturesDatabase)


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_149_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGesturesDatabase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGesturesDatabase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGesturesDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGesturesDatabase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGesturesDatabase(UGesturesDatabase&&); \
	NO_API UGesturesDatabase(const UGesturesDatabase&); \
public:


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_149_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGesturesDatabase(UGesturesDatabase&&); \
	NO_API UGesturesDatabase(const UGesturesDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGesturesDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGesturesDatabase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGesturesDatabase)


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_146_PROLOG
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_149_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_149_SPARSE_DATA \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_149_RPC_WRAPPERS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_149_INCLASS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_149_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_149_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_149_SPARSE_DATA \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_149_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_149_INCLASS_NO_PURE_DECLS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_149_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UGesturesDatabase>();

#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_182_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRGestureSplineDraw>();

#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_208_DELEGATE \
struct _Script_VRExpansionPlugin_eventVRGestureDetectedSignature_Parms \
{ \
	uint8 GestureType; \
	FString DetectedGestureName; \
	int32 DetectedGestureIndex; \
	UGesturesDatabase* GestureDataBase; \
	FVector OriginalUnscaledGestureSize; \
}; \
static inline void FVRGestureDetectedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRGestureDetectedSignature, uint8 GestureType, const FString& DetectedGestureName, int32 DetectedGestureIndex, UGesturesDatabase* GestureDataBase, FVector OriginalUnscaledGestureSize) \
{ \
	_Script_VRExpansionPlugin_eventVRGestureDetectedSignature_Parms Parms; \
	Parms.GestureType=GestureType; \
	Parms.DetectedGestureName=DetectedGestureName; \
	Parms.DetectedGestureIndex=DetectedGestureIndex; \
	Parms.GestureDataBase=GestureDataBase; \
	Parms.OriginalUnscaledGestureSize=OriginalUnscaledGestureSize; \
	VRGestureDetectedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_220_SPARSE_DATA
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_220_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveRecording); \
	DECLARE_FUNCTION(execClearRecording); \
	DECLARE_FUNCTION(execEndRecording); \
	DECLARE_FUNCTION(execBeginRecording); \
	DECLARE_FUNCTION(execDrawDebugGesture); \
	DECLARE_FUNCTION(execRecalculateGestureSize);


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_220_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveRecording); \
	DECLARE_FUNCTION(execClearRecording); \
	DECLARE_FUNCTION(execEndRecording); \
	DECLARE_FUNCTION(execBeginRecording); \
	DECLARE_FUNCTION(execDrawDebugGesture); \
	DECLARE_FUNCTION(execRecalculateGestureSize);


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_220_EVENT_PARMS \
	struct VRGestureComponent_eventOnGestureDetected_Parms \
	{ \
		uint8 GestureType; \
		FString DetectedGestureName; \
		int32 DetectedGestureIndex; \
		UGesturesDatabase* GestureDatabase; \
		FVector OriginalUnscaledGestureSize; \
	};


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_220_CALLBACK_WRAPPERS
#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_220_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRGestureComponent(); \
	friend struct Z_Construct_UClass_UVRGestureComponent_Statics; \
public: \
	DECLARE_CLASS(UVRGestureComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGestureComponent)


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_220_INCLASS \
private: \
	static void StaticRegisterNativesUVRGestureComponent(); \
	friend struct Z_Construct_UClass_UVRGestureComponent_Statics; \
public: \
	DECLARE_CLASS(UVRGestureComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGestureComponent)


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_220_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRGestureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGestureComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGestureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGestureComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGestureComponent(UVRGestureComponent&&); \
	NO_API UVRGestureComponent(const UVRGestureComponent&); \
public:


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_220_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGestureComponent(UVRGestureComponent&&); \
	NO_API UVRGestureComponent(const UVRGestureComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGestureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGestureComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGestureComponent)


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_217_PROLOG \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_220_EVENT_PARMS


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_220_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_220_SPARSE_DATA \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_220_RPC_WRAPPERS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_220_CALLBACK_WRAPPERS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_220_INCLASS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_220_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_220_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_220_SPARSE_DATA \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_220_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_220_CALLBACK_WRAPPERS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_220_INCLASS_NO_PURE_DECLS \
	FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_220_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRGestureComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h


#define FOREACH_ENUM_EVRGESTURESTATE(op) \
	op(EVRGestureState::GES_None) \
	op(EVRGestureState::GES_Recording) \
	op(EVRGestureState::GES_Detecting) 

enum class EVRGestureState : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRGestureState>();

#define FOREACH_ENUM_EVRGESTUREMIRRORMODE(op) \
	op(EVRGestureMirrorMode::GES_NoMirror) \
	op(EVRGestureMirrorMode::GES_MirrorLeft) \
	op(EVRGestureMirrorMode::GES_MirrorRight) \
	op(EVRGestureMirrorMode::GES_MirrorBoth) 

enum class EVRGestureMirrorMode : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRGestureMirrorMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
