/*--------------------------------------autoDelay.h Library -------------------------------

   Simple method for timing events without using interrupt based delay functions

    autoDelay != delay();

    functions include delays passed values in:
    Micro & Milliseconds,
    Seconds, and Minuites.

    Makes timing events a piece of cake.

    Written by Declan Heard. 09/08/2020

    Released into Public Domain
    Free to Distibute and Use.

*/


#ifndef autoDelay_h
#define autoDelay_h

#if (ARDUINO >=100)
#include <Arduino.h>
#else
#include <wProgram.h>
#endif


class autoDelay
{
  public:

    // Constructor
    autoDelay();

    // Methods

    void begin(long baudRate = 115200);              // depreciated to use with ATtiny

    bool millisDelay(uint32_t delayTime);           // delay function using Milliseconds

    bool microsDelay(uint32_t delayTime);           // delay function using Microseconds

    bool secondsDelay(uint32_t delayTime);           // delay function using Seconds

    bool minutesDelay(uint32_t delayTime);           // delay function using Minutes

    bool delayScript(uint32_t delayTime);            // Old delay function left in to maintain backwards compatability

    // Variables
    boolean delayComplete;


  private:

    //Methods

    bool globalDelay(uint32_t currentTime, uint32_t delayTime);          // Global delay function ucalled by all other functions (as architecture is largely the same)


    //	long currentMillis;    // depreciated
    //	long previousMillis;

    long currentTime;
    long previousTime;


};

#endif
