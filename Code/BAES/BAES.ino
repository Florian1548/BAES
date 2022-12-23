// Copyright (c) 2022 Florian_RG
// This code is licensed under MIT license (see LICENSE file for details)

int ledStatus = 0; //Status LED
int ledFlash = 1; //Flashlight LED
int sonde = 3; //DC input probe
int batt = A2; //Battery voltage probe
float battVal = 0; //Voltage

void setup() 
  {
      pinMode(ledStatus, OUTPUT);
      pinMode(ledFlash, OUTPUT);
      pinMode(sonde, INPUT);
      pinMode(batt, INPUT);
      digitalWrite(ledFlash, HIGH); //Test all LED 3sec
      digitalWrite(ledStatus, HIGH);
      delay(3000);
  }

void loop() 
  {
    battVal = ((analogRead(batt) * 3.7) / 1023);

    if(digitalRead(sonde) == LOW) //DC down detector
    {
      digitalWrite(ledFlash, HIGH);
      digitalWrite(ledStatus, LOW);
      delay(100);
      digitalWrite(ledStatus, HIGH);
      delay(100);
    }
    else
    {
      digitalWrite(ledFlash, LOW);
    }
    if(battVal < 3.7 and digitalRead(sonde) == HIGH) //When battery is charging, slow blink status LED
        {
          digitalWrite(ledStatus, LOW);
          delay(1000);
          digitalWrite(ledStatus, HIGH);
          delay(1000);
        }

     else
        {
          digitalWrite(ledStatus, HIGH);
        }
  }
