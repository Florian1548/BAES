// Copyright (c) 2022 Florian_RG
// This code is licensed under MIT license (see LICENSE file for details)

int ledStatus = 0;
int ledFlash = 1;
int sonde = 3;
int batt = A2;
float battVal = 0;

void setup() 
  {
      pinMode(ledStatus, OUTPUT);
      pinMode(ledFlash, OUTPUT);
      pinMode(sonde, INPUT);
      pinMode(batt, INPUT);
      digitalWrite(ledFlash, HIGH);
      digitalWrite(ledStatus, HIGH);
      delay(3000);
  }

void loop() 
  {
    battVal = ((analogRead(batt) * 3.7) / 1023);

    if(digitalRead(sonde) == LOW)
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
    if(battVal < 3.7 and digitalRead(sonde) == HIGH)
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
