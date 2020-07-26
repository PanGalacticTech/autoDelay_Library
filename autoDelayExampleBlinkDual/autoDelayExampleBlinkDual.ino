/*--------------------------------------autoDelay Library Example--------------------------------

    The autoDelay library lets the user feed a single value in milliseconds to a function, which
    returns the variable timeDelayFin as true when that time has elapsed.

   Used to help avoid using the delay() function

    Written by Declan Heard. 03/08/2019

    Free to Distibute and Use.


    This Sketch shows you how to use 2 seperate instances of autoDelay to control the timing
    of two seperate functions independently.

    More can be added as nessissary, just give them each a unique name 

*/



//-----------------------------Timer Function, Must include----------------------------

#include <autoDelay.h>

autoDelay autodelay;    // set up autodelay instance. NO PARENTHESIS if no value to pass.

autoDelay autodelay2;    // set up 2nd autodelay instance if required



int timerOne = 500;    // Timer value - set to the length of delay you require. 
// Can be replaced with your own variable

int timerTwo = 750;    // Timer value - set to the length of delay you require.
// Can be replaced with your own variable

//-----------------------^^^---Timer Function, Must include----------------------------




//---------Other Variables--- Only used for Example Sketch-----------------------------

int RledPin = 4;                                 // Set the Output Pin - Red LED
int GledPin = 5;                                 // Set the Output Pin - Green LED

int RledState = LOW;                            // state of the LED pin - Red LED
int GledState = LOW;                            // state of the LED pin - Green LED




//---------------------------SETUP---------------------------------------

void setup() {

  pinMode(RledPin, OUTPUT);                       // sets up LED pins as output pin
  pinMode(GledPin, OUTPUT);                       // sets up LED pins as output pin

  autodelay.begin(9600);                          // function to set up serial communication. uncomment if unneeded

}
//------------------------^^^^ END OF SETUP------------------------------






//-----------------------------MAIN LOOP------------------------------------

void loop() {



  //------------timer function-----------------------------------------------------
  autodelay.delayScript(timerOne);   // call delayScript by feeding it an integer or another variable. Timing in Miliseconds

  autodelay2.delayScript(timerTwo);   // call delayScript2 by feeding it an integer or another variable. Timing in Miliseconds

  // autodelay.delayScript(1000);   // alternative version, fed directly by integer.



  //-------------------IF Time ONE has elapsed -----------------------------------
  if (autodelay.timeDelayFin == true) { // if this is true, at once  // do the thing //
    //timeDelayFin value will reset to false automatically.


    //-----The Thing to be Done------VVVV

   REDstateChange();

    //-----^^^^^^^ End of The Thing thats done------

  }  // end of IF statement


 //-------------------IF Time TWO has elapsed -----------------------------------
  if (autodelay2.timeDelayFin == true) { // if this is true, at once  // do the thing //
    //timeDelayFin value will reset to false automatically.


    //-----The Thing to be Done------VVVV

   GREENstateChange();

    //-----^^^^^^^ End of The Thing thats done------

  }  // end of IF statement









//----------------These lines are executed during every loop------------------------------
  digitalWrite(RledPin, RledState);  // Write the LED state to the led pin.
  digitalWrite(GledPin, GledState);  // Write the LED state to the led pin.

}  // end of void loop

//-----------------------------------------------^^^ END OF MAIN LOOP-----------------------------------






void REDstateChange(){   // function to change the state of the LEDs when called

 if (RledState == HIGH) {

      RledState = LOW;

    } else if (RledState == LOW) {

      RledState = HIGH;
    }
  
}

void GREENstateChange(){   // function to change the state of the LEDs when called

 if (GledState == HIGH) {

      GledState = LOW;

    } else if (GledState == LOW) {

      GledState = HIGH;
    }
  
}
