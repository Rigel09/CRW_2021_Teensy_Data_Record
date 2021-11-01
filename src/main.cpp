/*
Retrieves sensor data and writes to a csv file on the sd card
Sensors:
  Magnetometer x1
  Accelerometer x3
  Gyroscope x3
*/

#include "Arduino.h"

void setup()
{
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    digitalWriteFast(LED_BUILTIN, !digitalReadFast(LED_BUILTIN));
    delay(500);
}
