// https://www.hackster.io/mjrobot/controlling-a-roomba-robot-with-arduino-and-android-device-56970d

#include "Arduino.h"
#include "roombaDefines.h"

#define Roomba Serial


void setup()
{
  Roomba.begin(115200);
  wakeUp();   // Wake-up Roomba
  startSafe(); // Start Roomba in Safe Mode
  playSound(2); 
  delay(2000);
  playSound(2); //if make sound, I'm happy
}


void loop() {
 
}
