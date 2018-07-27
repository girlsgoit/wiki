#include "MeMCore.h"

MeRGBLed led(7, 7==7?2:4);
MeBuzzer buzzer;

void setup() {
  Serial.begin(9600);
}

unsigned long startPoliceLights = millis();
bool changePoliceLights = 0;
  
void policeLights() {
  
  unsigned long period = millis() - startPoliceLights;
  
  Serial.println(period);
  
  if(period >= 500) {
    if(changePoliceLights == 0) { 
      led.setColor(0, 254, 0, 0);
      led.setColor(1, 0, 0, 254);
      changePoliceLights = 1;
      buzzer.tone(784, 200);
      buzzer.noTone();
      
    }  else {
      led.setColor(0, 0, 0, 254);
      led.setColor(1, 254, 0, 0);    
      changePoliceLights = 0;
         buzzer.tone(520, 200);
         buzzer.noTone();
    }
    led.show();
    startPoliceLights = millis();
    
  }
}

void loop() {
  policeLights();
  Serial.println("Hello");

}