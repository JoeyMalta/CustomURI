// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirebaseFeatures/Public/Firestore/FieldValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldValue() {}
// Cross Module References
	FIREBASEFEATURES_API UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirestoreFieldValueType();
	UPackage* Z_Construct_UPackage__Script_FirebaseFeatures();
	FIREBASEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFirestoreFieldValue();
// End Cross Module References
	static UEnum* EFirestoreFieldValueType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FirebaseFeatures_EFirestoreFieldValueType, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("EFirestoreFieldValueType"));
		}
		return Singleton;
	}
	template<> FIREBASEFEATURES_API UEnum* StaticEnum<EFirestoreFieldValueType>()
	{
		return EFirestoreFieldValueType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFirestoreFieldValueType(EFirestoreFieldValueType_StaticEnum, TEXT("/Script/FirebaseFeatures"), TEXT("EFirestoreFieldValueType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FirebaseFeatures_EFirestoreFieldValueType_Hash() { return 334086757U; }
	UEnum* Z_Construct_UEnum_FirebaseFeatures_EFirestoreFieldValueType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFirestoreFieldValueType"), 0, Get_Z_Construct_UEnum_FirebaseFeatures_EFirestoreFieldValueType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFirestoreFieldValueType::Null", (int64)EFirestoreFieldValueType::Null },
				{ "EFirestoreFieldValueType::Boolean", (int64)EFirestoreFieldValueType::Boolean },
				{ "EFirestoreFieldValueType::Integer", (int64)EFirestoreFieldValueType::Integer },
				{ "EFirestoreFieldValueType::Double", (int64)EFirestoreFieldValueType::Double },
				{ "EFirestoreFieldValueType::Timestamp", (int64)EFirestoreFieldValueType::Timestamp },
				{ "EFirestoreFieldValueType::String", (int64)EFirestoreFieldValueType::String },
				{ "EFirestoreFieldValueType::Blob", (int64)EFirestoreFieldValueType::Blob },
				{ "EFirestoreFieldValueType::Reference", (int64)EFirestoreFieldValueType::Reference },
				{ "EFirestoreFieldValueType::GeoPoint", (int64)EFirestoreFieldValueType::GeoPoint },
				{ "EFirestoreFieldValueType::Array", (int64)EFirestoreFieldValueType::Array },
				{ "EFirestoreFieldValueType::Map", (int64)EFirestoreFieldValueType::Map },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Array.Name", "EFirestoreFieldValueType::Array" },
				{ "Blob.Name", "EFirestoreFieldValueType::Blob" },
				{ "BlueprintType", "true" },
				{ "Boolean.Name", "EFirestoreFieldValueType::Boolean" },
				{ "Double.Name", "EFirestoreFieldValueType::Double" },
				{ "GeoPoint.Name", "EFirestoreFieldValueType::GeoPoint" },
				{ "Integer.Name", "EFirestoreFieldValueType::Integer" },
				{ "Map.Name", "EFirestoreFieldValueType::Map" },
				{ "ModuleRelativePath", "Public/Firestore/FieldValue.h" },
				{ "Null.Name", "EFirestoreFieldValueType::Null" },
				{ "Reference.Name", "EFirestoreFieldValueType::Reference" },
				{ "String.Name", "EFirestoreFieldValueType::String" },
				{ "Timestamp.Name", "EFirestoreFieldValueType::Timestamp" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FirebaseFeatures,
				nullptr,
				"EFirestoreFieldValueType",
				"EFirestoreFieldValueType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FFirestoreFieldValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FIREBASEFEATURES_API uint32 Get_Z_Construct_UScriptStruct_FFirestoreFieldValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirestoreFieldValue, Z_Construct_UPackage__Script_FirebaseFeatures(), TEXT("FirestoreFieldValue"), sizeof(FFirestoreFieldValue), Get_Z_Construct_UScriptStruct_FFirestoreFieldValue_Hash());
	}
	return Singleton;
}
template<> FIREBASEFEATURES_API UScriptStruct* StaticStruct<FFirestoreFieldValue>()
{
	return FFirestoreFieldValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFirestoreFieldValue(FFirestoreFieldValue::StaticStruct, TEXT("/Script/FirebaseFeatures"), TEXT("FirestoreFieldValue"), false, nullptr, nullptr);
static struct FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreFieldValue
{
	FScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreFieldValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FirestoreFieldValue")),new UScriptStruct::TCppStructOps<FFirestoreFieldValue>);
	}
} ScriptStruct_FirebaseFeatures_StaticRegisterNativesFFirestoreFieldValue;
	struct Z_Construct_UScriptStruct_FFirestoreFieldValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirestoreFieldValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Firestore/FieldValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirestoreFieldValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirestoreFieldValue>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirestoreFieldValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirebaseFeatures,
		nullptr,
		&NewStructOps,
		"FirestoreFieldValue",
		sizeof(FFirestoreFieldValue),
		alignof(FFirestoreFieldValue),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirestoreFieldValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirestoreFieldValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirestoreFieldValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFirestoreFieldValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FirebaseFeatures();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FirestoreFieldValue"), sizeof(FFirestoreFieldValue), Get_Z_Construct_UScriptStruct_FFirestoreFieldValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFirestoreFieldValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFirestoreFieldValue_Hash() { return 3775952900U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
