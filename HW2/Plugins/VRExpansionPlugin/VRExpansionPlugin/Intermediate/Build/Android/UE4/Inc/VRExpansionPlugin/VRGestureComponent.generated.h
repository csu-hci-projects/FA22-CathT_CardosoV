// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGesturesDatabase;
class USplineComponent;
struct FVRGesture;
class UStaticMesh;
class UMaterial;
class UObject;
struct FTransform;
struct FColor;
#ifdef VREXPANSIONPLUGIN_VRGestureComponent_generated_h
#error "VRGestureComponent.generated.h already included, missing '#pragma once' in VRGestureComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRGestureComponent_generated_h

#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_183_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRGestureSplineDraw>();

#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRGesture_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRGesture>();

#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRGestureSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRGestureSettings>();

#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_209_DELEGATE \
struct _Script_VRExpansionPlugin_eventVRGestureDetectedSignature_Parms \
{ \
	uint8 GestureType; \
	FString DetectedGestureName; \
	int32 DetectedGestureIndex; \
	UGesturesDatabase* GestureDataBase; \
}; \
static inline void FVRGestureDetectedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRGestureDetectedSignature, uint8 GestureType, const FString& DetectedGestureName, int32 DetectedGestureIndex, UGesturesDatabase* GestureDataBase) \
{ \
	_Script_VRExpansionPlugin_eventVRGestureDetectedSignature_Parms Parms; \
	Parms.GestureType=GestureType; \
	Parms.DetectedGestureName=DetectedGestureName; \
	Parms.DetectedGestureIndex=DetectedGestureIndex; \
	Parms.GestureDataBase=GestureDataBase; \
	VRGestureDetectedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_150_SPARSE_DATA
#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_150_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execImportSplineAsGesture); \
	DECLARE_FUNCTION(execFillSplineWithGesture); \
	DECLARE_FUNCTION(execRecalculateGestures);


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execImportSplineAsGesture); \
	DECLARE_FUNCTION(execFillSplineWithGesture); \
	DECLARE_FUNCTION(execRecalculateGestures);


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_150_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGesturesDatabase(); \
	friend struct Z_Construct_UClass_UGesturesDatabase_Statics; \
public: \
	DECLARE_CLASS(UGesturesDatabase, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGesturesDatabase)


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_150_INCLASS \
private: \
	static void StaticRegisterNativesUGesturesDatabase(); \
	friend struct Z_Construct_UClass_UGesturesDatabase_Statics; \
public: \
	DECLARE_CLASS(UGesturesDatabase, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGesturesDatabase)


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_150_STANDARD_CONSTRUCTORS \
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


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_150_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGesturesDatabase(UGesturesDatabase&&); \
	NO_API UGesturesDatabase(const UGesturesDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGesturesDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGesturesDatabase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGesturesDatabase)


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_150_PRIVATE_PROPERTY_OFFSET
#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_147_PROLOG
#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_150_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_150_PRIVATE_PROPERTY_OFFSET \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_150_SPARSE_DATA \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_150_RPC_WRAPPERS \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_150_INCLASS \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_150_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_150_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_150_PRIVATE_PROPERTY_OFFSET \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_150_SPARSE_DATA \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_150_INCLASS_NO_PURE_DECLS \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_150_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UGesturesDatabase>();

#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_SPARSE_DATA
#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveRecording); \
	DECLARE_FUNCTION(execClearRecording); \
	DECLARE_FUNCTION(execEndRecording); \
	DECLARE_FUNCTION(execBeginRecording); \
	DECLARE_FUNCTION(execDrawDebugGesture); \
	DECLARE_FUNCTION(execRecalculateGestureSize);


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveRecording); \
	DECLARE_FUNCTION(execClearRecording); \
	DECLARE_FUNCTION(execEndRecording); \
	DECLARE_FUNCTION(execBeginRecording); \
	DECLARE_FUNCTION(execDrawDebugGesture); \
	DECLARE_FUNCTION(execRecalculateGestureSize);


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_EVENT_PARMS \
	struct VRGestureComponent_eventOnGestureDetected_Parms \
	{ \
		uint8 GestureType; \
		FString DetectedGestureName; \
		int32 DetectedGestureIndex; \
		UGesturesDatabase* GestureDatabase; \
	};


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_CALLBACK_WRAPPERS
#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRGestureComponent(); \
	friend struct Z_Construct_UClass_UVRGestureComponent_Statics; \
public: \
	DECLARE_CLASS(UVRGestureComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGestureComponent)


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_INCLASS \
private: \
	static void StaticRegisterNativesUVRGestureComponent(); \
	friend struct Z_Construct_UClass_UVRGestureComponent_Statics; \
public: \
	DECLARE_CLASS(UVRGestureComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGestureComponent)


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_STANDARD_CONSTRUCTORS \
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


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGestureComponent(UVRGestureComponent&&); \
	NO_API UVRGestureComponent(const UVRGestureComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGestureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGestureComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGestureComponent)


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_PRIVATE_PROPERTY_OFFSET
#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_218_PROLOG \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_EVENT_PARMS


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_PRIVATE_PROPERTY_OFFSET \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_SPARSE_DATA \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_RPC_WRAPPERS \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_CALLBACK_WRAPPERS \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_INCLASS \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_PRIVATE_PROPERTY_OFFSET \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_SPARSE_DATA \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_CALLBACK_WRAPPERS \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_INCLASS_NO_PURE_DECLS \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_221_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRGestureComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h


#define FOREACH_ENUM_EVRGESTUREMIRRORMODE(op) \
	op(EVRGestureMirrorMode::GES_NoMirror) \
	op(EVRGestureMirrorMode::GES_MirrorLeft) \
	op(EVRGestureMirrorMode::GES_MirrorRight) \
	op(EVRGestureMirrorMode::GES_MirrorBoth) 

enum class EVRGestureMirrorMode : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRGestureMirrorMode>();

#define FOREACH_ENUM_EVRGESTURESTATE(op) \
	op(EVRGestureState::GES_None) \
	op(EVRGestureState::GES_Recording) \
	op(EVRGestureState::GES_Detecting) 

enum class EVRGestureState : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRGestureState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
