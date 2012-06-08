//Blinks characters "IM" "IM" "IM" with onboard LED
//by: Joshua Beckmann
// Uses Morse Library by Erik Linder
// Released 2011 under GNU GPLv3
// Usage: morse( <pin number>, <speed WPM>, <1=beep, 0=PTT> )
//        sendmsg( "<text-to-send>" )
//Library Downloaded from: http://arduino.cc/playground/Code/Morse
//MUST BE COMPILED WITH ARDUINO 0022 or 0023. ARDUINO 1.0 WILL ERROR. 

#include <Morse.h>

Morse morse(13, 1, 1); //using built-in pin and 1 WPM 

void setup()
{
  // Nothing here for the Morse lib
}

void loop() {
  morse.sendmsg("IM"); 
delay(5000);               // wait 5 seconds and repeat

}

