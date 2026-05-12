#ifndef LOGIC_H
#define LOGIC_H
#include <math.h>
#include <Arduino.h>

const float KPA = 0.61078f;
const float COEFF_TEMP_A = 17.27f;
const float COEFF_TEMP_B = 237.3f;
const float SOIL_DRY_THRESHOLD = 30.0f; 


class LowPass {
    private: 
      float alpha;
      float previous;
      float initalized = false;
  
    public:
      LowPass(float alpha) : alpha(alpha), previous(0.0f) {}
  
      float update(float input) {
        if (!initalized) {
          previous = input;
          initalized = true;
        }
  
        previous = (alpha * input) + (1 - alpha) * previous;
        return previous;
      }
  
      float getValue() {
        return previous;
      }
  
  };
  
  
  class CarbonProcessor {
    private:
      float last_CO2;
      unsigned long last_time;
      bool initalized = false;
  
    public: 
      float calculate(float current_CO2) {
        if (!initalized) {
          last_CO2 = current_CO2;
          initalized = true;
          return 0.0f;         
        }
  
        unsigned long now = millis();

        float dt = (now - last_time) / 60000.0f;
        float deltaCO2 = current_CO2 - last_CO2;

        last_CO2 = current_CO2;
        last_time = now;
  
        if (dt < 1e-7f) return 0.00f;
        return deltaCO2 /dt;
      }
  };
  
  class PredictiveIrrigatior {
    private:
        float lastMoisture = 0.0f;
        unsigned long lastTimestamp = 0;
        float criticalThreshold;
    
    public:
      PredictiveIrrigatior(float threshold) : criticalThreshold(threshold) {}
  
      float estimateHoursRemaining(float currentMoisture) {
        unsigned long now = millis();
  
        if (lastTimestamp == 0) {
          lastMoisture = currentMoisture;
          lastTimestamp = now;
          return 99.0f;
        }
  
        float dt = (now - lastTimestamp) / 3600000.0f;
  
        if (dt < 1e-7f) return 99.0f;
  
        float drainRate = (lastMoisture - currentMoisture) / dt; 
        lastMoisture = currentMoisture;
        lastTimestamp = now;
  
        if (drainRate < 1e-7f) return 99.0f; // not being watered
        return (currentMoisture - criticalThreshold) / drainRate;
      }
  };
  
  class Utils {
    public:
      static float calculateVPD(float t, float h) {
          float svp = 0.61078f * exp((17.27f * t) / (t + 237.3f));
          float avp = svp * (h / 100.0f);
          return svp - avp;
      }
      
      static float estimateO2Production(float co2PpmDropped, float enclosureVolumeLiters) {
          return co2PpmDropped * enclosureVolumeLiters * 0.727f; 
      }
  
  };
  


#endif