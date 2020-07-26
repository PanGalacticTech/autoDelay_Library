/*
 * autoDelay.h - A library for creating delays in software without using the delay function
 * 
 * Created by Declan Heard. 03/08/2019
 * Released into Public Domain.
 * 
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
		
		// constructor
		autoDelay();
	
		// Methods
		void delayScript(int delayTime);
		
		void begin(int baudRate=9600);
		
		boolean timeDelayFin;
	
	
	private:
	
			long currentMillis;
			long previousMillis;
		

 };
 
#endif
