/*--------------------------------------autoDelay.h Library -------------------------------

   Simple method for timing events without using interrupt based delay functions

    autoDelay != delay();

    functions include delays passed values in:
    Micro & Milliseconds,
    Seconds, and Minutes.
    
    Makes timing events a piece of cake.

    Written by Declan Heard. 09/08/2020
    
    Released into Public Domain
    Free to Distribute and Use.

*/



#include "autoDelay.h"

autoDelay::autoDelay() {   // Anything needed to setup instance goes here

  // Serial.println("autoDelay Setup Instance");

}


void autoDelay::begin(long baudrate) {

  //	Serial.begin(baudrate);
  //	Serial.println("autoDelay Library deployed");


}


bool autoDelay::globalDelay(uint32_t currentTime, uint32_t delayTime) {     // Generic function uses generic time variable, other functions just modify what value is passed for timing functions

  if (currentTime - previousTime	>= delayTime) {

   delayComplete = true;

    previousTime = currentTime;

  } else {

   delayComplete = false;

  }

  return delayComplete;

}




bool autoDelay::millisDelay(uint32_t delayTime) {    // Delay function that can be passed Milliseconds

  currentTime = millis();


  bool delayComplete = autoDelay::globalDelay(currentTime, delayTime);

  return delayComplete;

}



bool autoDelay::microsDelay(uint32_t delayTime) {    // Delay function that can be passed Microseconds

  currentTime = micros();	                           // N.B. micros has resolution of 4

  bool delayComplete = autoDelay::globalDelay(currentTime, delayTime);

  return delayComplete;

}



bool autoDelay::secondsDelay(uint32_t delayTime) {    // Delay function that can be passed Seconds

  delayTime = delayTime * 1000;                     // multiply the passed seconds value by 1000 such that compared values are both in Millisseconds

  currentTime = millis();	                           //

  bool delayComplete = autoDelay::globalDelay(currentTime, delayTime);

  return delayComplete;

}


bool autoDelay::minutesDelay(uint32_t delayTime) {    // Delay function that can be passed Seconds

  delayTime = delayTime * 60000;                     // multiply the passed minutes value by 60000 such that compared values are both in Millisseconds

  currentTime = millis();	                           //

  bool delayComplete = autoDelay::globalDelay(currentTime, delayTime);

  return delayComplete;

}






// Depreciated // Old version

// This has been left in place to keep functionality with older versions of library
// Function has been changed to reflect new implementation. Original implementation is below for reference.



  bool autoDelay::delayScript(uint32_t delayTime) {             // Passed DelayTime value
  // returns True if this time has passed since the last time it ran
  // remains true for a single loop

  currentTime = millis();                  // sets a variable for the current milliseconds passed

 bool delayComplete = autoDelay::globalDelay(currentTime, delayTime);

  return delayComplete;

  }  // end of delayTime routine







// Original Implementation
/*

  bool autoDelay::delayScript(uint32_t delayTime) {             // Passed DelayTime value
  // returns True if this time has passed since the last time it ran
  // remains true for a single loop

  currentMillis = millis();                  // sets a variable for the current milliseconds passed


  if (currentMillis - previousMillis > delayTime) {  // if the delay time has been passed

    delayComplete = true;

    previousMillis = currentMillis;

  } else {

    delayComplete = false;

  }

  return delayComplete;

  }  // end of delayTime routine


*/
