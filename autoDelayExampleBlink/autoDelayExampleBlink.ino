/*--------------------------------------autoDelay Library Example--------------------------------
 * 
 *  The autoDelay library lets the user feed a single value in milliseconds to a function, which 
 *  returns the variable delayComplete as true when that time has elapsed.
 * 
 * Used to help avoid using the delay() function
 *  
 *  Written by Declan Heard. 03/08/2019 
 *  
 *  Free to Distibute and Use.
 * 
 */



//-----------------------------Timer Function, Must include----------------------------

#include "autoDelay.h"

autoDelay autodelay;    // set up autodelay instance. NO PARENTHESIS if no value to pass.  

int timerOne = 500;    // Timer value - set to the length of delay required.
                       

//-----------------------^^^---Timer Function, Must include----------------------------




//---------Other Variables--- Only used for Example Sketch-----------------------------

int ledPin = 13;                                 // Set the Output Pin

int ledState = LOW;                            // state of the LED pin





//---------------------------SETUP---------------------------------------

void setup() {

  pinMode(ledPin, OUTPUT);                       // sets up LED pin as output pin


  autodelay.begin(9600);                          // function to set up serial communication. Uncomment if no required

}
//------------------------^^^^ END OF SETUP------------------------------






//-----------------------------MAIN LOOP------------------------------------

void loop() {


// This was the old method for calling the delay script
/*

 //------------timer function-----------------------------------------------------
 autodelay.delayScript(timerOne);   // call delayScript by feeding it an integer or another variable. Timing in Miliseconds





 //-------------------IF Time has elapsed -----------------------------------
//  if (autodelay.delayComplete == true) { // if this is true, at once  // do the thing //  

*/
// Old Method ^^^ Depreciated



if (autodelay.delayScript(timerOne)){  // if this is true, at once  // do the thing //   

    
 //-----The Thing to be Done------VVVV  
    
    if (ledState == HIGH) {       

      ledState = LOW;
      
    } else if (ledState == LOW) {

      ledState = HIGH;
    }
    
 //-----^^^^^^^ End of The Thing thats done------
 
  }  // end of IF statement


  

  digitalWrite(ledPin, ledState);  // Write the LED state to the led pin. 


}  // end of void loop

//-----------------------------------------------^^^ END OF MAIN LOOP-----------------------------------
