// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRMBAPlugin/Public/VRMBABlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRMBABlueprintFunctionLibrary() {}
// Cross Module References
	VRMBAPLUGIN_API UClass* Z_Construct_UClass_UVRMBABlueprintFunctionLibrary_NoRegister();
	VRMBAPLUGIN_API UClass* Z_Construct_UClass_UVRMBABlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VRMBAPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UVRMBABlueprintFunctionLibrary::execgetCommandLineOriginal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVRMBABlueprintFunctionLibrary::getCommandLineOriginal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRMBABlueprintFunctionLibrary::execgetExecutablePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVRMBABlueprintFunctionLibrary::getExecutablePath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRMBABlueprintFunctionLibrary::execgetExecutableName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVRMBABlueprintFunctionLibrary::getExecutableName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRMBABlueprintFunctionLibrary::execIsURISchemeSet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_protocolName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVRMBABlueprintFunctionLibrary::IsURISchemeSet(Z_Param_protocolName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRMBABlueprintFunctionLibrary::execSetURIScheme)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_protocolName);
		P_GET_PROPERTY(FStrProperty,Z_Param_executablePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVRMBABlueprintFunctionLibrary::SetURIScheme(Z_Param_protocolName,Z_Param_executablePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRMBABlueprintFunctionLibrary::execIsSingleInstance)
	{
		P_GET_UBOOL(Z_Param_IsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVRMBABlueprintFunctionLibrary::IsSingleInstance(Z_Param_IsEnabled);
		P_NATIVE_END;
	}
	void UVRMBABlueprintFunctionLibrary::StaticRegisterNativesUVRMBABlueprintFunctionLibrary()
	{
		UClass* Class = UVRMBABlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getCommandLineOriginal", &UVRMBABlueprintFunctionLibrary::execgetCommandLineOriginal },
			{ "getExecutableName", &UVRMBABlueprintFunctionLibrary::execgetExecutableName },
			{ "getExecutablePath", &UVRMBABlueprintFunctionLibrary::execgetExecutablePath },
			{ "IsSingleInstance", &UVRMBABlueprintFunctionLibrary::execIsSingleInstance },
			{ "IsURISchemeSet", &UVRMBABlueprintFunctionLibrary::execIsURISchemeSet },
			{ "SetURIScheme", &UVRMBABlueprintFunctionLibrary::execSetURIScheme },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getCommandLineOriginal_Statics
	{
		struct VRMBABlueprintFunctionLibrary_eventgetCommandLineOriginal_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getCommandLineOriginal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRMBABlueprintFunctionLibrary_eventgetCommandLineOriginal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getCommandLineOriginal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getCommandLineOriginal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getCommandLineOriginal_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMBA | Get Original Commandline" },
		{ "ModuleRelativePath", "Public/VRMBABlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getCommandLineOriginal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMBABlueprintFunctionLibrary, nullptr, "getCommandLineOriginal", nullptr, nullptr, sizeof(VRMBABlueprintFunctionLibrary_eventgetCommandLineOriginal_Parms), Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getCommandLineOriginal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getCommandLineOriginal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getCommandLineOriginal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getCommandLineOriginal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getCommandLineOriginal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getCommandLineOriginal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutableName_Statics
	{
		struct VRMBABlueprintFunctionLibrary_eventgetExecutableName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutableName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRMBABlueprintFunctionLibrary_eventgetExecutableName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutableName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutableName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutableName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMBA | Get Executable" },
		{ "ModuleRelativePath", "Public/VRMBABlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutableName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMBABlueprintFunctionLibrary, nullptr, "getExecutableName", nullptr, nullptr, sizeof(VRMBABlueprintFunctionLibrary_eventgetExecutableName_Parms), Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutableName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutableName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutableName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutableName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutableName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutableName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutablePath_Statics
	{
		struct VRMBABlueprintFunctionLibrary_eventgetExecutablePath_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutablePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRMBABlueprintFunctionLibrary_eventgetExecutablePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutablePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutablePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutablePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMBA | Get Executable Path" },
		{ "ModuleRelativePath", "Public/VRMBABlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutablePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMBABlueprintFunctionLibrary, nullptr, "getExecutablePath", nullptr, nullptr, sizeof(VRMBABlueprintFunctionLibrary_eventgetExecutablePath_Parms), Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutablePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutablePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutablePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutablePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutablePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutablePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsSingleInstance_Statics
	{
		struct VRMBABlueprintFunctionLibrary_eventIsSingleInstance_Parms
		{
			bool IsEnabled;
		};
		static void NewProp_IsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsSingleInstance_Statics::NewProp_IsEnabled_SetBit(void* Obj)
	{
		((VRMBABlueprintFunctionLibrary_eventIsSingleInstance_Parms*)Obj)->IsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsSingleInstance_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRMBABlueprintFunctionLibrary_eventIsSingleInstance_Parms), &Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsSingleInstance_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsSingleInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsSingleInstance_Statics::NewProp_IsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsSingleInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "IsSingleInstance" },
		{ "CPP_Default_IsEnabled", "true" },
		{ "ModuleRelativePath", "Public/VRMBABlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsSingleInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMBABlueprintFunctionLibrary, nullptr, "IsSingleInstance", nullptr, nullptr, sizeof(VRMBABlueprintFunctionLibrary_eventIsSingleInstance_Parms), Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsSingleInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsSingleInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsSingleInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsSingleInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsSingleInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsSingleInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsURISchemeSet_Statics
	{
		struct VRMBABlueprintFunctionLibrary_eventIsURISchemeSet_Parms
		{
			FString protocolName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_protocolName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsURISchemeSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRMBABlueprintFunctionLibrary_eventIsURISchemeSet_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsURISchemeSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VRMBABlueprintFunctionLibrary_eventIsURISchemeSet_Parms), &Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsURISchemeSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsURISchemeSet_Statics::NewProp_protocolName = { "protocolName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRMBABlueprintFunctionLibrary_eventIsURISchemeSet_Parms, protocolName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsURISchemeSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsURISchemeSet_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsURISchemeSet_Statics::NewProp_protocolName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsURISchemeSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMBA| IS URIScheme set" },
		{ "ModuleRelativePath", "Public/VRMBABlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsURISchemeSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMBABlueprintFunctionLibrary, nullptr, "IsURISchemeSet", nullptr, nullptr, sizeof(VRMBABlueprintFunctionLibrary_eventIsURISchemeSet_Parms), Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsURISchemeSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsURISchemeSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsURISchemeSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsURISchemeSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsURISchemeSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsURISchemeSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_SetURIScheme_Statics
	{
		struct VRMBABlueprintFunctionLibrary_eventSetURIScheme_Parms
		{
			FString protocolName;
			FString executablePath;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_executablePath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_protocolName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_SetURIScheme_Statics::NewProp_executablePath = { "executablePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRMBABlueprintFunctionLibrary_eventSetURIScheme_Parms, executablePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_SetURIScheme_Statics::NewProp_protocolName = { "protocolName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VRMBABlueprintFunctionLibrary_eventSetURIScheme_Parms, protocolName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_SetURIScheme_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_SetURIScheme_Statics::NewProp_executablePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_SetURIScheme_Statics::NewProp_protocolName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_SetURIScheme_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRMBA| SetURIScheme" },
		{ "ModuleRelativePath", "Public/VRMBABlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_SetURIScheme_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRMBABlueprintFunctionLibrary, nullptr, "SetURIScheme", nullptr, nullptr, sizeof(VRMBABlueprintFunctionLibrary_eventSetURIScheme_Parms), Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_SetURIScheme_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_SetURIScheme_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_SetURIScheme_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_SetURIScheme_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_SetURIScheme()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_SetURIScheme_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRMBABlueprintFunctionLibrary_NoRegister()
	{
		return UVRMBABlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVRMBABlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRMBABlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VRMBAPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRMBABlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getCommandLineOriginal, "getCommandLineOriginal" }, // 3551281922
		{ &Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutableName, "getExecutableName" }, // 3638364369
		{ &Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_getExecutablePath, "getExecutablePath" }, // 1074704677
		{ &Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsSingleInstance, "IsSingleInstance" }, // 2330595631
		{ &Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_IsURISchemeSet, "IsURISchemeSet" }, // 2676163765
		{ &Z_Construct_UFunction_UVRMBABlueprintFunctionLibrary_SetURIScheme, "SetURIScheme" }, // 2129777237
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRMBABlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "VRMBABlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/VRMBABlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRMBABlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRMBABlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVRMBABlueprintFunctionLibrary_Statics::ClassParams = {
		&UVRMBABlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVRMBABlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRMBABlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRMBABlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVRMBABlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRMBABlueprintFunctionLibrary, 1496358761);
	template<> VRMBAPLUGIN_API UClass* StaticClass<UVRMBABlueprintFunctionLibrary>()
	{
		return UVRMBABlueprintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRMBABlueprintFunctionLibrary(Z_Construct_UClass_UVRMBABlueprintFunctionLibrary, &UVRMBABlueprintFunctionLibrary::StaticClass, TEXT("/Script/VRMBAPlugin"), TEXT("UVRMBABlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRMBABlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
