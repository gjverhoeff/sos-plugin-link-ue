#include "SOSPluginFunctionLibrary.h"

#include "IWebSocket.h"
#include "SOSPluginWebsocket.h"
#include "WebSocketsModule.h"
#include "Kismet/KismetStringLibrary.h"

UWebSocket* USOSPluginFunctionLibrary::SOSPluginWebsocketURL(FString ServerUrl)
{
	const TSharedPtr<IWebSocket> ActualSocket = FModuleManager::LoadModuleChecked<FWebSocketsModule>(TEXT("WebSockets")).CreateWebSocket(ServerUrl);
	UWebSocket* const WrapperSocket = NewObject<UWebSocket>();
	WrapperSocket->InitWebSocket(ActualSocket);
	return WrapperSocket;
}






