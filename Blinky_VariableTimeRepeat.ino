/*
 Blinky fuction with infinite loop
 This example using a blinky function to cycle an LED on and off. 
 Written by: Joshua Beckmann 2012
 Creative Commons Attribution 3.0 Unported
 
 */

int led = 9;           // the pin that the LED is attached to
int time = 0; 
int repeat = 0; 

// the setup routine runs once when you press reset:
void setup()  { 
  // declare pin 13 to be an output:
  pinMode(led, OUTPUT);
} 


//Blinky function takes parameters "time" for both on and off and "repeat" 
void onoff (int time, int repeat) {
int count;
int var = 0; 
count = 0;
while(var < repeat){

digitalWrite(led, HIGH);   // turn the LED on
delay(time);               // wait for a second

digitalWrite(led, LOW);    // turn the LED off
delay(time);               // wait for a second
var++;
}
}




// the loop routine calls the onoff function 11 times and repeats over and over again forever
// John seemed to randomly choose the repeat and time values
void loop()  { 
  onoff (1024, 1); 
  onoff (512, 2); 
  onoff (256, 4); 
  onoff (4, 256); 
  onoff (2, 512);
  onoff (1, 1024);
  onoff (2, 512); 
  onoff (4, 256);
  onoff (256, 4); 
  onoff (512, 2);
  onoff (256, 4);              
}



