#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Object.h"
#include "GoogleSession.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTokenCallback, FString, accessToken, FString, refreshToken);


UCLASS(BlueprintType)
class UGoogle : public UObject
{
	GENERATED_BODY()

public:

	UGoogle();

	UPROPERTY(BlueprintAssignable, Category = "Google Access Token")
	FTokenCallback OnTokenRecieved;

	UFUNCTION()
	void CallTokenRecieved(FString accessToken, FString refreshToken);

	UFUNCTION(BlueprintCallable, Category = "Firebase")
	void GetGoogleToken(const FString& ApiId, const FString& ApiSecret);

	//void callbackFunction(const wchar_t* a, const wchar_t* b);

};
