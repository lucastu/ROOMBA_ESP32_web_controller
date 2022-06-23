#include "Arduino.h"
#include "roombaDefines.h"

#define Roomba Serial


void setup()
{
  Roomba.begin(19200);
}