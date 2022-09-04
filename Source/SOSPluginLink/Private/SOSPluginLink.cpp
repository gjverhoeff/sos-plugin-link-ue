

#include "SOSPluginLink.h"
#include "Modules/ModuleManager.h"
#include "WebSocketsModule.h"

#define LOCTEXT_NAMESPACE "FSOSPluginLinkModule"

void FSOSPluginLinkModule::StartupModule()
{
	FModuleManager::LoadModuleChecked<FWebSocketsModule>("WebSockets");
	
}

void FSOSPluginLinkModule::ShutdownModule()
{

}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSOSPluginLinkModule, SOSPluginLink)
