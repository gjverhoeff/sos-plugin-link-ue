// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SOSPluginLink/Public/WebsocketFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebsocketFunctionLibrary() {}
// Cross Module References
	SOSPLUGINLINK_API UClass* Z_Construct_UClass_UWebSocketFunctionLibrary_NoRegister();
	SOSPLUGINLINK_API UClass* Z_Construct_UClass_UWebSocketFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SOSPluginLink();
	SOSPLUGINLINK_API UClass* Z_Construct_UClass_UWebSocket_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWebSocketFunctionLibrary::execSOSPluginWebsocketURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWebSocket**)Z_Param__Result=UWebSocketFunctionLibrary::SOSPluginWebsocketURL(Z_Param_ServerUrl);
		P_NATIVE_END;
	}
	void UWebSocketFunctionLibrary::StaticRegisterNativesUWebSocketFunctionLibrary()
	{
		UClass* Class = UWebSocketFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SOSPluginWebsocketURL", &UWebSocketFunctionLibrary::execSOSPluginWebsocketURL },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSocketFunctionLibrary_SOSPluginWebsocketURL_Statics
	{
		struct WebSocketFunctionLibrary_eventSOSPluginWebsocketURL_Parms
		{
			FString ServerUrl;
			UWebSocket* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerUrl;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketFunctionLibrary_SOSPluginWebsocketURL_Statics::NewProp_ServerUrl = { "ServerUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketFunctionLibrary_eventSOSPluginWebsocketURL_Parms, ServerUrl), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebSocketFunctionLibrary_SOSPluginWebsocketURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketFunctionLibrary_eventSOSPluginWebsocketURL_Parms, ReturnValue), Z_Construct_UClass_UWebSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketFunctionLibrary_SOSPluginWebsocketURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketFunctionLibrary_SOSPluginWebsocketURL_Statics::NewProp_ServerUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketFunctionLibrary_SOSPluginWebsocketURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketFunctionLibrary_SOSPluginWebsocketURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SOS Plugin" },
		{ "ModuleRelativePath", "Public/WebsocketFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketFunctionLibrary_SOSPluginWebsocketURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketFunctionLibrary, nullptr, "SOSPluginWebsocketURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebSocketFunctionLibrary_SOSPluginWebsocketURL_Statics::WebSocketFunctionLibrary_eventSOSPluginWebsocketURL_Parms), Z_Construct_UFunction_UWebSocketFunctionLibrary_SOSPluginWebsocketURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketFunctionLibrary_SOSPluginWebsocketURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketFunctionLibrary_SOSPluginWebsocketURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketFunctionLibrary_SOSPluginWebsocketURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketFunctionLibrary_SOSPluginWebsocketURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebSocketFunctionLibrary_SOSPluginWebsocketURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebSocketFunctionLibrary);
	UClass* Z_Construct_UClass_UWebSocketFunctionLibrary_NoRegister()
	{
		return UWebSocketFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UWebSocketFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSocketFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SOSPluginLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebSocketFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSocketFunctionLibrary_SOSPluginWebsocketURL, "SOSPluginWebsocketURL" }, // 1982684049
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WebsocketFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/WebsocketFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSocketFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSocketFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebSocketFunctionLibrary_Statics::ClassParams = {
		&UWebSocketFunctionLibrary::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebSocketFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSocketFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UWebSocketFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebSocketFunctionLibrary.OuterSingleton, Z_Construct_UClass_UWebSocketFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebSocketFunctionLibrary.OuterSingleton;
	}
	template<> SOSPLUGINLINK_API UClass* StaticClass<UWebSocketFunctionLibrary>()
	{
		return UWebSocketFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocketFunctionLibrary);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_WebsocketFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_WebsocketFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebSocketFunctionLibrary, UWebSocketFunctionLibrary::StaticClass, TEXT("UWebSocketFunctionLibrary"), &Z_Registration_Info_UClass_UWebSocketFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebSocketFunctionLibrary), 3024410109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_WebsocketFunctionLibrary_h_3958745939(TEXT("/Script/SOSPluginLink"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_WebsocketFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_WebsocketFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
