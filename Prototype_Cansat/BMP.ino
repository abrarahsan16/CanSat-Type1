#include <SFE_BMP180.h>
#include <Wire.h>

SFE_BMP180 bmp;
double T, P;

  void setup
  () {
  //Setup for BMP Sensor
  Serial.begin(9600);
  bmp.begin();

  if (bmp.begin())
  {
    Serial.println("I Work");
  }
  else
  {
    Serial.println("Nope, bye.");
  }
}


void loop() {
  // put your main code here, to run repeatedly:
  {
    bmp.getTemperature(T);
    Serial.print("Temperature: ");
    Serial.print(T,2);
    Serial.print(" deg C");
  }
  {
    bmp.getPressure(P, T);
    Serial.print("Pressure: ");
    Serial.print(P, 2);
    Serial.print("mb");
    
  }
  
}
