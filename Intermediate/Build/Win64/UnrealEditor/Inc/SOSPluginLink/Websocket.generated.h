// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOSPLUGINLINK_Websocket_generated_h
#error "Websocket.generated.h already included, missing '#pragma once' in Websocket.h"
#endif
#define SOSPLUGINLINK_Websocket_generated_h

#define FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_Websocket_h_10_DELEGATE \
static inline void FOnWebSocketConnected_DelegateWrapper(const FMulticastScriptDelegate& OnWebSocketConnected) \
{ \
	OnWebSocketConnected.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_Websocket_h_11_DELEGATE \
struct _Script_SOSPluginLink_eventOnWebSocketConnectionError_Parms \
{ \
	FString Error; \
}; \
static inline void FOnWebSocketConnectionError_DelegateWrapper(const FMulticastScriptDelegate& OnWebSocketConnectionError, const FString& Error) \
{ \
	_Script_SOSPluginLink_eventOnWebSocketConnectionError_Parms Parms; \
	Parms.Error=Error; \
	OnWebSocketConnectionError.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_Websocket_h_12_DELEGATE \
struct _Script_SOSPluginLink_eventOnWebSocketClosed_Parms \
{ \
	int32 StatusCode; \
	FString Reason; \
	bool bWasClean; \
}; \
static inline void FOnWebSocketClosed_DelegateWrapper(const FMulticastScriptDelegate& OnWebSocketClosed, int32 StatusCode, const FString& Reason, bool bWasClean) \
{ \
	_Script_SOSPluginLink_eventOnWebSocketClosed_Parms Parms; \
	Parms.StatusCode=StatusCode; \
	Parms.Reason=Reason; \
	Parms.bWasClean=bWasClean ? true : false; \
	OnWebSocketClosed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_Websocket_h_13_DELEGATE \
struct _Script_SOSPluginLink_eventOnWebSocketMessageReceived_Parms \
{ \
	FString Data; \
}; \
static inline void FOnWebSocketMessageReceived_DelegateWrapper(const FMulticastScriptDelegate& OnWebSocketMessageReceived, const FString& Data) \
{ \
	_Script_SOSPluginLink_eventOnWebSocketMessageReceived_Parms Parms; \
	Parms.Data=Data; \
	OnWebSocketMessageReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_Websocket_h_19_SPARSE_DATA
#define FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_Websocket_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnWebSocketMessageReceived_Internal); \
	DECLARE_FUNCTION(execOnWebSocketClosed_Internal); \
	DECLARE_FUNCTION(execOnWebSocketConnectionError_Internal); \
	DECLARE_FUNCTION(execOnWebSocketConnected_Internal); \
	DECLARE_FUNCTION(execSOSPluginDataConverter); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execConnect);


#define FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_Websocket_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnWebSocketMessageReceived_Internal); \
	DECLARE_FUNCTION(execOnWebSocketClosed_Internal); \
	DECLARE_FUNCTION(execOnWebSocketConnectionError_Internal); \
	DECLARE_FUNCTION(execOnWebSocketConnected_Internal); \
	DECLARE_FUNCTION(execSOSPluginDataConverter); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execConnect);


#define FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_Websocket_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebSocket(); \
	friend struct Z_Construct_UClass_UWebSocket_Statics; \
public: \
	DECLARE_CLASS(UWebSocket, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOSPluginLink"), SOSPLUGINLINK_API) \
	DECLARE_SERIALIZER(UWebSocket)


#define FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_Websocket_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUWebSocket(); \
	friend struct Z_Construct_UClass_UWebSocket_Statics; \
public: \
	DECLARE_CLASS(UWebSocket, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SOSPluginLink"), SOSPLUGINLINK_API) \
	DECLARE_SERIALIZER(UWebSocket)


#define FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_Websocket_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SOSPLUGINLINK_API UWebSocket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebSocket) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOSPLUGINLINK_API, UWebSocket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSocket); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SOSPLUGINLINK_API UWebSocket(UWebSocket&&); \
	SOSPLUGINLINK_API UWebSocket(const UWebSocket&); \
public:


#define FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_Websocket_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SOSPLUGINLINK_API UWebSocket(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SOSPLUGINLINK_API UWebSocket(UWebSocket&&); \
	SOSPLUGINLINK_API UWebSocket(const UWebSocket&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOSPLUGINLINK_API, UWebSocket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSocket); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebSocket)


#define FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_Websocket_h_16_PROLOG
#define FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_Websocket_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_Websocket_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_Websocket_h_19_RPC_WRAPPERS \
	FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_Websocket_h_19_INCLASS \
	FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_Websocket_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_Websocket_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_Websocket_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_Websocket_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_Websocket_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_Websocket_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOSPLUGINLINK_API UClass* StaticClass<class UWebSocket>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_SOSPluginLink_Source_SOSPluginLink_Public_Websocket_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
