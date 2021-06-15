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
class UFirestoreDocumentReference;
struct FFirestoreTransaction;
struct FFirestoreFieldPath;
enum class EFirestoreServerTimestampBehavior : uint8;
struct FFirestoreFieldValue;
 struct FFirestoreFieldValue;
struct FFirestoreSnapshotMetadata;
enum class EFirestoreFieldValueType : uint8;
struct FWriteBatch;
struct FFirestoreFieldPath; struct FFirestoreFieldValue;
struct FFirestoreSetOptions;
class UWriteBatchCommitProxy;
class UFirestoreRunTransactionProxy;
class UDisableNetworkProxy;
class UEnableNetworkProxy;
class UWaitForPendingWritesProxy;
enum class EFirestoreSource : uint8;
class UDocumentReferenceGetProxy;
class UDocumentReferenceSetProxy;
class UDocumentReferenceUpdateProxy;
class UDocumentReferenceUpdateWithPathProxy;
class UDocumentReferenceDeleteProxy;
class UFirestoreCollectionReference;
class UCollectionReferenceAddProxy;
class UFirestoreQuery;
class UQueryGetProxy;
#ifdef FIREBASEFEATURES_FirestoreNodes_generated_h
#error "FirestoreNodes.generated.h already included, missing '#pragma once' in FirestoreNodes.h"
#endif
#define FIREBASEFEATURES_FirestoreNodes_generated_h

