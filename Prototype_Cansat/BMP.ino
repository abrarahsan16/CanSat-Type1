void bmpBegin()
{
  //Setup for BMP180

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
  status = bmp.startTemperature();
  if (status != 0)
  {
    delay(status);
    status = bmp.getTemperature(T);
    if (status != 0)
    {
      telemetry[teleTemp] = (float)T;
      //telemetry[teleTemp] = (float)bae;
      /*Serial.print("Temperature: ");
        Serial.print(T,2);
        Serial.print(" deg C");*/
    }
  }
}
void callBasePressure()
{
  status = bmp.startPressure(3);
  if (status != 0)
  {
    delay(status);
    status = bmp.getPressure(P, T);
    if (status != 0)
    {
      P0 = (float)P;
    }
  
  }}
void callPressure()
{
  status = bmp.startPressure(3);
  if (status != 0)
  {
    delay(status);
    status = bmp.getPressure(P, T);
    if (status != 0)
    {
      telemetry[telePressure] = (float)P;
    }
  }
  //telemetry[telePressure] = (float)status;
  /*Serial.print("Pressure: ");
    Serial.print(P, 2);
    Serial.print("mb");*/

}
void callAlt()
{
  A = bmp.altitude(P, P0);
  telemetry[teleAlt] = (float)A;
  /*Serial.print("Altitude: ");
    Serial.print(A, 2);
    Serial.print("m");
    Serial.println();*/
}
//}
