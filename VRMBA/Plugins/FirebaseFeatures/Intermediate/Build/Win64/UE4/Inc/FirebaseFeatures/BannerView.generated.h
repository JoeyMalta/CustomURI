// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIREBASEFEATURES_BannerView_generated_h
#error "BannerView.generated.h already included, missing '#pragma once' in BannerView.h"
#endif
#define FIREBASEFEATURES_BannerView_generated_h

#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_BannerView_h_31_SPARSE_DATA
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_BannerView_h_31_RPC_WRAPPERS
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_BannerView_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_BannerView_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBannerView(); \
	friend struct Z_Construct_UClass_UBannerView_Statics; \
public: \
	DECLARE_CLASS(UBannerView, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UBannerView)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_BannerView_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUBannerView(); \
	friend struct Z_Construct_UClass_UBannerView_Statics; \
public: \
	DECLARE_CLASS(UBannerView, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UBannerView)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_BannerView_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBannerView(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBannerView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBannerView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBannerView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBannerView(UBannerView&&); \
	NO_API UBannerView(const UBannerView&); \
public:


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_BannerView_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBannerView(UBannerView&&); \
	NO_API UBannerView(const UBannerView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBannerView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBannerView); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBannerView)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_BannerView_h_31_PRIVATE_PROPERTY_OFFSET
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_BannerView_h_28_PROLOG
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_BannerView_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_BannerView_h_31_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_BannerView_h_31_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_BannerView_h_31_RPC_WRAPPERS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_BannerView_h_31_INCLASS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_BannerView_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_BannerView_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_BannerView_h_31_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_BannerView_h_31_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_BannerView_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_BannerView_h_31_INCLASS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_BannerView_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UBannerView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_AdMob_BannerView_h


#define FOREACH_ENUM_EADMOBBANNERVIEWPOSITION(op) \
	op(EAdMobBannerViewPosition::Top) \
	op(EAdMobBannerViewPosition::Bottom) \
	op(EAdMobBannerViewPosition::TopLeft) \
	op(EAdMobBannerViewPosition::TopRight) \
	op(EAdMobBannerViewPosition::BottomLeft) \
	op(EAdMobBannerViewPosition::BottomRight) 

enum class EAdMobBannerViewPosition : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<EAdMobBannerViewPosition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
