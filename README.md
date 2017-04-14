# Cyberia Trashies

This is a gamified trash can system.  You throw in trash and it plays some sort of sound and perhaps flashes a light.  The idea being that you would setup trash cans around a facility or park that are themed in some way.  Perhaps you have 5 different themed cans like one that is a bottomless pit and another that is an incinerator. The theme is up to you.  This aims to be software and hardware to implement the project.

### Hardware v1
 * Arduino Nano
 * Adafruit Audio FX board with amplifier
 * Speaker
 * High capacity battery pack
 
### Software
 * Arduino IDE 1.8.x
 * IRremote library from Ken Shirriff (Arduino board manager)
 * The code from this repo
 
 
### Notes
 * 1838 IR receivers reject continuous signals. You need to alternate mark/space.
