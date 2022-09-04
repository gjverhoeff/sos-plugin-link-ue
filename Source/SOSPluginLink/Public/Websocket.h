#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JsonObjectConverter.h"
#include "Websocket.generated.h"

class IWebSocket;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWebSocketConnected);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWebSocketConnectionError, const FString&, Error);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnWebSocketClosed, int32, StatusCode, const FString&, Reason, bool, bWasClean);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWebSocketMessageReceived, const FString&, Data);


UCLASS(MinimalAPI, BlueprintType)
class UWebSocket final : public UObject
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintAssignable)
		FOnWebSocketConnected OnWebSocketConnected;

	UPROPERTY(BlueprintAssignable)
		FOnWebSocketConnectionError OnWebSocketConnectionError;

	UPROPERTY(BlueprintAssignable)
		FOnWebSocketClosed OnWebSocketClosed;

	UPROPERTY(BlueprintAssignable)
		FOnWebSocketMessageReceived OnWebSocketMessageReceived;

	void InitWebSocket(TSharedPtr<IWebSocket> InWebSocket);

	UFUNCTION(BlueprintCallable, Category = "SOS Plugin")
		void Connect();

	UFUNCTION(BlueprintCallable, Category = "SOS Plugin")
		void Close(int32 StatusCode = 1000, const FString& Reason = TEXT(""));

	UFUNCTION(BlueprintPure, Category = "SOS Plugin")
		bool IsConnected() const;


	UFUNCTION(BlueprintCallable, Category = "SOS Plugin")
		static void SOSPluginDataConverter(const FString data, FString& arena, int& gametime, bool& isReplay, bool& overtime, bool& hasWinner, int& ballSpeed, FString& blueTeamName, FString& orangeTeamName, int& goalsBlue, int& goalsOrange);



private:

	UFUNCTION()
		void OnWebSocketConnected_Internal();

	UFUNCTION()
		void OnWebSocketConnectionError_Internal(const FString& Error);

	UFUNCTION()
		void OnWebSocketClosed_Internal(int32 StatusCode, const FString& Reason, bool bWasClean);

	UFUNCTION()
		void OnWebSocketMessageReceived_Internal(const FString& Data);




	TSharedPtr<IWebSocket> InternalWebSocket;

};