#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_612_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultDocumentsCallback_Parms \
{ \
	EFirestoreError Error; \
	TArray<FFirestoreDocumentSnapshot> DocumentSnapshots; \
}; \
static inline void FDynMultDocumentsCallback_DelegateWrapper(const FMulticastScriptDelegate& DynMultDocumentsCallback, const EFirestoreError Error, TArray<FFirestoreDocumentSnapshot> const& DocumentSnapshots) \
{ \
	_Script_FirebaseFeatures_eventDynMultDocumentsCallback_Parms Parms; \
	Parms.Error=Error; \
	Parms.DocumentSnapshots=DocumentSnapshots; \
	DynMultDocumentsCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_577_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultDocumentCallback_Parms \
{ \
	EFirestoreError Error; \
	const UFirestoreDocumentReference* DocumentReference; \
}; \
static inline void FDynMultDocumentCallback_DelegateWrapper(const FMulticastScriptDelegate& DynMultDocumentCallback, const EFirestoreError Error, const UFirestoreDocumentReference* DocumentReference) \
{ \
	_Script_FirebaseFeatures_eventDynMultDocumentCallback_Parms Parms; \
	Parms.Error=Error; \
	Parms.DocumentReference=DocumentReference; \
	DynMultDocumentCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_417_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultDocSnapshot_Parms \
{ \
	EFirestoreError Error; \
	FFirestoreDocumentSnapshot DocumentSnapshot; \
}; \
static inline void FDynMultDocSnapshot_DelegateWrapper(const FMulticastScriptDelegate& DynMultDocSnapshot, const EFirestoreError Error, FFirestoreDocumentSnapshot const& DocumentSnapshot) \
{ \
	_Script_FirebaseFeatures_eventDynMultDocSnapshot_Parms Parms; \
	Parms.Error=Error; \
	Parms.DocumentSnapshot=DocumentSnapshot; \
	DynMultDocSnapshot.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_287_DELEGATE \
struct _Script_FirebaseFeatures_eventDynamicTransactionCallback_Parms \
{ \
	FFirestoreTransaction Transaction; \
	FString ErrorMessage; \
	EFirestoreError ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	_Script_FirebaseFeatures_eventDynamicTransactionCallback_Parms() \
		: ReturnValue((EFirestoreError)0) \
	{ \
	} \
}; \
static inline EFirestoreError FDynamicTransactionCallback_DelegateWrapper(const FScriptDelegate& DynamicTransactionCallback, FFirestoreTransaction const& Transaction, FString& ErrorMessage) \
{ \
	_Script_FirebaseFeatures_eventDynamicTransactionCallback_Parms Parms; \
	Parms.Transaction=Transaction; \
	Parms.ErrorMessage=ErrorMessage; \
	DynamicTransactionCallback.ProcessDelegate<UObject>(&Parms); \
	ErrorMessage=Parms.ErrorMessage; \
	return Parms.ReturnValue; \
}


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_262_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultVoid_Parms \
{ \
	EFirestoreError Error; \
}; \
static inline void FDynMultVoid_DelegateWrapper(const FMulticastScriptDelegate& DynMultVoid, const EFirestoreError Error) \
{ \
	_Script_FirebaseFeatures_eventDynMultVoid_Parms Parms; \
	Parms.Error=Error; \
	DynMultVoid.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_19_SPARSE_DATA
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToString_Snapshot); \
	DECLARE_FUNCTION(execGetWithFieldPath); \
	DECLARE_FUNCTION(execGet_Snapshot); \
	DECLARE_FUNCTION(execGetData); \
	DECLARE_FUNCTION(execExists); \
	DECLARE_FUNCTION(execGetMetadata); \
	DECLARE_FUNCTION(execGetReference); \
	DECLARE_FUNCTION(execGetId); \
	DECLARE_FUNCTION(execFieldValue_FromReference); \
	DECLARE_FUNCTION(execFieldValue_FromMap); \
	DECLARE_FUNCTION(execFieldValue_FromArray); \
	DECLARE_FUNCTION(execFieldValue_FromBinary); \
	DECLARE_FUNCTION(execFieldValue_FromString); \
	DECLARE_FUNCTION(execFieldValue_FromFloat); \
	DECLARE_FUNCTION(execFieldValue_FromInt64); \
	DECLARE_FUNCTION(execFieldValue_FromInt32); \
	DECLARE_FUNCTION(execFieldValue_FromBool); \
	DECLARE_FUNCTION(execFieldValue_ToReference); \
	DECLARE_FUNCTION(execFieldValue_ToMap); \
	DECLARE_FUNCTION(execFieldValue_ToArray); \
	DECLARE_FUNCTION(execFieldValue_ToBinary); \
	DECLARE_FUNCTION(execFieldValue_ToString); \
	DECLARE_FUNCTION(execFieldValue_ToFloat); \
	DECLARE_FUNCTION(execFieldValue_ToInt64); \
	DECLARE_FUNCTION(execFieldValue_ToInt32); \
	DECLARE_FUNCTION(execFieldValue_ToBool); \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execMakeFirestoreFieldPath); \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execDocumentId); \
	DECLARE_FUNCTION(execWriteBatch_Delete); \
	DECLARE_FUNCTION(execWriteBatch_UpdateFieldPath); \
	DECLARE_FUNCTION(execWriteBatch_Update); \
	DECLARE_FUNCTION(execWriteBatch_Set); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execDelete); \
	DECLARE_FUNCTION(execUpdateFieldPath); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execSet); \
	DECLARE_FUNCTION(execMergeFieldPaths); \
	DECLARE_FUNCTION(execMergeFields); \
	DECLARE_FUNCTION(execMerge);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToString_Snapshot); \
	DECLARE_FUNCTION(execGetWithFieldPath); \
	DECLARE_FUNCTION(execGet_Snapshot); \
	DECLARE_FUNCTION(execGetData); \
	DECLARE_FUNCTION(execExists); \
	DECLARE_FUNCTION(execGetMetadata); \
	DECLARE_FUNCTION(execGetReference); \
	DECLARE_FUNCTION(execGetId); \
	DECLARE_FUNCTION(execFieldValue_FromReference); \
	DECLARE_FUNCTION(execFieldValue_FromMap); \
	DECLARE_FUNCTION(execFieldValue_FromArray); \
	DECLARE_FUNCTION(execFieldValue_FromBinary); \
	DECLARE_FUNCTION(execFieldValue_FromString); \
	DECLARE_FUNCTION(execFieldValue_FromFloat); \
	DECLARE_FUNCTION(execFieldValue_FromInt64); \
	DECLARE_FUNCTION(execFieldValue_FromInt32); \
	DECLARE_FUNCTION(execFieldValue_FromBool); \
	DECLARE_FUNCTION(execFieldValue_ToReference); \
	DECLARE_FUNCTION(execFieldValue_ToMap); \
	DECLARE_FUNCTION(execFieldValue_ToArray); \
	DECLARE_FUNCTION(execFieldValue_ToBinary); \
	DECLARE_FUNCTION(execFieldValue_ToString); \
	DECLARE_FUNCTION(execFieldValue_ToFloat); \
	DECLARE_FUNCTION(execFieldValue_ToInt64); \
	DECLARE_FUNCTION(execFieldValue_ToInt32); \
	DECLARE_FUNCTION(execFieldValue_ToBool); \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execMakeFirestoreFieldPath); \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execDocumentId); \
	DECLARE_FUNCTION(execWriteBatch_Delete); \
	DECLARE_FUNCTION(execWriteBatch_UpdateFieldPath); \
	DECLARE_FUNCTION(execWriteBatch_Update); \
	DECLARE_FUNCTION(execWriteBatch_Set); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execDelete); \
	DECLARE_FUNCTION(execUpdateFieldPath); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execSet); \
	DECLARE_FUNCTION(execMergeFieldPaths); \
	DECLARE_FUNCTION(execMergeFields); \
	DECLARE_FUNCTION(execMerge);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirestoreLibrary(); \
	friend struct Z_Construct_UClass_UFirestoreLibrary_Statics; \
