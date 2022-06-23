#include "Arduino.h"
#include "roombaDefines.h"

#define Roomba Serial


void setup()
{
  Roomba.begin(19200);
  wakeUp();   // Wake-up Roomba
  startSafe(); // Start Roomba in Safe Mode
  playSound(2); //if make sound, I'm happy
}


void loop() {

}
