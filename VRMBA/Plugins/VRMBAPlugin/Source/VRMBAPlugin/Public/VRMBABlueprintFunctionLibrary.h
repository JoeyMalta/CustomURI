// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HAL/FileManager.h"
#include "Runtime/ApplicationCore/Public/Windows/WindowsPlatformApplicationMisc.h"
#include "GeneralProjectSettings.h"
#include "GameFramework/Actor.h"
#include "VRMBABlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class VRMBAPLUGIN_API UVRMBABlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


		UFUNCTION(BlueprintCallable, Category = "IsSingleInstance")
		static void IsSingleInstance(bool IsEnabled = true);

		UFUNCTION(BlueprintCallable, Category = "VRMBA| SetURIScheme")
		static void SetURIScheme(FString protocolName, FString executablePath);

		UFUNCTION(BlueprintCallable, Category = "VRMBA| IS URIScheme set")
		static bool IsURISchemeSet(FString protocolName);

		UFUNCTION(BlueprintCallable, Category = "VRMBA | Get Executable")
		static FString getExecutableName();

		UFUNCTION(BlueprintCallable, Category = "VRMBA | Get Executable Path")
		static FString getExecutablePath();

		UFUNCTION(BlueprintCallable, Category = "VRMBA | Get Original Commandline")
		static FString getCommandLineOriginal();

		/*UFUNCTION(BlueprintCallable, Category = "Firebase")
		static void GetGoogleToken(const FString& ApiId, const FString& ApiSecret, UGoogle* goolge);*/

	
};
