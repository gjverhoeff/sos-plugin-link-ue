#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "JsonObjectConverter.h"
#include "SOSPluginFunctionLibrary.generated.h"

class UWebSocket;

UENUM(BlueprintType)
enum EScored
{
	GoalScored,
	NotScored

};

UENUM(BlueprintType)
enum EStatFeed
{
	StatEventFire,
	NoStatEventFire

};

UENUM(BlueprintType)
enum EBallHit
{
	BallHit,
	BallNotHit

};

UCLASS(MinimalAPI)
class USOSPluginFunctionLibrary final : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "SOS Plugin")
	static UWebSocket* SOSPluginWebsocketURL(FString ServerUrl);

	UFUNCTION(BlueprintCallable, Category = "SOS Plugin")
		static void SOSPluginGameDataConverter(const FString data, FString& arena, int& gametime, bool& isReplay, bool& overtime, bool& hasWinner, FVector& ballLocation, int& ballSpeed, FString& blueTeamName, FString& orangeTeamName, int& goalsBlue, int& goalsOrange);

	UFUNCTION(BlueprintCallable, Category = "SOS Plugin")
		static void SOSPluginPlayerDataConverter(const FString data, const int player, FString& playerName, int& goals, int& assist, int& demos, int& saves, int& score, int& shots, int& speed, int& touches, int& boost, int& team, FVector& playerLocation, FRotator& playerRotation);

	UFUNCTION(BlueprintCallable, Category = "SOS Plugin", Meta = (ExpandEnumAsExecs = "Scored"))
		static void SOSPluginGoalScored(const FString data, TEnumAsByte<EScored>& Scored, FString& scorer, int& teamNumber, FString& assister, float& goalSpeed, float& goalTime, FString& PlayerLastTouched, float& SpeedLastTouched);

	UFUNCTION(BlueprintCallable, Category = "SOS Plugin", Meta = (ExpandEnumAsExecs = "StatFeed"))
		static void SOSPluginStatFeedEvent(const FString data, TEnumAsByte<EStatFeed>& StatFeed, FString& Event, FString& Type, FString& MainTargetName, int& MainTargetTeamNumber, FString& SecondaryTargetName, int& SecondaryTargetTeamNumber);

	UFUNCTION(BlueprintCallable, Category = "SOS Plugin", Meta = (ExpandEnumAsExecs = "BallHit"))
		static void SOSPluginBallHit(const FString data, TEnumAsByte<EBallHit>& BallHit, FVector& ballHitLocation, FString& player);

	
	
};



