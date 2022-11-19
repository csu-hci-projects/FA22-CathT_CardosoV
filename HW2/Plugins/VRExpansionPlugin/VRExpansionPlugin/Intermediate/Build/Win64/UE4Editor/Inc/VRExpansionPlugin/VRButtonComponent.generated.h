// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef VREXPANSIONPLUGIN_VRButtonComponent_generated_h
#error "VRButtonComponent.generated.h already included, missing '#pragma once' in VRButtonComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRButtonComponent_generated_h

#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_44_DELEGATE \
struct _Script_VRExpansionPlugin_eventVRButtonStartedInteractionSignature_Parms \
{ \
	AActor* InteractingActor; \
	UPrimitiveComponent* InteractingComponent; \
}; \
static inline void FVRButtonStartedInteractionSignature_DelegateWrapper(const FMulticastScriptDelegate& VRButtonStartedInteractionSignature, AActor* InteractingActor, UPrimitiveComponent* InteractingComponent) \
{ \
	_Script_VRExpansionPlugin_eventVRButtonStartedInteractionSignature_Parms Parms; \
	Parms.InteractingActor=InteractingActor; \
	Parms.InteractingComponent=InteractingComponent; \
	VRButtonStartedInteractionSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_41_DELEGATE \
struct _Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms \
{ \
	bool ButtonState; \
	AActor* InteractingActor; \
	UPrimitiveComponent* InteractingComponent; \
}; \
static inline void FVRButtonStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRButtonStateChangedSignature, bool ButtonState, AActor* InteractingActor, UPrimitiveComponent* InteractingComponent) \
{ \
	_Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms Parms; \
	Parms.ButtonState=ButtonState ? true : false; \
	Parms.InteractingActor=InteractingActor; \
	Parms.InteractingComponent=InteractingComponent; \
	VRButtonStateChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_SPARSE_DATA
#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_RPC_WRAPPERS \
	virtual bool IsValidOverlap_Implementation(UPrimitiveComponent* OverlapComponent); \
 \
	DECLARE_FUNCTION(execOnRep_InitialRelativeTransform); \
	DECLARE_FUNCTION(execIsValidOverlap); \
	DECLARE_FUNCTION(execSetButtonToRestingPosition); \
	DECLARE_FUNCTION(execSetButtonState); \
	DECLARE_FUNCTION(execResetInitialButtonLocation); \
	DECLARE_FUNCTION(execIsButtonInUse); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsValidOverlap_Implementation(UPrimitiveComponent* OverlapComponent); \
 \
	DECLARE_FUNCTION(execOnRep_InitialRelativeTransform); \
	DECLARE_FUNCTION(execIsValidOverlap); \
	DECLARE_FUNCTION(execSetButtonToRestingPosition); \
	DECLARE_FUNCTION(execSetButtonState); \
	DECLARE_FUNCTION(execResetInitialButtonLocation); \
	DECLARE_FUNCTION(execIsButtonInUse); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_EVENT_PARMS \
	struct VRButtonComponent_eventIsValidOverlap_Parms \
	{ \
		UPrimitiveComponent* OverlapComponent; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VRButtonComponent_eventIsValidOverlap_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct VRButtonComponent_eventReceiveButtonBeginInteraction_Parms \
	{ \
		AActor* InteractingActor; \
		UPrimitiveComponent* InteractingComponent; \
	}; \
	struct VRButtonComponent_eventReceiveButtonEndInteraction_Parms \
	{ \
		AActor* LastInteractingActor; \
		UPrimitiveComponent* LastInteractingComponent; \
	}; \
	struct VRButtonComponent_eventReceiveButtonStateChanged_Parms \
	{ \
		bool bCurButtonState; \
		AActor* LastInteractingActor; \
		UPrimitiveComponent* InteractingComponent; \
	};


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_CALLBACK_WRAPPERS
#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRButtonComponent(); \
	friend struct Z_Construct_UClass_UVRButtonComponent_Statics; \
public: \
	DECLARE_CLASS(UVRButtonComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRButtonComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bButtonState=NETFIELD_REP_START, \
		StateChangeAuthorityType, \
		bReplicateMovement, \
		InitialRelativeTransform, \
		NETFIELD_REP_END=InitialRelativeTransform	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUVRButtonComponent(); \
	friend struct Z_Construct_UClass_UVRButtonComponent_Statics; \
public: \
	DECLARE_CLASS(UVRButtonComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRButtonComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bButtonState=NETFIELD_REP_START, \
		StateChangeAuthorityType, \
		bReplicateMovement, \
		InitialRelativeTransform, \
		NETFIELD_REP_END=InitialRelativeTransform	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRButtonComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRButtonComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRButtonComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRButtonComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRButtonComponent(UVRButtonComponent&&); \
	NO_API UVRButtonComponent(const UVRButtonComponent&); \
public:


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRButtonComponent(UVRButtonComponent&&); \
	NO_API UVRButtonComponent(const UVRButtonComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRButtonComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRButtonComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRButtonComponent)


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_PRIVATE_PROPERTY_OFFSET
#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_46_PROLOG \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_EVENT_PARMS


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_PRIVATE_PROPERTY_OFFSET \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_SPARSE_DATA \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_RPC_WRAPPERS \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_CALLBACK_WRAPPERS \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_INCLASS \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_PRIVATE_PROPERTY_OFFSET \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_SPARSE_DATA \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_CALLBACK_WRAPPERS \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_INCLASS_NO_PURE_DECLS \
	PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRButtonComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginExpProject_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_Interactibles_VRButtonComponent_h


#define FOREACH_ENUM_EVRSTATECHANGEAUTHORITYTYPE(op) \
	op(EVRStateChangeAuthorityType::CanChangeState_All) \
	op(EVRStateChangeAuthorityType::CanChangeState_Server) \
	op(EVRStateChangeAuthorityType::CanChangeState_Owner) 

enum class EVRStateChangeAuthorityType : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRStateChangeAuthorityType>();

#define FOREACH_ENUM_EVRBUTTONTYPE(op) \
	op(EVRButtonType::Btn_Press) \
	op(EVRButtonType::Btn_Toggle_Return) \
	op(EVRButtonType::Btn_Toggle_Stay) 

enum class EVRButtonType : uint8;
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRButtonType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
