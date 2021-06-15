// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRMBAPLUGIN_GoogleSession_generated_h
#error "GoogleSession.generated.h already included, missing '#pragma once' in GoogleSession.h"
#endif
#define VRMBAPLUGIN_GoogleSession_generated_h

#define CustomURI_Plugins_VRMBAPlugin_Source_VRMBAPlugin_Public_GoogleSession_h_9_DELEGATE \
struct _Script_VRMBAPlugin_eventTokenCallback_Parms \
{ \
	FString accessToken; \
	FString refreshToken; \
}; \
static inline void FTokenCallback_DelegateWrapper(const FMulticastScriptDelegate& TokenCallback, const FString& accessToken, const FString& refreshToken) \
{ \
	_Script_VRMBAPlugin_eventTokenCallback_Parms Parms; \
	Parms.accessToken=accessToken; \
	Parms.refreshToken=refreshToken; \
	TokenCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define CustomURI_Plugins_VRMBAPlugin_Source_VRMBAPlugin_Public_GoogleSession_h_15_SPARSE_DATA
#define CustomURI_Plugins_VRMBAPlugin_Source_VRMBAPlugin_Public_GoogleSession_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGoogleToken); \
	DECLARE_FUNCTION(execCallTokenRecieved);


#define CustomURI_Plugins_VRMBAPlugin_Source_VRMBAPlugin_Public_GoogleSession_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGoogleToken); \
	DECLARE_FUNCTION(execCallTokenRecieved);


#define CustomURI_Plugins_VRMBAPlugin_Source_VRMBAPlugin_Public_GoogleSession_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGoogle(); \
	friend struct Z_Construct_UClass_UGoogle_Statics; \
public: \
	DECLARE_CLASS(UGoogle, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRMBAPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGoogle)


#define CustomURI_Plugins_VRMBAPlugin_Source_VRMBAPlugin_Public_GoogleSession_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGoogle(); \
	friend struct Z_Construct_UClass_UGoogle_Statics; \
public: \
	DECLARE_CLASS(UGoogle, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRMBAPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGoogle)


#define CustomURI_Plugins_VRMBAPlugin_Source_VRMBAPlugin_Public_GoogleSession_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoogle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGoogle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoogle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoogle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGoogle(UGoogle&&); \
	NO_API UGoogle(const UGoogle&); \
public:


#define CustomURI_Plugins_VRMBAPlugin_Source_VRMBAPlugin_Public_GoogleSession_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGoogle(UGoogle&&); \
	NO_API UGoogle(const UGoogle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoogle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoogle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGoogle)


#define CustomURI_Plugins_VRMBAPlugin_Source_VRMBAPlugin_Public_GoogleSession_h_15_PRIVATE_PROPERTY_OFFSET
#define CustomURI_Plugins_VRMBAPlugin_Source_VRMBAPlugin_Public_GoogleSession_h_12_PROLOG
#define CustomURI_Plugins_VRMBAPlugin_Source_VRMBAPlugin_Public_GoogleSession_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CustomURI_Plugins_VRMBAPlugin_Source_VRMBAPlugin_Public_GoogleSession_h_15_PRIVATE_PROPERTY_OFFSET \
	CustomURI_Plugins_VRMBAPlugin_Source_VRMBAPlugin_Public_GoogleSession_h_15_SPARSE_DATA \
	CustomURI_Plugins_VRMBAPlugin_Source_VRMBAPlugin_Public_GoogleSession_h_15_RPC_WRAPPERS \
	CustomURI_Plugins_VRMBAPlugin_Source_VRMBAPlugin_Public_GoogleSession_h_15_INCLASS \
	CustomURI_Plugins_VRMBAPlugin_Source_VRMBAPlugin_Public_GoogleSession_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CustomURI_Plugins_VRMBAPlugin_Source_VRMBAPlugin_Public_GoogleSession_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CustomURI_Plugins_VRMBAPlugin_Source_VRMBAPlugin_Public_GoogleSession_h_15_PRIVATE_PROPERTY_OFFSET \
	CustomURI_Plugins_VRMBAPlugin_Source_VRMBAPlugin_Public_GoogleSession_h_15_SPARSE_DATA \
	CustomURI_Plugins_VRMBAPlugin_Source_VRMBAPlugin_Public_GoogleSession_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CustomURI_Plugins_VRMBAPlugin_Source_VRMBAPlugin_Public_GoogleSession_h_15_INCLASS_NO_PURE_DECLS \
	CustomURI_Plugins_VRMBAPlugin_Source_VRMBAPlugin_Public_GoogleSession_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRMBAPLUGIN_API UClass* StaticClass<class UGoogle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CustomURI_Plugins_VRMBAPlugin_Source_VRMBAPlugin_Public_GoogleSession_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
