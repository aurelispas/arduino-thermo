/*
 Blinky fuction with infinite loop
 This example using a blinky function to cycle an LED on and off. 
 Written by: Joshua Beckmann 2012
 Creative Commons Attribution 3.0 Unported
 
 */

int led = 13;           // the built-in LED 
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




// the loop routine calls the onoff function (1st) with progressively faster and shorter blinks 
// (2nd) with progressively slower and longer blinks
// loop counts up and then down

void loop()
{
  int x = 1;
  int repeat = 0; 
  int time = 0; 
  
  for (int i = 0; i > -1; i = i+x){
      repeat = pow(2,i);
      time = 1024/repeat; 
      onoff (time, repeat);
      if (i == 10) x = -1;  // switch direction at 10 and 0
      if (i == 0)  x = 1;    
   } 
}


