# The UBomberman Challenge

I've challanged myself to create a quick and dirty “programmer-art” version of the old Dyna Blaster/Bomberman.

## Prerequisites
• Finish within one week;
• Don't spend more then 15 hours

```
o Starting date: 02/07;
o Ending date: 02/14;
o TTC: ~14h;
```

### Features

•  Static top-down view on the level + camera that pans in/out depending on distance between players in the level
•  Procedural generated maps
•  “Couch Co-Op”: Two players play on one machine using different keys to control two characters (keyboard)
•  Implementation of different pickups

```
o  Longer bomb blasts
o  More bombs
o  Faster run speed
o  Remote-controlled bombs (timed power-up, around 10 seconds)
```

•  Bomb placing by the player

```
o  Player is starting with only one bomb that can be active at a time
o  Placing a bomb subtracts one from the count, when the bomb explodes the count goes up again
o  Amount is upgradable with pickups
o  Once the remote detonator has been picked up only one bomb can be active until the power-up runs out
```

•  Player death when standing in bomb blast
•  Bomb blasts o  Should not be spherical but linear in the four main directions 

```
o  Can penetrate players/pickups when going off (killing/destroying them)
o  Are stopped by walls
o  Trigger other bombs
```

•  Differentiation between destructible and indestructible walls, destructible walls can spawn random pickups (~30% chance to spawn something) upon destruction
•  Win conditions:

```
o  Show win screen when only one player is alive
o  Show a map timer, that counts down and ends the round
o  Show draw when the last players die in the same bomb blast (or chained bombs) or multiple players are alive when the timer runs out
o  After round end, freeze game in its current state
```

•  Reset option on end screen

```
o  Starts another round
o  Previous score should be saved
```

### Future improvements
• AI enemies that behave like a player;
• AI enemies that wander around randomly;
• Better menus and UIs;
• Music and FX;
• Better input implementation in C++ (found a solution but were not able to implement in time: [Documentation](https://wiki.unrealengine.com/Local_Multiplayer_Tips))