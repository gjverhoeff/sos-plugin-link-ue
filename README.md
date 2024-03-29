# SOS Plugin Link (Unreal Engine 5 Plugin)
Plugin for Unreal Engine 5 to easily work with data received from the Rocket League SOS-Plugin to be used in Virtual Productions. 

Simple Unreal Engine plugin to easily implement some of the data provided by the Rocket League BakkesMod SOS-Plugin. 

## Installation
Download the latest version from the releases page and make sure that you put the plugin in the plugins folder of your Unreal Engine Project. 

Make sure SOS-Plugin is running with BakkesMod. More information about SOS-Plugin can be found here: https://gitlab.com/bakkesplugins/sos/sos-plugin

## Usage
Set up your blueprint as the following screenshot to get the data from the SOS-Plugin. The resulting data can be used in all the other nodes (2nd screenshot).

![alt text](https://blog.geertverhoeff.com/wp-content/uploads/2022/10/Screenshot-how-to-connect.jpg)

![alt text](https://blog.geertverhoeff.com/wp-content/uploads/2022/10/Screenshots-of-Nodes.jpg)

To have the plugin work in a packaged project make sure to add the following to your DefaultEngine.ini (normally found Project/Config/DefaultEngine.ini )

```
[Plugins]
EnabledPlugins=SOSPluginLink
```

Discord support: https://discord.com/invite/A86Hv9vDSq



WebSocket functionality inspired by the following repository: https://github.com/minimpoun/BlueprintWebsockets



Example of using the plugin is RL Buddy. An Android App for LAN esports events to show the stats during the game. You can download it for free here: https://play.google.com/store/apps/details?id=com.sumatrasstudios.RocketLeagueBuddy




[![](https://img.shields.io/badge/Donate-PayPal-green.svg)](https://www.paypal.com/donate/?hosted_button_id=LT6BSRW7G8TFG)
