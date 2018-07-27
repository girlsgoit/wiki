# Alte  resurse și exemple

## Link pentru alte resurse si exemple

[https://github.com/mdiannna/mBot-resources](https://github.com/mdiannna/mBot-resources)

## Lumini + sunet politie

```c
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
```

{% file src="../.gitbook/assets/lumini\_sunet.ino" caption="Descarca cod aici" %}

## Lumini + sunet politie care nu lucreaza bine \(dar pe aceeasi placuta\)

```c
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
```

{% file src="../.gitbook/assets/police.ino" caption="Descarca cod" %}

