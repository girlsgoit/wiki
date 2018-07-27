#define SPEED 100
#include "MeMCore.h"

MeBuzzer buzzer;
MeRGBLed led(7, 7 == 7 ? 2 : 4);

  
void ledPolice() {
  led.setColor(1, 255, 0, 0);
  led.setColor(2, 0, 0, 255);
  led.show();

  buzzer.tone(784, 500);
  led.setColor(1, 0, 0, 255);
  led.setColor(2, 255, 0, 0);
  led.show();
  buzzer.tone(582, 500);
}


void loop() {
  ledPolice();
}

void setup() {
  Serial.begin(9600);
  Serial.println("Am pornit programul!");
}