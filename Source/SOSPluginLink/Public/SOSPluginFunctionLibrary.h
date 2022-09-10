#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "SOSPluginFunctionLibrary.generated.h"

class UWebSocket;



UCLASS(MinimalAPI)
class USOSPluginFunctionLibrary final : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "SOS Plugin")
	static UWebSocket* SOSPluginWebsocketURL(FString ServerUrl);

	
	
};



