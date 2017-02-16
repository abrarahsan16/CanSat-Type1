double T, P, A;

  void bmpBegin() {
  //Setup for BMP Sensor
  if (bmp.begin())
  {
    Serial.println("BMP Setup");
  }
  else
  {
    Serial.println("Nope, bye. No BMP");
  }
}

void callTemp() {
  T = bmp.readTemperature();
  Serial.print("Temperature: ");
  Serial.print(T,2);
  Serial.println(" deg C");
}

void callPressure() {
  P = bmp.readPressure();
  Serial.print("Pressure: ");
  Serial.print(P,2);
  Serial.println("Pa");
}

void callAlt() {
  A = bmp.readAltitude();
  Serial.print("Altitude: ");
  Serial.print(A,2);
  Serial.println("m");
}

