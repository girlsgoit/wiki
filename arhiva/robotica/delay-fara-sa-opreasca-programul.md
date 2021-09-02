---
description: >-
  Pentru situatia cand in loop avem nevoie de un delay care sa afecteze o
  singura componenta si sa nu blocheze programul
---

# Delay fara sa opreasca programul

```c

#include "MeMCore.h"

bool myDelay(int milliseconds, unsigned int &startDelay) {
    if( millis()-startDelay >= milliseconds) {
      startDelay = millis();
      return true;  
    }
    return false;
}

void setup() {
  Serial.begin(9600);
  Serial.print("Started");
}

// De fiecare data cand am un myDelay nou, trebuie sa adaug o variabila noua asa
unsigned int startPrinting1 = millis();
unsigned int startPrinting2 = millis();

void loop() {
  // Exemplu de utilizare
  // pentru fiecare data cand folosesc, trebuie sa declar o alta variabila de start, de ex. startPrinting1, startPrinting2 etc.
  if(myDelay(1000, startPrinting1)) {
    Serial.println("Yep");  
  }
  
  // Al doilea exemplu de utilizare
  // Atentie, acest delay nu tine cont de alte delayuri definite mai sus sau mai jos!!!
  // Actiunea se va executa in general o data la 2 secunde
  if(myDelay(2000, startPrinting2)) {
    Serial.println("It's working!");  
  }
}
```

{% file src="../../.gitbook/assets/mydelay.ino" caption="Descarca acest cod aici \(sa nu iti apara greseli de la copiere\)" %}

## Buzzer code - neterminat!

```c
//#include "MeMCore.h"
#include <MeMCore.h>

bool myDelay(int milliseconds, unsigned int &startDelay) {
    if( millis()-startDelay >= milliseconds) {
      startDelay = millis();
      return true;  
    }
    return false;
}

unsigned int startTone1 = millis();
bool startToneFlag = true;
//
//void buzzerTone(uint16_t frequency, uint32_t duration)
//{
//  int buzzer_pin = 8;
//  int period = 1000000L / frequency;
//  int pulse = period / 2;
//  Serial.println("Pulse:");
//  Serial.print(pulse);
//  
//  pinMode(buzzer_pin, OUTPUT);
//  
//  if(myDelay(pulse, startTone1)) {
//    if(startToneFlag==true) {
//      digitalWrite(buzzer_pin, HIGH);
//      Serial.println("High");
//    } else {
//      digitalWrite(buzzer_pin, LOW);
//      Serial.println("Low");
//    }
////      wdt_reset();
////    }
//    startToneFlag = !startToneFlag;
//  }
//}

//TimerFreeTone( pin, frequency, duration, volume);
void setup() {
//  buzzerTone(582, 1000);
}

void loop() {
  buzzerTone2(784, 1000);
//  buzzerTone2(582, 100);
  
  Serial.println("Hello");
}


unsigned int delayBuzzer1 = millis();
bool delayBuzzerFlag1 =true;

void buzzerTone2(uint16_t frequency, uint32_t duration)
{
int   buzzer_pin = 8;
//  int period = 1000000L / frequency;
  int period = 1000L / frequency;
  int pulse = period / 2;
  pinMode(buzzer_pin, OUTPUT);
//  for (long i = 0; i < duration * 1000L; i += period) 
//  {
    if(myDelay(pulse, delayBuzzer1)) {
      if(delayBuzzerFlag1 ==true) {
      digitalWrite(buzzer_pin, HIGH);  
      } else {
       digitalWrite(buzzer_pin, LOW);  
      }
      delayBuzzerFlag1 = !delayBuzzerFlag1;
    }
////    delayMicroseconds(pulse);
//    digitalWrite(buzzer_pin, LOW);
//    delayMicroseconds(pulse);
//    wdt_reset();
//  }
}

// 
//void MeBuzzer::tone(uint16_t frequency, uint32_t duration)
//{
//  buzzer_pin = 8;
//  int period = 1000000L / frequency;
//  int pulse = period / 2;
//  pinMode(buzzer_pin, OUTPUT);
//  for (long i = 0; i < duration * 1000L; i += period) 
//  {
//    digitalWrite(buzzer_pin, HIGH);
//    delayMicroseconds(pulse);
//    digitalWrite(buzzer_pin, LOW);
//    delayMicroseconds(pulse);
//    wdt_reset();
//  }
//}
//
//

```

{% file src="../../.gitbook/assets/testbuzzer.ino" caption="Acelasi cod poate fi descarcat" %}

