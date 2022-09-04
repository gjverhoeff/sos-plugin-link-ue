#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "WebsocketFunctionLibrary.generated.h"

class UWebSocket;



UCLASS(MinimalAPI)
class UWebSocketFunctionLibrary final : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "SOS Plugin")
	static UWebSocket* SOSPluginWebsocketURL(FString ServerUrl);

	
	
};



