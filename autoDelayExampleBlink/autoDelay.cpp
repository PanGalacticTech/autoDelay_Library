/*
 * autoDelay.h - A library for creating delays in software without using the delay function
 * 
 * Created by Declan Heard. 03/08/2019
 * Released into Public Domain.
 * 
 */



#include "autoDelay.h"

autoDelay::autoDelay(){    // Anything needed to setup instance goes here



  // Serial.println("autoDelay Setup Instance");
	
}


void autoDelay::begin(int baudrate) {
	
	Serial.begin(baudrate);
	Serial.println("autoDelay Library deployed");
	
	
}








bool autoDelay::delayScript(int delayTime) {             // Passed DelayTime value
  // returns True if this time has passed since the last time it ran
  // remains true for a single loop



  currentMillis = millis();                  // sets a variable for the current milliseconds passed





  if (currentMillis - previousMillis > delayTime) {  // if the delay time has been passed

    delayComplete= true;

    previousMillis = currentMillis;

  } else {

    delayComplete = false;

  }
  
 return delayComplete;

}  // end of delayTime routine
