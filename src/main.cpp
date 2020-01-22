#include <Arduino.h>

int sensorBrightness = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int brightness = analogRead(sensorBrightness);
  Serial.println(brightness);
  delay(1000);
}