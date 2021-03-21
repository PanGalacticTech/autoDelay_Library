# autoDelay_library *(v2.0.0)*
#### Built and maintained by [Declan Heard](mailto:pangalactictech@gmail.com "Email me!") on behalf of [Pan Galactic Tech](https://PanGalacticTech.com)

/*--------------------------------------autoDelay.h Library -------------------------------

   Simple method for timing events without using interrupt based delay functions.

    autoDelay != delay();

    functions include delays passed values in:
    Micro & Milliseconds,
    Seconds, and Minutes.
    
    Makes timing events a piece of cake.    
    
*/

# New To Version 2.0.0

* Added delayEvent to handle timed events with a set number of times to repeat.
______________________________________________



## Features
* Easy library for timing events using an object orientated methods.
* set up instance of autoDelay for each unique timer required.
* Manage program execution without managing hardware timer reads
* Methods included for Microseconds, Milliseconds, Seconds and Minutes of delay times.
* Bin the delay(); function that robs you of time better used for other purposes.
* Enable more complex programs by seperating time dependent events from each others execution.

### Methods Include

#### Delays

/*
For infinately repeating behaviours:

   Milliseconds =  .millisDelay(long milliseconds)  
   Microseconds =  .microsDelay(long microseconds)  
   Seconds      =  .secondsDelay(long seconds)  
   Minutes      =  .minutesDelay(long minutes)  
*/   

#### Delay Events

For finitely repeating behaviours (Can also be used for infinately repeating behaviours)

/*
   Milliseconds =  .millisDelayEvent(long milliseconds)  
   Microseconds =  .microsDelayEven(long microseconds)  
   Seconds      =  .secondsDelayEvent(long seconds)  
   Minutes      =  .minutesDelayEvent(long minutes)  
*/

__________________________________________________________________________________________________________

## Getting Started
### Deployment
1. Clone or Download library folder into Arduino IDE libraries folder.
2. Extract files from zipped folder if required.
3. Open Arduino IDE and select from example programs.

___________________________________________________________________________________________________________

## Use:



// Set up instance for each different timer required by giving it a unique name:

autoDelay timerOne

autoDelay timerTwo



//In main loop call if statement with

if (timerOne.millisDelay(long milliseconds)){

// Call timed events here

}




### Precompiler Requirements:

`#include  ` <br> <br>


#### <u>AVR</u>
Define the LED pin and the initial state.

`     ` <br>
`     ` <br> <br>

#### <u>ESP32 / espressif</u>
For ESP32 & espressif boards, additional variables are required for setup.

`      `   <br>
`       `  <br>
`       `    <br>
`                            `   <br> <br>

___________________________________________________________________________________________________________

### Object Constructors

#### <u>AVR</u>
Declaring a blink LED object:

`       `<br> <br>

Declaring a fade LED object:

`     `<br> <br>

#### <u>ESP32 / espressif</u>
Declaring a fade LED object:

`    `<br> <br>

<br>

___________________________________________________________________________________________________________

### Setup Functions:
Setup function for Blink LEDs pass the initial state as an argument. Defaults to off.

`                            `   <br> <br>

Setup function for Fade LEDs pass the initial brightness as an argument. Default is 150

`                            `   <br> <br>

<br>

___________________________________________________________________________________________________________

### Loop Functions:

Call performBlink() or PerformFade(); on LED objects to set the output pins.
This method should be called in main loop for each ledObject or fadeLED object. 

For blink objects <br>
`                            `   <br> <br>

For fade objects <br>
`                            `   <br> <br>

Note: performBlink(); and performFade(); are both valid for fadeLED objects, performFade will also
carry out any Blink events triggered. Fading events take priority over Blink events if they are called together.

performFade(); is not valid for ledObjects. 

<br>


___________________________________________________________________________________________________________

### Starting & Stopping Events:
#### Starting Events

Blink & Fade events must be triggered to be performed.

Start a Blink event that continues indefinatly:

`                            `   <br> <br>

Call a Blink event that repeats a number of times:

`                            `   <br> <br>


Start a Fade event that continues indefinatly:

`                            `   <br> <br>

Call a Fade event that repeats a number of times:

`                            `   <br> <br>

<br>
_____

#### Stopping Events

To stop a blink event call:

`                            `   <br> <br>

To stop a fade event call:

`                            `   <br> <br>


___________________________________________________________________________________________________________

### Advanced Uses:




<br>
<br>

___________________________________________________________________________________________________________
___________________________________________________________________________________________________________

### Limitations:

* As interrupts are avoided entirely, timing events may not be executed in a priority order, leading to
less accurate triggering of timed events. 

* If more accurate timing is a priority please use [interrupt_autoDelay]( none ) (Coming Soon)


<br>

### Known Issues V2.0.0
  - Please report any bugs or issues found.
  - 
### Known Issues V1.0.0
  - Please report any bugs or issues found.

<br>

### Features to be Added 

<br>
<br>

## About
### Built With
* [Arduino IDE](https://www.arduino.cc/) - Default IDE


### Author
#### Declan Heard
* [LinkedIn](https://www.linkedin.com/in/declan-heard-91103b58/)
* Email: [Personal](mailto:dec.h38@gmail.com "dec.h38@gmail.com") | [Company](mailto:PanGalacticTech@gmail.com "PanGalacticTech@gmail.com")
* [Github Profile](https://github.com/PanGalacticTech)




