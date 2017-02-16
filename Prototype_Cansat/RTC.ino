void RTCBegin() {
  rtc.setTime(0,0,0,0,0,0,0);
}

void getTime() {
  rtc.update();
  int missionTime = rtc.getSecond()+60*rtc.getMinute()+60*60*rtc.getHour();
   Serial.print("Mission Time: ");
  Serial.print(missionTime);
  Serial.println(" s");
}

