#include <SoftwareSerial.h>
#include <SPI.h>
#include <Wire.h>
#include <SparkFunDS1307RTC.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_HMC5883_U.h>
#include <SFE_BMP180.h> //Changed to Appropriate BMP180 package
//locations of each reading in the telemetry array
#define teleTime 0
#define telePressure 1
#define teleTemp 2
#define teleSpeed 3
#define teleHeading 4
#define teleAlt 5
#define teleCount 6
//the wire will be burnt from a wire connected to this pin
#define releasePin 13
//telemetry array to be transmitted
float telemetry[7]; //increased from 5 to 7

//other variables
double P0=1013.25; //Baseline Pressure for final altitude reading
double T, P, A;
char status;


//sensors
SFE_BMP180 bmp; //Changed to appropriate BMP180 declaration
Adafruit_HMC5883_Unified compass = Adafruit_HMC5883_Unified(12345);


void setup() {
  Serial.begin(19200);
  bmpBegin();
  //setupBMP();
  compassBegin();
  RTCBegin();
  radioBegin();
<<<<<<< HEAD

  int count = 0;
  telemetry[teleCount] = count;
=======
 
  telemetry[teleCount]= 0;
>>>>>>> origin/master

}

void loop()
{
  // put your main code here, to run repeatedly:
  callPressure();
  callTemp();
  callAlt();
  getHeading();
  getTime();
  printXB();

  telemetry[teleCount] = telemetry[teleCount] + 1; //counter
  delay(1000);
}
