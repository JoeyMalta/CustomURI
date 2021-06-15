// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRMBAPlugin/Public/GoogleSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleSession() {}
// Cross Module References
	VRMBAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRMBAPlugin_TokenCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VRMBAPlugin();
	VRMBAPLUGIN_API UClass* Z_Construct_UClass_UGoogle_NoRegister();
	VRMBAPLUGIN_API UClass* Z_Construct_UClass_UGoogle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VRMBAPlugin_TokenCallback__DelegateSignature_Statics
	{
		struct _Script_VRMBAPlugin_eventTokenCallback_Parms
		{
			FString accessToken;
			FString refreshToken;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_refreshToken;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_accessToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_VRMBAPlugin_TokenCallback__DelegateSignature_Statics::NewProp_refreshToken = { "refreshToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRMBAPlugin_eventTokenCallback_Parms, refreshToken), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_VRMBAPlugin_TokenCallback__DelegateSignature_Statics::NewProp_accessToken = { "accessToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VRMBAPlugin_eventTokenCallback_Parms, accessToken), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VRMBAPlugin_TokenCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRMBAPlugin_TokenCallback__DelegateSignature_Statics::NewProp_refreshToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VRMBAPlugin_TokenCallback__DelegateSignature_Statics::NewProp_accessToken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VRMBAPlugin_TokenCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoogleSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VRMBAPlugin_TokenCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRMBAPlugin, nullptr, "TokenCallback__DelegateSignature", nullptr, nullptr, sizeof(_Script_VRMBAPlugin_eventTokenCallback_Parms), Z_Construct_UDelegateFunction_VRMBAPlugin_TokenCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRMBAPlugin_TokenCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VRMBAPlugin_TokenCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VRMBAPlugin_TokenCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VRMBAPlugin_TokenCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VRMBAPlugin_TokenCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UGoogle::execGetGoogleToken)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ApiId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ApiSecret);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGoogleToken(Z_Param_ApiId,Z_Param_ApiSecret);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogle::execCallTokenRecieved)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_accessToken);
		P_GET_PROPERTY(FStrProperty,Z_Param_refreshToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallTokenRecieved(Z_Param_accessToken,Z_Param_refreshToken);
		P_NATIVE_END;
	}
	void UGoogle::StaticRegisterNativesUGoogle()
	{
		UClass* Class = UGoogle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallTokenRecieved", &UGoogle::execCallTokenRecieved },
			{ "GetGoogleToken", &UGoogle::execGetGoogleToken },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGoogle_CallTokenRecieved_Statics
	{
		struct Google_eventCallTokenRecieved_Parms
		{
			FString accessToken;
			FString refreshToken;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_refreshToken;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_accessToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGoogle_CallTokenRecieved_Statics::NewProp_refreshToken = { "refreshToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Google_eventCallTokenRecieved_Parms, refreshToken), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGoogle_CallTokenRecieved_Statics::NewProp_accessToken = { "accessToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Google_eventCallTokenRecieved_Parms, accessToken), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogle_CallTokenRecieved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogle_CallTokenRecieved_Statics::NewProp_refreshToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogle_CallTokenRecieved_Statics::NewProp_accessToken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogle_CallTokenRecieved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoogleSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogle_CallTokenRecieved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogle, nullptr, "CallTokenRecieved", nullptr, nullptr, sizeof(Google_eventCallTokenRecieved_Parms), Z_Construct_UFunction_UGoogle_CallTokenRecieved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogle_CallTokenRecieved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogle_CallTokenRecieved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogle_CallTokenRecieved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogle_CallTokenRecieved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoogle_CallTokenRecieved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogle_GetGoogleToken_Statics
	{
		struct Google_eventGetGoogleToken_Parms
		{
			FString ApiId;
			FString ApiSecret;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApiSecret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ApiSecret;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApiId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ApiId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogle_GetGoogleToken_Statics::NewProp_ApiSecret_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGoogle_GetGoogleToken_Statics::NewProp_ApiSecret = { "ApiSecret", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Google_eventGetGoogleToken_Parms, ApiSecret), METADATA_PARAMS(Z_Construct_UFunction_UGoogle_GetGoogleToken_Statics::NewProp_ApiSecret_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogle_GetGoogleToken_Statics::NewProp_ApiSecret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogle_GetGoogleToken_Statics::NewProp_ApiId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGoogle_GetGoogleToken_Statics::NewProp_ApiId = { "ApiId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Google_eventGetGoogleToken_Parms, ApiId), METADATA_PARAMS(Z_Construct_UFunction_UGoogle_GetGoogleToken_Statics::NewProp_ApiId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogle_GetGoogleToken_Statics::NewProp_ApiId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogle_GetGoogleToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogle_GetGoogleToken_Statics::NewProp_ApiSecret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogle_GetGoogleToken_Statics::NewProp_ApiId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogle_GetGoogleToken_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firebase" },
		{ "ModuleRelativePath", "Public/GoogleSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogle_GetGoogleToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogle, nullptr, "GetGoogleToken", nullptr, nullptr, sizeof(Google_eventGetGoogleToken_Parms), Z_Construct_UFunction_UGoogle_GetGoogleToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogle_GetGoogleToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogle_GetGoogleToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogle_GetGoogleToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogle_GetGoogleToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoogle_GetGoogleToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGoogle_NoRegister()
	{
		return UGoogle::StaticClass();
	}
	struct Z_Construct_UClass_UGoogle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTokenRecieved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTokenRecieved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VRMBAPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGoogle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGoogle_CallTokenRecieved, "CallTokenRecieved" }, // 441435864
		{ &Z_Construct_UFunction_UGoogle_GetGoogleToken, "GetGoogleToken" }, // 4180100411
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GoogleSession.h" },
		{ "ModuleRelativePath", "Public/GoogleSession.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogle_Statics::NewProp_OnTokenRecieved_MetaData[] = {
		{ "Category", "Google Access Token" },
		{ "ModuleRelativePath", "Public/GoogleSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGoogle_Statics::NewProp_OnTokenRecieved = { "OnTokenRecieved", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoogle, OnTokenRecieved), Z_Construct_UDelegateFunction_VRMBAPlugin_TokenCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGoogle_Statics::NewProp_OnTokenRecieved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogle_Statics::NewProp_OnTokenRecieved_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoogle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogle_Statics::NewProp_OnTokenRecieved,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGoogle_Statics::ClassParams = {
		&UGoogle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGoogle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGoogle_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGoogle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoogle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGoogle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGoogle, 2697424651);
	template<> VRMBAPLUGIN_API UClass* StaticClass<UGoogle>()
	{
		return UGoogle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGoogle(Z_Construct_UClass_UGoogle, &UGoogle::StaticClass, TEXT("/Script/VRMBAPlugin"), TEXT("UGoogle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
