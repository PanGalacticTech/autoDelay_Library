# autoDelay_Library
 autoDelay Library for simple delay functions



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

To Use:



Set up instance for each different timer required by giving it a unique name:

autoDelay timerOne

autoDelay timerTwo



In main loop call if statement with

if (timerOne.millisDelay(long milliseconds)){

// Call timed events here

}





Methods exist for:

Milliseconds =  .millisDelay(long milliseconds)
Microseconds =  .microsDelay(long microseconds)
Seconds      =  .secondsDelay(long seconds)
Minutes      =  .minutesDelay(long minutes)







