#include "SOSPluginFunctionLibrary.h"

#include "IWebSocket.h"
#include "SOSPluginWebsocket.h"
#include "WebSocketsModule.h"
#include "Kismet/KismetStringLibrary.h"
#include "JsonObjectConverter.h"
#include "Misc/CString.h"
#include "Containers/Array.h"
#include "Math/Vector.h"
#include "Math/Rotator.h"
#include "Misc/WildcardString.h"
#include "Dom/JsonObject.h"
#include "Containers/UnrealString.h"

UWebSocket* USOSPluginFunctionLibrary::SOSPluginWebsocketURL(FString ServerUrl)
{
	const TSharedPtr<IWebSocket> ActualSocket = FModuleManager::LoadModuleChecked<FWebSocketsModule>(TEXT("WebSockets")).CreateWebSocket(ServerUrl);
	UWebSocket* const WrapperSocket = NewObject<UWebSocket>();
	WrapperSocket->InitWebSocket(ActualSocket);
	return WrapperSocket;
}


void USOSPluginFunctionLibrary::SOSPluginGameDataConverter(const FString data, FString& arena, int& gametime, bool& isReplay, bool& overtime, bool& hasWinner, FVector& ballLocation, int& ballSpeed, FString& blueTeamName, FString& orangeTeamName, int& goalsBlue, int& goalsOrange)
{
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(data);
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
	{
		const TSharedPtr<FJsonObject>* DataJsonObject;
		if (JsonObject->TryGetObjectField("data", DataJsonObject)) {

			TSharedPtr<FJsonObject> objData = JsonObject->GetObjectField("data");

			if (objData->TryGetField("event")) {
				auto eventString = objData->GetStringField("event");

				if (eventString == "gamestate") {

					//Game Info
					TSharedPtr<FJsonObject> objGame = objData->GetObjectField("game");
					arena = objGame->GetStringField("arena");
					isReplay = objGame->GetBoolField("isReplay");
					overtime = objGame->GetBoolField("isOT");
					gametime = objGame->GetNumberField("time_seconds");
					hasWinner = objGame->GetBoolField("hasWinner");


					//Teams Info
					TArray<TSharedPtr<FJsonValue>> mainTeamArray = objGame->GetArrayField("teams");

					if (mainTeamArray.Num() == 2) {
						auto BlueInternal = mainTeamArray[0]->AsObject();
						goalsBlue = BlueInternal->GetIntegerField("score");
						blueTeamName = BlueInternal->GetStringField("name");
						auto OrangeInternal = mainTeamArray[1]->AsObject();
						goalsOrange = OrangeInternal->GetIntegerField("score");
						orangeTeamName = OrangeInternal->GetStringField("name");
					}

					//Ball Info
					TSharedPtr<FJsonObject> objBall = objGame->GetObjectField("ball");
					ballSpeed = objBall->GetNumberField("speed");
					TSharedPtr<FJsonObject> objBallLocation = objBall->GetObjectField("location");
					ballLocation = FVector(objBallLocation->GetNumberField("X"), objBallLocation->GetNumberField("Y"), objBallLocation->GetNumberField("Z"));
				}
			}
		}
	}
};

void USOSPluginFunctionLibrary::SOSPluginPlayerDataConverter(const FString data, const int player, FString& playerName, int& goals, int& assist, int& demos, int& saves, int& score, int& shots, int& speed, int& touches, int& boost, int& team, FVector& playerLocation, FRotator& playerRotation)
{
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(data);
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
	{
		const TSharedPtr<FJsonObject>* DataJsonObject;
		if (JsonObject->TryGetObjectField("data", DataJsonObject)) {

			TSharedPtr<FJsonObject> objData = JsonObject->GetObjectField("data");

			if (objData->TryGetField("event")) {
				auto eventString = objData->GetStringField("event");

				if (eventString == "gamestate") {


					TSharedPtr<FJsonObject> objPlayers = objData->GetObjectField("players");

					TArray<FString> Result;
					objPlayers->Values.GetKeys(Result);

					if (Result.Num() > (player)) {

						//Player Info
						auto playerObjectInternal = objPlayers->GetObjectField(Result[player]);
						playerName = playerObjectInternal->GetStringField("name");
						goals = playerObjectInternal->GetNumberField("goals");
						assist = playerObjectInternal->GetNumberField("assists");
						demos = playerObjectInternal->GetNumberField("demos");
						saves = playerObjectInternal->GetNumberField("saves");
						score = playerObjectInternal->GetNumberField("score");
						shots = playerObjectInternal->GetNumberField("shots");
						speed = playerObjectInternal->GetNumberField("speed");
						touches = playerObjectInternal->GetNumberField("touches");
						team = playerObjectInternal->GetNumberField("team");
						boost = playerObjectInternal->GetNumberField("boost");
						TSharedPtr<FJsonObject> playerLocationRotation = playerObjectInternal->GetObjectField("location");
						playerLocation = FVector(playerLocationRotation->GetNumberField("X"), playerLocationRotation->GetNumberField("Y"), playerLocationRotation->GetNumberField("Z"));
						playerRotation = FRotator(playerLocationRotation->GetNumberField("pitch"), playerLocationRotation->GetNumberField("yaw"), playerLocationRotation->GetNumberField("roll"));

						objData.Reset();
						objPlayers.Reset();
						playerLocationRotation.Reset();
						playerObjectInternal.Reset();
						JsonObject.Reset();

					}

				}
			}
		}
	}





};

void USOSPluginFunctionLibrary::SOSPluginGoalScored(const FString data, TEnumAsByte<EScored>& Scored, FString& scorer, int& teamNumber, FString& assister, float& goalSpeed, float& goalTime)
{
	bool dataEmpty = data.IsEmpty();
	bool dataNotVersionMessage = data.Contains("sos:version");
	
	if(dataEmpty == false && dataNotVersionMessage == false){

	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(data);
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
	{
		const TSharedPtr<FJsonObject>* DataJsonObject;

		if (JsonObject->TryGetObjectField("data", DataJsonObject)) {

			TSharedPtr<FJsonObject> objData = JsonObject->GetObjectField("data");

				if (JsonObject->TryGetField("event")) {
					auto eventString = JsonObject->GetStringField("event");				

					if (eventString == "game:goal_scored") {
						auto objScorer = objData->GetObjectField("scorer");
						auto objAssist = objData->GetObjectField("assister");

						scorer = objScorer->GetStringField("name");
						teamNumber = objScorer->GetNumberField("teamnum");
						assister = objAssist->GetStringField("name");
						goalSpeed = objData->GetNumberField("goalspeed");
						goalTime = objData->GetNumberField("goaltime");


						Scored = EScored::GoalScored;
					}
					else { Scored = EScored::NotScored; }
				}
			
		}
		}
	}
	else { Scored = EScored::NotScored; }

};






