#include "SOSPluginWebsocket.h"
#include "IWebSocket.h"
#include "JsonObjectConverter.h"
#include "Kismet/KismetStringLibrary.h"
#include "Misc/CString.h"
#include "Containers/Array.h"
#include "Math/Vector.h"
#include "Math/Rotator.h"
#include "Misc/WildcardString.h"
#include "Dom/JsonObject.h"



void UWebSocket::InitWebSocket(TSharedPtr<IWebSocket> InWebSocket)
{
	InternalWebSocket = InWebSocket;

	InternalWebSocket->OnConnected().AddUObject(this, &ThisClass::OnWebSocketConnected_Internal);
	InternalWebSocket->OnConnectionError().AddUObject(this, &ThisClass::OnWebSocketConnectionError_Internal);
	InternalWebSocket->OnClosed().AddUObject(this, &ThisClass::OnWebSocketClosed_Internal);
	InternalWebSocket->OnMessage().AddUObject(this, &ThisClass::OnWebSocketMessageReceived_Internal);
	
}

void UWebSocket::Connect()
{
	InternalWebSocket->Connect();
}

void UWebSocket::Close(int32 StatusCode, const FString& Reason)
{
	InternalWebSocket->Close(StatusCode, Reason);
}

bool UWebSocket::IsConnected() const
{
	return InternalWebSocket->IsConnected();
}




void UWebSocket::OnWebSocketConnected_Internal()
{
	OnWebSocketConnected.Broadcast();
}

void UWebSocket::OnWebSocketConnectionError_Internal(const FString& Error)
{
	OnWebSocketConnectionError.Broadcast(Error);
}

void UWebSocket::OnWebSocketClosed_Internal(int32 StatusCode, const FString& Reason, bool bWasClean)
{
	OnWebSocketClosed.Broadcast(StatusCode, Reason, bWasClean);
}

void UWebSocket::OnWebSocketMessageReceived_Internal(const FString& Data)
{
	OnWebSocketMessageReceived.Broadcast(Data);
	
}


