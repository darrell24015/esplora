/*
*  tiltRGB
*  Using the Serial Monitor, this demo displays the values from the accelerometer chip
*  and uses those values to change the color of the RGB LED
*  Author: Darrell Little
*  This is free software; you can redistribute it and/or
*  modify it under the terms of the GNU Lesser General Public
*  License as published by the Free Software Foundation
*/

#include <Esplora.h> 

// Initialize variables needed for reading from the accelerometer
int xRed = 0;
int yGreen = 0;
int zBlue = 0;
  
void setup() {
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  xRed = abs(Esplora.readAccelerometer(X_AXIS));    // read the X axis
  yGreen = abs(Esplora.readAccelerometer(Y_AXIS));    // read the Y axis
  zBlue = abs(Esplora.readAccelerometer(Z_AXIS));    // read the Z axis
  Serial.print("red: ");      // print the label for X
  Serial.print(xRed);      // print the value for the X axis
  Serial.print("\tgreen: ");    // print a tab character, then the label for Y
  Serial.print(yGreen);      // print the value for the Y axis
  Serial.print("\tblue: ");    // print a tab character, then the label for Z
  Serial.println(zBlue);    // print the value for the Z axis
  delay(500);              // wait half a second (500 milliseconds)
  // Change the LED according to position
  Esplora.writeRGB(xRed, yGreen, zBlue);
  delay(500);

}
