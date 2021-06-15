// Copyright Pandores Marketplace 2021. All Rights Reserved.
#include "Database/Database.h"

THIRD_PARTY_INCLUDES_START
#	include "firebase/database.h"
THIRD_PARTY_INCLUDES_END

#include "Database/DatabaseReference.h"

#include "FirebaseFeatures.h"

UDatabase::TDatabase* UDatabase::GetDatabase(const FString& Url)
{
	firebase::InitResult Result = firebase::InitResult::kInitResultFailedMissingDependency;

	TDatabase* const Database = Url.IsEmpty() ?
		firebase::database::Database::GetInstance(firebase::App::GetInstance(), &Result) :
		firebase::database::Database::GetInstance(firebase::App::GetInstance(), TCHAR_TO_UTF8(*Url), &Result);
		
	ensureMsgf(Database != nullptr, TEXT("Failed to get a valid Firebase Data object for URL \"%s\"."), *Url);
	ensure(Result == firebase::InitResult::kInitResultSuccess);

	return Database;
}

UDatabaseReference* UDatabase::GetReference() const
{
	TDatabase* const Database = GetDatabase();

	if (!Database)
	{
		UE_LOG(LogFirebaseDatabase, Warning, TEXT("Failed to get database."));
		return nullptr;
	}

	TDatabaseReference RawReference = Database->GetReference();

	UDatabaseReference* const Reference = NewObject<UDatabaseReference>();

	Reference->Reference = RawReference;

	return Reference;
}

UDatabaseReference* UDatabase::GetReferenceFromPath(const FString& Path) const
{
	TDatabase* const Database = GetDatabase();

	if (!Database)
	{
		UE_LOG(LogFirebaseDatabase, Warning, TEXT("Failed to get database."));
		return nullptr;
	}

	UDatabaseReference* const Reference = NewObject<UDatabaseReference>();

	Reference->Reference = Database->GetReference(TCHAR_TO_UTF8(*Path));

	return Reference;
}

UDatabaseReference* UDatabase::GetReferenceFromUrl(const FString& InUrl) const
{
	TDatabase* const Database = GetDatabase();

	if (!Database)
	{
		UE_LOG(LogFirebaseDatabase, Warning, TEXT("Failed to get database."));
		return nullptr;
	}

	UDatabaseReference* const Reference = NewObject<UDatabaseReference>();

	Reference->Reference = Database->GetReferenceFromUrl(TCHAR_TO_UTF8(*InUrl));

	return Reference;
}

UDatabase::TDatabase* UDatabase::GetDatabase() const
{
	return GetDatabase(Url);
}

UDatabase* UDatabase::GetInstance()
{
	UDatabase* Database = nullptr;

	TDatabase* RawDatabase = GetDatabase(TEXT(""));
	if (RawDatabase)
	{
		Database = NewObject<UDatabase>();
	}

	return Database;
}

UDatabase* UDatabase::GetInstanceFromUrl(const FString& Url)
{
	UDatabase* Database = nullptr;

	TDatabase* const RawDatabase = GetDatabase(Url);
	if (RawDatabase)
	{
		Database = NewObject<UDatabase>();
		Database->Url = Url;
	}

	return Database;
}

FString UDatabase::GetUrl()
{
	TDatabase* const Database = GetDatabase();
	return Database ? UTF8_TO_TCHAR(GetDatabase()->url()) : TEXT("");
}

void UDatabase::GoOffline()
{
	TDatabase* const Database = GetDatabase();
	if (Database)
	{
		GetDatabase()->GoOffline();
	}
}

void UDatabase::GoOnline()
{
	TDatabase* const Database = GetDatabase();
	if (Database)
	{
		GetDatabase()->GoOnline();
	}
}

void UDatabase::PurgeOutstandingWrites()
{
	TDatabase* const Database = GetDatabase();
	if (Database)
	{
		GetDatabase()->PurgeOutstandingWrites();
	}
}

void UDatabase::SetPersistenceEnabled(const bool bEnabled)
{
	TDatabase* const Database = GetDatabase();
	if (Database)
	{
		GetDatabase()->set_persistence_enabled(bEnabled);
	}
}

void UDatabase::SetLogLevel(const EDatabaseLogLevel DatabaseLogLevel)
{
	TDatabase* const Database = GetDatabase();
	if (Database)
	{
		GetDatabase()->set_log_level((firebase::LogLevel)DatabaseLogLevel);
	}
}
