// Copyright Pandores Marketplace 2021. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#if !defined(WITH_FIREBASE_FIRESTORE)
#	define WITH_FIREBASE_FIRESTORE 0
#endif 

#if WITH_FIREBASE_FIRESTORE
	THIRD_PARTY_INCLUDES_START
#		include "firebase/firestore/field_value.h"
	THIRD_PARTY_INCLUDES_END
#endif // WITH_FIREBASE_FIRESTORE

#include "FieldValue.generated.h"

class UFirestoreDocumentReference;

UENUM(BlueprintType)
enum class EFirestoreFieldValueType : uint8
{
	Null,
	Boolean,
	Integer,
	Double,
	Timestamp,
	String,
	Blob,
	Reference,
	GeoPoint,
	Array,
	Map,
};

USTRUCT(BlueprintType)
struct FIREBASEFEATURES_API FFirestoreFieldValue
{
	GENERATED_BODY()
public:
	FFirestoreFieldValue();
	FFirestoreFieldValue(const FFirestoreFieldValue& Other);

#if WITH_FIREBASE_FIRESTORE
	FFirestoreFieldValue(const firebase::firestore::FieldValue& Value);
#endif // WITH_FIREBASE_FIRESTORE

	FFirestoreFieldValue(const bool  bValue);
	FFirestoreFieldValue(const int32  Value);
	FFirestoreFieldValue(const int64  Value);
	FFirestoreFieldValue(const float  Value);
	FFirestoreFieldValue(const double Value);

	FFirestoreFieldValue(const FString&		  Value);
	FFirestoreFieldValue(const TArray<uint8>& Value);

	FFirestoreFieldValue(const TArray<FFirestoreFieldValue>&		Value);
	FFirestoreFieldValue(const TMap<FString, FFirestoreFieldValue>& Value);
	FFirestoreFieldValue(UFirestoreDocumentReference* const			Value);

	~FFirestoreFieldValue();
	
	FFirestoreFieldValue& operator=(const FFirestoreFieldValue& Other);

	EFirestoreFieldValueType GetType() const;

#if WITH_FIREBASE_FIRESTORE
	FORCEINLINE operator firebase::firestore::FieldValue& ()
	{
		return *FieldValue.Get();
	}

	FORCEINLINE operator firebase::firestore::FieldValue& () const
	{
		return *FieldValue.Get();
	}
#endif  // WITH_FIREBASE_FIRESTORE

	operator int32()   const;
	operator int64()   const;
	operator bool()    const;
	operator float()   const;
	operator double()  const;
	operator FString() const;

	operator TArray<uint8>()						const;
	operator TArray<FFirestoreFieldValue>()			const;
	operator TMap<FString, FFirestoreFieldValue>()	const;
	operator UFirestoreDocumentReference* ()		const;

public:
	bool    ToBool()   const;
	double  ToDouble() const;
	float   ToFloat()  const;
	int64   ToInt64()  const;
	int32   ToInt32()  const;
	FString ToString() const;

	TArray<uint8> ToBinary() const;
	UFirestoreDocumentReference*		ToDocumentReference()	const;
	TMap<FString, FFirestoreFieldValue> ToMap()					const;
	TArray<FFirestoreFieldValue>		ToArray()				const;

private:
#if WITH_FIREBASE_FIRESTORE
	void SetValue(const firebase::firestore::FieldValue& Value);
	TUniquePtr<firebase::firestore::FieldValue> FieldValue;
#endif
};


