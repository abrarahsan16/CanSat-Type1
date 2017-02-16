#include <SoftwareSerial.h>
#include <SPI.h>
#include <Wire.h>
#include <SparkFunDS1307RTC.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_HMC5883_U.h>
#include <Adafruit_BMP085.h>
//locations of each reading in the telemetry array
#define teleTime 0
#define telePressure 1
#define teleTemp 2
#define teleSpeed 3 
#define teleHeading 4
//the wire will be burnt from a wire connected to this pin
#define releasePin 13
//telemetry array to be transmitted
float telemetry[5];
//other variables

//sensors
Adafruit_BMP085 bmp;
Adafruit_HMC5883_Unified compass = Adafruit_HMC5883_Unified(12345);


void setup() {
  Serial.begin(19200);
  bmpBegin();
  compassBegin();
  RTCBegin();
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