public: \
	DECLARE_CLASS(UFirestoreLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFirestoreLibrary)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUFirestoreLibrary(); \
	friend struct Z_Construct_UClass_UFirestoreLibrary_Statics; \
public: \
	DECLARE_CLASS(UFirestoreLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFirestoreLibrary)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirestoreLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirestoreLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirestoreLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirestoreLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirestoreLibrary(UFirestoreLibrary&&); \
	NO_API UFirestoreLibrary(const UFirestoreLibrary&); \
public:


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirestoreLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirestoreLibrary(UFirestoreLibrary&&); \
	NO_API UFirestoreLibrary(const UFirestoreLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirestoreLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirestoreLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirestoreLibrary)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_19_PRIVATE_PROPERTY_OFFSET
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_16_PROLOG
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_19_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_19_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_19_RPC_WRAPPERS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_19_INCLASS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_19_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_19_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_19_INCLASS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UFirestoreLibrary>();

#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_267_SPARSE_DATA
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_267_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCommit);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_267_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCommit);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_267_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWriteBatchCommitProxy(); \
	friend struct Z_Construct_UClass_UWriteBatchCommitProxy_Statics; \
public: \
	DECLARE_CLASS(UWriteBatchCommitProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UWriteBatchCommitProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_267_INCLASS \
private: \
	static void StaticRegisterNativesUWriteBatchCommitProxy(); \
	friend struct Z_Construct_UClass_UWriteBatchCommitProxy_Statics; \
public: \
	DECLARE_CLASS(UWriteBatchCommitProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UWriteBatchCommitProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_267_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWriteBatchCommitProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWriteBatchCommitProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWriteBatchCommitProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWriteBatchCommitProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWriteBatchCommitProxy(UWriteBatchCommitProxy&&); \
	NO_API UWriteBatchCommitProxy(const UWriteBatchCommitProxy&); \
public:


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_267_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWriteBatchCommitProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWriteBatchCommitProxy(UWriteBatchCommitProxy&&); \
	NO_API UWriteBatchCommitProxy(const UWriteBatchCommitProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWriteBatchCommitProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWriteBatchCommitProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWriteBatchCommitProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_267_PRIVATE_PROPERTY_OFFSET
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_264_PROLOG
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_267_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_267_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_267_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_267_RPC_WRAPPERS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_267_INCLASS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_267_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_267_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_267_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_267_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_267_RPC_WRAPPERS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_267_INCLASS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_267_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UWriteBatchCommitProxy>();

#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_292_SPARSE_DATA
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_292_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRunTransaction);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_292_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRunTransaction);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_292_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirestoreRunTransactionProxy(); \
	friend struct Z_Construct_UClass_UFirestoreRunTransactionProxy_Statics; \
public: \
	DECLARE_CLASS(UFirestoreRunTransactionProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFirestoreRunTransactionProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_292_INCLASS \
private: \
	static void StaticRegisterNativesUFirestoreRunTransactionProxy(); \
	friend struct Z_Construct_UClass_UFirestoreRunTransactionProxy_Statics; \
public: \
	DECLARE_CLASS(UFirestoreRunTransactionProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UFirestoreRunTransactionProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_292_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirestoreRunTransactionProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirestoreRunTransactionProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirestoreRunTransactionProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirestoreRunTransactionProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirestoreRunTransactionProxy(UFirestoreRunTransactionProxy&&); \
	NO_API UFirestoreRunTransactionProxy(const UFirestoreRunTransactionProxy&); \
public:


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_292_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirestoreRunTransactionProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirestoreRunTransactionProxy(UFirestoreRunTransactionProxy&&); \
	NO_API UFirestoreRunTransactionProxy(const UFirestoreRunTransactionProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirestoreRunTransactionProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirestoreRunTransactionProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirestoreRunTransactionProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_292_PRIVATE_PROPERTY_OFFSET
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_289_PROLOG
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_292_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_292_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_292_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_292_RPC_WRAPPERS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_292_INCLASS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_292_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_292_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_292_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_292_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_292_RPC_WRAPPERS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_292_INCLASS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_292_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UFirestoreRunTransactionProxy>();

#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_318_SPARSE_DATA
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_318_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableNetwork);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_318_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableNetwork);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_318_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisableNetworkProxy(); \
	friend struct Z_Construct_UClass_UDisableNetworkProxy_Statics; \
public: \
	DECLARE_CLASS(UDisableNetworkProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDisableNetworkProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_318_INCLASS \
private: \
	static void StaticRegisterNativesUDisableNetworkProxy(); \
	friend struct Z_Construct_UClass_UDisableNetworkProxy_Statics; \
public: \
	DECLARE_CLASS(UDisableNetworkProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDisableNetworkProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_318_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDisableNetworkProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisableNetworkProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisableNetworkProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisableNetworkProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDisableNetworkProxy(UDisableNetworkProxy&&); \
	NO_API UDisableNetworkProxy(const UDisableNetworkProxy&); \
public:


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_318_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDisableNetworkProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDisableNetworkProxy(UDisableNetworkProxy&&); \
	NO_API UDisableNetworkProxy(const UDisableNetworkProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisableNetworkProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisableNetworkProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisableNetworkProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_318_PRIVATE_PROPERTY_OFFSET
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_315_PROLOG
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_318_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_318_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_318_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_318_RPC_WRAPPERS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_318_INCLASS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_318_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_318_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_318_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_318_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_318_RPC_WRAPPERS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_318_INCLASS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_318_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDisableNetworkProxy>();

#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_348_SPARSE_DATA
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_348_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableNetwork);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_348_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableNetwork);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_348_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnableNetworkProxy(); \
	friend struct Z_Construct_UClass_UEnableNetworkProxy_Statics; \
public: \
	DECLARE_CLASS(UEnableNetworkProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UEnableNetworkProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_348_INCLASS \
private: \
	static void StaticRegisterNativesUEnableNetworkProxy(); \
	friend struct Z_Construct_UClass_UEnableNetworkProxy_Statics; \
public: \
	DECLARE_CLASS(UEnableNetworkProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UEnableNetworkProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_348_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnableNetworkProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnableNetworkProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnableNetworkProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnableNetworkProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnableNetworkProxy(UEnableNetworkProxy&&); \
	NO_API UEnableNetworkProxy(const UEnableNetworkProxy&); \
public:


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_348_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnableNetworkProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnableNetworkProxy(UEnableNetworkProxy&&); \
	NO_API UEnableNetworkProxy(const UEnableNetworkProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnableNetworkProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnableNetworkProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnableNetworkProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_348_PRIVATE_PROPERTY_OFFSET
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_345_PROLOG
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_348_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_348_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_348_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_348_RPC_WRAPPERS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_348_INCLASS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_348_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_348_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_348_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_348_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_348_RPC_WRAPPERS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_348_INCLASS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_348_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UEnableNetworkProxy>();

#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_374_SPARSE_DATA
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_374_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableNetwork);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_374_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableNetwork);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_374_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaitForPendingWritesProxy(); \
	friend struct Z_Construct_UClass_UWaitForPendingWritesProxy_Statics; \
public: \
	DECLARE_CLASS(UWaitForPendingWritesProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UWaitForPendingWritesProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_374_INCLASS \
private: \
	static void StaticRegisterNativesUWaitForPendingWritesProxy(); \
	friend struct Z_Construct_UClass_UWaitForPendingWritesProxy_Statics; \
public: \
	DECLARE_CLASS(UWaitForPendingWritesProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UWaitForPendingWritesProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_374_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaitForPendingWritesProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaitForPendingWritesProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaitForPendingWritesProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaitForPendingWritesProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaitForPendingWritesProxy(UWaitForPendingWritesProxy&&); \
	NO_API UWaitForPendingWritesProxy(const UWaitForPendingWritesProxy&); \
public:


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_374_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaitForPendingWritesProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaitForPendingWritesProxy(UWaitForPendingWritesProxy&&); \
	NO_API UWaitForPendingWritesProxy(const UWaitForPendingWritesProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaitForPendingWritesProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaitForPendingWritesProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaitForPendingWritesProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_374_PRIVATE_PROPERTY_OFFSET
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_371_PROLOG
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_374_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_374_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_374_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_374_RPC_WRAPPERS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_374_INCLASS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_374_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_374_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_374_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_374_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_374_RPC_WRAPPERS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_374_INCLASS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_374_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UWaitForPendingWritesProxy>();

#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_409_SPARSE_DATA
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_409_RPC_WRAPPERS
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_409_RPC_WRAPPERS_NO_PURE_DECLS
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_409_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDocumentReferenceAsyncBase(); \
	friend struct Z_Construct_UClass_UDocumentReferenceAsyncBase_Statics; \
public: \
	DECLARE_CLASS(UDocumentReferenceAsyncBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDocumentReferenceAsyncBase)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_409_INCLASS \
private: \
	static void StaticRegisterNativesUDocumentReferenceAsyncBase(); \
	friend struct Z_Construct_UClass_UDocumentReferenceAsyncBase_Statics; \
public: \
	DECLARE_CLASS(UDocumentReferenceAsyncBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDocumentReferenceAsyncBase)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_409_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDocumentReferenceAsyncBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDocumentReferenceAsyncBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDocumentReferenceAsyncBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDocumentReferenceAsyncBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDocumentReferenceAsyncBase(UDocumentReferenceAsyncBase&&); \
	NO_API UDocumentReferenceAsyncBase(const UDocumentReferenceAsyncBase&); \
public:


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_409_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDocumentReferenceAsyncBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDocumentReferenceAsyncBase(UDocumentReferenceAsyncBase&&); \
	NO_API UDocumentReferenceAsyncBase(const UDocumentReferenceAsyncBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDocumentReferenceAsyncBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDocumentReferenceAsyncBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDocumentReferenceAsyncBase)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_409_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Reference() { return STRUCT_OFFSET(UDocumentReferenceAsyncBase, Reference); }


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_406_PROLOG
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_409_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_409_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_409_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_409_RPC_WRAPPERS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_409_INCLASS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_409_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_409_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_409_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_409_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_409_RPC_WRAPPERS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_409_INCLASS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_409_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDocumentReferenceAsyncBase>();

#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_422_SPARSE_DATA
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_422_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_422_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_422_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDocumentReferenceGetProxy(); \
	friend struct Z_Construct_UClass_UDocumentReferenceGetProxy_Statics; \
public: \
	DECLARE_CLASS(UDocumentReferenceGetProxy, UDocumentReferenceAsyncBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDocumentReferenceGetProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_422_INCLASS \
private: \
	static void StaticRegisterNativesUDocumentReferenceGetProxy(); \
	friend struct Z_Construct_UClass_UDocumentReferenceGetProxy_Statics; \
public: \
	DECLARE_CLASS(UDocumentReferenceGetProxy, UDocumentReferenceAsyncBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDocumentReferenceGetProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_422_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDocumentReferenceGetProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDocumentReferenceGetProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDocumentReferenceGetProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDocumentReferenceGetProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDocumentReferenceGetProxy(UDocumentReferenceGetProxy&&); \
	NO_API UDocumentReferenceGetProxy(const UDocumentReferenceGetProxy&); \
public:


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_422_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDocumentReferenceGetProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDocumentReferenceGetProxy(UDocumentReferenceGetProxy&&); \
	NO_API UDocumentReferenceGetProxy(const UDocumentReferenceGetProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDocumentReferenceGetProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDocumentReferenceGetProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDocumentReferenceGetProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_422_PRIVATE_PROPERTY_OFFSET
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_419_PROLOG
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_422_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_422_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_422_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_422_RPC_WRAPPERS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_422_INCLASS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_422_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_422_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_422_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_422_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_422_RPC_WRAPPERS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_422_INCLASS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_422_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDocumentReferenceGetProxy>();

#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_453_SPARSE_DATA
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_453_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSet);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_453_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSet);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_453_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDocumentReferenceSetProxy(); \
	friend struct Z_Construct_UClass_UDocumentReferenceSetProxy_Statics; \
public: \
	DECLARE_CLASS(UDocumentReferenceSetProxy, UDocumentReferenceAsyncBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDocumentReferenceSetProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_453_INCLASS \
private: \
	static void StaticRegisterNativesUDocumentReferenceSetProxy(); \
	friend struct Z_Construct_UClass_UDocumentReferenceSetProxy_Statics; \
public: \
	DECLARE_CLASS(UDocumentReferenceSetProxy, UDocumentReferenceAsyncBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDocumentReferenceSetProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_453_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDocumentReferenceSetProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDocumentReferenceSetProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDocumentReferenceSetProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDocumentReferenceSetProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDocumentReferenceSetProxy(UDocumentReferenceSetProxy&&); \
	NO_API UDocumentReferenceSetProxy(const UDocumentReferenceSetProxy&); \
public:


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_453_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDocumentReferenceSetProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDocumentReferenceSetProxy(UDocumentReferenceSetProxy&&); \
	NO_API UDocumentReferenceSetProxy(const UDocumentReferenceSetProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDocumentReferenceSetProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDocumentReferenceSetProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDocumentReferenceSetProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_453_PRIVATE_PROPERTY_OFFSET
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_450_PROLOG
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_453_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_453_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_453_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_453_RPC_WRAPPERS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_453_INCLASS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_453_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_453_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_453_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_453_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_453_RPC_WRAPPERS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_453_INCLASS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_453_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDocumentReferenceSetProxy>();

#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_487_SPARSE_DATA
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_487_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdate);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_487_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdate);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_487_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDocumentReferenceUpdateProxy(); \
	friend struct Z_Construct_UClass_UDocumentReferenceUpdateProxy_Statics; \
public: \
	DECLARE_CLASS(UDocumentReferenceUpdateProxy, UDocumentReferenceAsyncBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDocumentReferenceUpdateProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_487_INCLASS \
private: \
	static void StaticRegisterNativesUDocumentReferenceUpdateProxy(); \
	friend struct Z_Construct_UClass_UDocumentReferenceUpdateProxy_Statics; \
public: \
	DECLARE_CLASS(UDocumentReferenceUpdateProxy, UDocumentReferenceAsyncBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDocumentReferenceUpdateProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_487_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDocumentReferenceUpdateProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDocumentReferenceUpdateProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDocumentReferenceUpdateProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDocumentReferenceUpdateProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDocumentReferenceUpdateProxy(UDocumentReferenceUpdateProxy&&); \
	NO_API UDocumentReferenceUpdateProxy(const UDocumentReferenceUpdateProxy&); \
public:


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_487_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDocumentReferenceUpdateProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDocumentReferenceUpdateProxy(UDocumentReferenceUpdateProxy&&); \
	NO_API UDocumentReferenceUpdateProxy(const UDocumentReferenceUpdateProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDocumentReferenceUpdateProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDocumentReferenceUpdateProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDocumentReferenceUpdateProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_487_PRIVATE_PROPERTY_OFFSET
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_484_PROLOG
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_487_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_487_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_487_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_487_RPC_WRAPPERS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_487_INCLASS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_487_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_487_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_487_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_487_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_487_RPC_WRAPPERS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_487_INCLASS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_487_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDocumentReferenceUpdateProxy>();

#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_523_SPARSE_DATA
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_523_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateWithPath);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_523_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateWithPath);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_523_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDocumentReferenceUpdateWithPathProxy(); \
	friend struct Z_Construct_UClass_UDocumentReferenceUpdateWithPathProxy_Statics; \
public: \
	DECLARE_CLASS(UDocumentReferenceUpdateWithPathProxy, UDocumentReferenceAsyncBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDocumentReferenceUpdateWithPathProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_523_INCLASS \
private: \
	static void StaticRegisterNativesUDocumentReferenceUpdateWithPathProxy(); \
	friend struct Z_Construct_UClass_UDocumentReferenceUpdateWithPathProxy_Statics; \
public: \
	DECLARE_CLASS(UDocumentReferenceUpdateWithPathProxy, UDocumentReferenceAsyncBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDocumentReferenceUpdateWithPathProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_523_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDocumentReferenceUpdateWithPathProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDocumentReferenceUpdateWithPathProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDocumentReferenceUpdateWithPathProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDocumentReferenceUpdateWithPathProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDocumentReferenceUpdateWithPathProxy(UDocumentReferenceUpdateWithPathProxy&&); \
	NO_API UDocumentReferenceUpdateWithPathProxy(const UDocumentReferenceUpdateWithPathProxy&); \
public:


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_523_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDocumentReferenceUpdateWithPathProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDocumentReferenceUpdateWithPathProxy(UDocumentReferenceUpdateWithPathProxy&&); \
	NO_API UDocumentReferenceUpdateWithPathProxy(const UDocumentReferenceUpdateWithPathProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDocumentReferenceUpdateWithPathProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDocumentReferenceUpdateWithPathProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDocumentReferenceUpdateWithPathProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_523_PRIVATE_PROPERTY_OFFSET
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_520_PROLOG
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_523_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_523_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_523_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_523_RPC_WRAPPERS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_523_INCLASS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_523_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_523_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_523_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_523_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_523_RPC_WRAPPERS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_523_INCLASS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_523_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDocumentReferenceUpdateWithPathProxy>();

#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_558_SPARSE_DATA
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_558_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDelete);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_558_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDelete);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_558_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDocumentReferenceDeleteProxy(); \
	friend struct Z_Construct_UClass_UDocumentReferenceDeleteProxy_Statics; \
public: \
	DECLARE_CLASS(UDocumentReferenceDeleteProxy, UDocumentReferenceAsyncBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDocumentReferenceDeleteProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_558_INCLASS \
private: \
	static void StaticRegisterNativesUDocumentReferenceDeleteProxy(); \
	friend struct Z_Construct_UClass_UDocumentReferenceDeleteProxy_Statics; \
public: \
	DECLARE_CLASS(UDocumentReferenceDeleteProxy, UDocumentReferenceAsyncBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UDocumentReferenceDeleteProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_558_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDocumentReferenceDeleteProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDocumentReferenceDeleteProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDocumentReferenceDeleteProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDocumentReferenceDeleteProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDocumentReferenceDeleteProxy(UDocumentReferenceDeleteProxy&&); \
	NO_API UDocumentReferenceDeleteProxy(const UDocumentReferenceDeleteProxy&); \
public:


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_558_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDocumentReferenceDeleteProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDocumentReferenceDeleteProxy(UDocumentReferenceDeleteProxy&&); \
	NO_API UDocumentReferenceDeleteProxy(const UDocumentReferenceDeleteProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDocumentReferenceDeleteProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDocumentReferenceDeleteProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDocumentReferenceDeleteProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_558_PRIVATE_PROPERTY_OFFSET
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_555_PROLOG
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_558_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_558_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_558_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_558_RPC_WRAPPERS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_558_INCLASS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_558_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_558_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_558_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_558_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_558_RPC_WRAPPERS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_558_INCLASS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_558_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UDocumentReferenceDeleteProxy>();

#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_582_SPARSE_DATA
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_582_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAdd);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_582_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAdd);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_582_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCollectionReferenceAddProxy(); \
	friend struct Z_Construct_UClass_UCollectionReferenceAddProxy_Statics; \
public: \
	DECLARE_CLASS(UCollectionReferenceAddProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UCollectionReferenceAddProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_582_INCLASS \
private: \
	static void StaticRegisterNativesUCollectionReferenceAddProxy(); \
	friend struct Z_Construct_UClass_UCollectionReferenceAddProxy_Statics; \
public: \
	DECLARE_CLASS(UCollectionReferenceAddProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UCollectionReferenceAddProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_582_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCollectionReferenceAddProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollectionReferenceAddProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCollectionReferenceAddProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollectionReferenceAddProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCollectionReferenceAddProxy(UCollectionReferenceAddProxy&&); \
	NO_API UCollectionReferenceAddProxy(const UCollectionReferenceAddProxy&); \
public:


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_582_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCollectionReferenceAddProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCollectionReferenceAddProxy(UCollectionReferenceAddProxy&&); \
	NO_API UCollectionReferenceAddProxy(const UCollectionReferenceAddProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCollectionReferenceAddProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollectionReferenceAddProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollectionReferenceAddProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_582_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Reference() { return STRUCT_OFFSET(UCollectionReferenceAddProxy, Reference); }


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_579_PROLOG
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_582_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_582_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_582_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_582_RPC_WRAPPERS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_582_INCLASS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_582_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_582_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_582_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_582_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_582_RPC_WRAPPERS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_582_INCLASS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_582_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UCollectionReferenceAddProxy>();

#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_617_SPARSE_DATA
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_617_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_617_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet);


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_617_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQueryGetProxy(); \
	friend struct Z_Construct_UClass_UQueryGetProxy_Statics; \
public: \
	DECLARE_CLASS(UQueryGetProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UQueryGetProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_617_INCLASS \
private: \
	static void StaticRegisterNativesUQueryGetProxy(); \
	friend struct Z_Construct_UClass_UQueryGetProxy_Statics; \
public: \
	DECLARE_CLASS(UQueryGetProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UQueryGetProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_617_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQueryGetProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQueryGetProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQueryGetProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQueryGetProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQueryGetProxy(UQueryGetProxy&&); \
	NO_API UQueryGetProxy(const UQueryGetProxy&); \
public:


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_617_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQueryGetProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQueryGetProxy(UQueryGetProxy&&); \
	NO_API UQueryGetProxy(const UQueryGetProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQueryGetProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQueryGetProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQueryGetProxy)


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_617_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Query() { return STRUCT_OFFSET(UQueryGetProxy, Query); }


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_614_PROLOG
#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_617_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_617_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_617_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_617_RPC_WRAPPERS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_617_INCLASS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_617_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_617_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_617_PRIVATE_PROPERTY_OFFSET \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_617_SPARSE_DATA \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_617_RPC_WRAPPERS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_617_INCLASS_NO_PURE_DECLS \
	VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h_617_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UQueryGetProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VRMBA_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_Firestore_FirestoreNodes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
