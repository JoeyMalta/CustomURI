// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFirestoreError : uint8;
struct FFirestoreDocumentSnapshot;
class UFirestoreCollectionReference;
#ifdef FIREBASEFEATURES_DocumentReference_generated_h
#error "DocumentReference.generated.h already included, missing '#pragma once' in DocumentReference.h"
#endif
#define FIREBASEFEATURES_DocumentReference_generated_h

#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentReference_h_27_DELEGATE \
struct _Script_FirebaseFeatures_eventDocumentSnapshotListener_Parms \
{ \
	EFirestoreError Error; \
	FFirestoreDocumentSnapshot DocumentSnapshot; \
}; \
static inline void FDocumentSnapshotListener_DelegateWrapper(const FScriptDelegate& DocumentSnapshotListener, const EFirestoreError Error, FFirestoreDocumentSnapshot const& DocumentSnapshot) \
{ \
	_Script_FirebaseFeatures_eventDocumentSnapshotListener_Parms Parms; \
	Parms.Error=Error; \
	Parms.DocumentSnapshot=DocumentSnapshot; \
	DocumentSnapshotListener.ProcessDelegate<UObject>(&Parms); \
}


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentReference_h_32_SPARSE_DATA
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentReference_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddSnapshotListener); \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execGetCollection); \
	DECLARE_FUNCTION(execGetParent); \
	DECLARE_FUNCTION(execGetPath); \
	DECLARE_FUNCTION(execGetId);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentReference_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddSnapshotListener); \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execGetCollection); \
	DECLARE_FUNCTION(execGetParent); \
	DECLARE_FUNCTION(execGetPath); \
	DECLARE_FUNCTION(execGetId);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentReference_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirestoreDocumentReference(); \
	friend struct Z_Construct_UClass_UFirestoreDocumentReference_Statics; \
public: \
	DECLARE_CLASS(UFirestoreDocumentReference, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFirestoreDocumentReference)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentReference_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUFirestoreDocumentReference(); \
	friend struct Z_Construct_UClass_UFirestoreDocumentReference_Statics; \
public: \
	DECLARE_CLASS(UFirestoreDocumentReference, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFirestoreDocumentReference)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentReference_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirestoreDocumentReference(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirestoreDocumentReference) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirestoreDocumentReference); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirestoreDocumentReference); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirestoreDocumentReference(UFirestoreDocumentReference&&); \
	NO_API UFirestoreDocumentReference(const UFirestoreDocumentReference&); \
public:


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentReference_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirestoreDocumentReference(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirestoreDocumentReference(UFirestoreDocumentReference&&); \
	NO_API UFirestoreDocumentReference(const UFirestoreDocumentReference&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirestoreDocumentReference); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirestoreDocumentReference); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirestoreDocumentReference)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentReference_h_32_PRIVATE_PROPERTY_OFFSET
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentReference_h_29_PROLOG
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentReference_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentReference_h_32_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentReference_h_32_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentReference_h_32_RPC_WRAPPERS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentReference_h_32_INCLASS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentReference_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentReference_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentReference_h_32_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentReference_h_32_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentReference_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentReference_h_32_INCLASS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentReference_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UFirestoreDocumentReference>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_Firestore_DocumentReference_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
