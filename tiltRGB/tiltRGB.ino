#include <Esplora.h> 
  
void setup() {
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int xRed = abs(Esplora.readAccelerometer(X_AXIS));    // read the X axis
  int yGreen = abs(Esplora.readAccelerometer(Y_AXIS));    // read the Y axis
  int zBlue = abs(Esplora.readAccelerometer(Z_AXIS));    // read the Z axis
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
