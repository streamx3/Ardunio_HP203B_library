/* 
 HP203B Pressure & Temperature Sensor Library
 By: Andrew Shelestov
 Date: April 19th, 2017
 License: This code is public domain but you buy me a beer if you use this and we meet someday (Beerware license).
 
 Get pressure and temperature from the HP203 sensor.
 */
 
#pragma once

#if defined(ARDUINO) && ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

#include <Wire.h>

#define HP203_DEFAULT_ADDR 0x76  // Unshifted 7-bit I2C address for the sensor
                        // 0x77 is an alternative, if CSB is LOW

class HP203B {

public:
  HP203B();
  HP203B(int addr);

  //Public Functions
  void begin();
  int getAll(float* p_tempC, float* p_tempF, float* p_pressure);
  int m_addr;
};
