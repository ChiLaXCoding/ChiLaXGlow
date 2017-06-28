# ChiLaXESP

An open source hacking project for Counter-Strike: Global Offensive, based on public ESP methods.
ChiLaXESP utilizes the windows standard API for accessing and altering process memory, hence it belongs to the category of external hacks. 

# Glow ESP

Glow is a built-in feature in source engine that can be enabled through developer console.
To activate it in-game, you have to enable developer console and insert the following commands:

1. sv_cheats 1
2. glow_outline_effect_enable 1

This will only work offline against bots, because the source engine doesn't allow the sv_cheats command in multiplayer lobbies. 
Thus, we will try to bypass this check and access the glow feature through memory altering. 

# Crosshair ESP

When aiming the gun at another player, source engine automatically displays the player name. 
This ESP feature will read the entity ID value in memory and play a beep sound, whenever the crosshair lies on top of an enemy target. **Caution:** Very triggering sound effect!

# Trigger Bot

Using the public crosshair ESP method mentioned above, the application can automatically trigger the weapon when crosshair intersects with an enemy player model. 

# Disclaimer

This hacking software was made only for educational purposes and the creator strictly prohibits the usage in online lobbies of the actual game.
Hacking in online multiplayer games is very unfair and irresponsible towards the community, and disrespectful against players that honest their skill in thousands of hours of hard labour.
If you want to try this tool make sure to create your own server and test the feature against bots. Additionally you can use the *-insecure* launch option to make sure that the server will not be VAC protected.

# Sources and Credits

* https://github.com/ValveSoftware/source-sdk-2013
* https://github.com/iseekwonderful/csgoGlow 

# Licenses

[GNU GPL v3.0](https://www.gnu.org/licenses/gpl-3.0)