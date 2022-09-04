// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSOSPluginLink_init() {}
	SOSPLUGINLINK_API UFunction* Z_Construct_UDelegateFunction_SOSPluginLink_OnWebSocketClosed__DelegateSignature();
	SOSPLUGINLINK_API UFunction* Z_Construct_UDelegateFunction_SOSPluginLink_OnWebSocketConnected__DelegateSignature();
	SOSPLUGINLINK_API UFunction* Z_Construct_UDelegateFunction_SOSPluginLink_OnWebSocketConnectionError__DelegateSignature();
	SOSPLUGINLINK_API UFunction* Z_Construct_UDelegateFunction_SOSPluginLink_OnWebSocketMessageReceived__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SOSPluginLink;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SOSPluginLink()
	{
		if (!Z_Registration_Info_UPackage__Script_SOSPluginLink.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SOSPluginLink_OnWebSocketClosed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SOSPluginLink_OnWebSocketConnected__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SOSPluginLink_OnWebSocketConnectionError__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SOSPluginLink_OnWebSocketMessageReceived__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SOSPluginLink",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC2ED11AB,
				0xF4475706,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SOSPluginLink.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SOSPluginLink.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SOSPluginLink(Z_Construct_UPackage__Script_SOSPluginLink, TEXT("/Script/SOSPluginLink"), Z_Registration_Info_UPackage__Script_SOSPluginLink, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC2ED11AB, 0xF4475706));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
