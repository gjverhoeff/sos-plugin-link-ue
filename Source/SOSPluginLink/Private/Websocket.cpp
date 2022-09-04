#include "Websocket.h"
#include "IWebSocket.h"
#include "JsonObjectConverter.h"
#include "Kismet/KismetStringLibrary.h"
#include "Misc/CString.h"
#include "Containers/Array.h"



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

void UWebSocket::SOSPluginDataConverter(const FString data, FString& arena, int& gametime, bool& isReplay, bool& overtime, bool& hasWinner, int& ballSpeed, FString& blueTeamName, FString& orangeTeamName, int& goalsBlue, int& goalsOrange)
{
	
	FString Message;

	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(data);
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
	{
		TSharedPtr<FJsonObject> objData = JsonObject->GetObjectField("data");
		

		auto eventString = objData->GetStringField("event");

		if (eventString == "gamestate") {

			TSharedPtr<FJsonObject> objGame = objData->GetObjectField("game");
			TSharedPtr<FJsonObject> objBall = objGame->GetObjectField("ball");
			ballSpeed = objBall->GetNumberField("speed");
			arena = objGame->GetStringField("arena");
			isReplay = objGame->GetBoolField("isReplay");
			overtime = objGame->GetBoolField("isOT");
			gametime = objGame->GetNumberField("time_seconds"); 
			hasWinner = objGame->GetBoolField("hasWinner");

			TArray<TSharedPtr<FJsonValue>> mainArray = objGame->GetArrayField("teams");

			if (mainArray.Num() == 2) {
				auto BlueInternal = mainArray[0]->AsObject();
				goalsBlue = BlueInternal->GetIntegerField("score");
				blueTeamName = BlueInternal->GetStringField("name");
				auto OrangeInternal = mainArray[1]->AsObject();
				goalsOrange = OrangeInternal->GetIntegerField("score");
				orangeTeamName = OrangeInternal->GetStringField("name");
			}
			

		}

	}


};




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


