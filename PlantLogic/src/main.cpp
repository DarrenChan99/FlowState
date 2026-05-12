#include <Arduino.h>
#include <math.h>
#include "logic.h"


LowPass co2Filter(0.1f);    
CarbonProcessor carbonProduction;
PredictiveIrrigatior waterForecast;

unsigned long lastTime = 0;
const float updateRateMs = 2000; 

void setup() {
  Serial.begin(115200);
}

void loop() {
  unsigned long now = millis();

  if (now - lastTime > updateRateMs) {
    // run main logic here on updateRate intervals
  }
}






