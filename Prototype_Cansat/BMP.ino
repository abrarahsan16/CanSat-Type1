  double T, P, A, P0;
  void bmpBegin() 
  {
  //Setup for BMP Sensor
    
    bmp.begin();

  if (bmp.begin())
  {
    Serial.println("BMP Detected"); 
  }
  else
  {
    Serial.println("Error, BMP Not Detected");
  }
}


//void loop() {
 void callTemp()
 {
    telemetry[teleTemp] = (float)bmp.getTemperature(T);
    /*Serial.print("Temperature: ");
    Serial.print(T,2);
    Serial.print(" deg C");*/
  }
 void callPressure()
 {
    telemetry[telePressure] = (float)bmp.getPressure(P, T);
    /*Serial.print("Pressure: ");
    Serial.print(P, 2);
    Serial.print("mb");*/
    
  }
 void callAlt()
  {
    telemetry[teleAlt] = (float)bmp.altitude(P, P0);
    /*Serial.print("Altitude: ");
    Serial.print(A, 2);
    Serial.print("m");
    Serial.println();*/
  }
//}
