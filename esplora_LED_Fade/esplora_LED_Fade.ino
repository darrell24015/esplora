/*
*  LED Fade Demonstration
*  Author: Darrell Little
*  This is free software; you can redistribute it and/or
*  modify it under the terms of the GNU Lesser General Public
*  License as published by the Free Software Foundation
*/

#include <Esplora.h> 

void setup() {
	// There is nothing needed to setup in this sketch
}

void loop() {
	  Esplora.writeRGB(0, 0, 0); // Turn LED off
    
	  // Fade IN/OUT the RGB LED 
	  for(int i=0; i<200; i++) {
	  Esplora.writeRed(i);
	  delay(10);
	 }
	 
	 for(int i=200; i>0; i--) {
	  Esplora.writeRed(i);
	  delay(10);
	 }
	 Esplora.writeRGB(0, 0, 0);
	 delay(1000);
	 
	 for(int i=0; i<200; i++) {
	  Esplora.writeGreen(i);
	  delay(10);
	 }
	 
	 for(int i=200; i>0; i--) {
	  Esplora.writeGreen(i);
	  delay(10);
	 }
	 Esplora.writeRGB(0, 0, 0);
	 delay(1000);
	 
	 for(int i=0; i<200; i++) {
	  Esplora.writeBlue(i);
	  delay(10);
	 }
	 
	 for(int i=200; i>0; i--) {
	  Esplora.writeBlue(i);
	  delay(10);
	 }
	 Esplora.writeRGB(0, 0, 0);
	 delay(1000);
  
	// Turn the RGB different colors for 1 second each
	  Esplora.writeRGB(200, 0, 0);  // make the LED red
	  delay(1000);
	  Esplora.writeRGB(0, 200, 0);  // make the LED green
	  delay(1000);
	  Esplora.writeRGB(0, 0, 200);  // make the LED blue
	  delay(1000);
	  Esplora.writeRGB(200, 200, 0); // make the LED yellow
	  delay(1000);                  
	  Esplora.writeRGB(0, 200, 200); // make the LED cyan
	  delay(1000);
	  Esplora.writeRGB(200, 0, 200); // make the LED magenta
	  delay(1000);
	  Esplora.writeRGB(200, 200, 200); // make the LED white
	  delay(1000);
}
