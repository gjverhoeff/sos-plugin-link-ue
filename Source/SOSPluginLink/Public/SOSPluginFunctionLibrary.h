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

	UFUNCTION(BlueprintCallable, Category = "SOS Plugin", Meta = (ToolTip = "Fill in the IP address and port how to reach SOS-Plugin. Normally ws://localhost:49122 for local usage."))
	static UWebSocket* SOSPluginWebsocketURL(FString ServerUrl);

	UFUNCTION(BlueprintCallable, Category = "SOS Plugin", Meta = (ToolTip = "Gives data of the game from the SOS-Plugin"))
		static void SOSPluginGameDataConverter(const FString data, FString& arena, int& gametime, bool& isReplay, bool& overtime, bool& hasWinner, FVector& ballLocation, int& ballSpeed, FString& blueTeamName, FString& orangeTeamName, int& goalsBlue, int& goalsOrange, bool& hasTarget, FString& targetID);

	UFUNCTION(BlueprintCallable, Category = "SOS Plugin", Meta =( ToolTip = "Gives data of a player from the SOS-Plugin array that starts at 0 until the amount of players in the game"))
		static void SOSPluginPlayerDataConverter(const FString data, const int player, FString& playerName, int& goals, int& assist, int& demos, int& saves, int& score, int& shots, int& speed, int& touches, int& boost, int& team, FVector& playerLocation, FRotator& playerRotation);

	UFUNCTION(BlueprintCallable, Category = "SOS Plugin", Meta = (ExpandEnumAsExecs = "Scored", ToolTip = "Gives the data when it detetcs game:goal_scored from SOS-Plugin data and fires the Goal Scored exec"))
		static void SOSPluginGoalScored(const FString data, TEnumAsByte<EScored>& Scored, FString& scorer, int& teamNumber, FString& assister, float& goalSpeed, float& goalTime, FString& PlayerLastTouched, float& SpeedLastTouched);

	UFUNCTION(BlueprintCallable, Category = "SOS Plugin", Meta = (ExpandEnumAsExecs = "StatFeed", ToolTip = "Gives the data when it detects game:statfeed_event from SOS-Plugin data and fires the Stat Event Fire exec"))
		static void SOSPluginStatFeedEvent(const FString data, TEnumAsByte<EStatFeed>& StatFeed, FString& Event, FString& Type, FString& MainTargetName, int& MainTargetTeamNumber, FString& SecondaryTargetName, int& SecondaryTargetTeamNumber);

	UFUNCTION(BlueprintCallable, Category = "SOS Plugin", Meta = (ExpandEnumAsExecs = "BallHit", ToolTip = "Gives the data when it detects game:ball_hit from SOS-Plugin data and fires the Ball Hit exec"))
		static void SOSPluginBallHit(const FString data, TEnumAsByte<EBallHit>& BallHit, FVector& ballHitLocation, FString& player);

	
	
};



