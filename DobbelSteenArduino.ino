void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, INPUT);
  
  
}

void loop() {
  int getal;
  int leds1[]={5};
  int leds2[]={6, 2};
  int leds3[]={6, 5, 2};
  int leds4[]={6, 4, 2, 8};
  int leds5[]={6, 4, 2, 8, 5};
  int leds6[]={6, 7, 8, 4, 3, 2};
  int ledsall[]={6, 7, 8, 4, 3, 2, 5};
  bool ledsOn = false;

  
  while (digitalRead(9) == HIGH) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    getal = random(1, 7);
    ledsOn = true;
  }
 
  if (digitalRead(9) == LOW && ledsOn == true) {
    
    switch (getal) {
      case 1:
        for(int i = 0; i <= 0; i++){
            digitalWrite(leds1[i], HIGH);
        }
        delay(500);
        for(int i = 0; i <= 6; i++){
            digitalWrite(ledsall[i], LOW);
        }
        for(int i = 0; i <= 1; i++){
            digitalWrite(leds2[i], HIGH);
            Serial.print("1");
        }
        delay(500);
        for(int i = 0; i <= 6; i++){
            digitalWrite(ledsall[i], LOW);
        }
        for(int i = 0; i <= 2; i++){
            digitalWrite(leds3[i], HIGH);
        }
        ledsOn = false;
      break;    
        
      case 2:
        for(int i = 0; i <= 1; i++){
            digitalWrite(leds2[i], HIGH);
        }
        delay(500);
        for(int i = 0; i <= 6; i++){
            digitalWrite(ledsall[i], LOW);
        }
        for(int i = 0; i <= 2; i++){
            digitalWrite(leds3[i], HIGH);
            Serial.print("2");
        }
        delay(500);
        for(int i = 0; i <= 6; i++){
            digitalWrite(ledsall[i], LOW);
        }
        for(int i = 0; i <= 3; i++){
            digitalWrite(leds4[i], HIGH);
        }
        ledsOn = false;
      break;
      case 3:
        for(int i = 0; i <= 2; i++){
            digitalWrite(leds3[i], HIGH);
        }
        delay(500);
        for(int i = 0; i <= 6; i++){
            digitalWrite(ledsall[i], LOW);
        }
        for(int i = 0; i <= 3; i++){
            digitalWrite(leds4[i], HIGH);
            Serial.print("3");
        }
        delay(500);
        for(int i = 0; i <= 6; i++){
            digitalWrite(ledsall[i], LOW);
        }
        for(int i = 0; i <= 4; i++){
            digitalWrite(leds5[i], HIGH);
        }
        ledsOn = false;
      break;
      case 4:
        for(int i = 0; i <= 3; i++){
            digitalWrite(leds4[i], HIGH);
        }
        delay(500);
        for(int i = 0; i <= 6; i++){
            digitalWrite(ledsall[i], LOW);
        }
        for(int i = 0; i <= 4; i++){
            digitalWrite(leds5[i], HIGH);
            Serial.print("4");
        }
        delay(500);
        for(int i = 0; i <= 6; i++){
             digitalWrite(ledsall[i], LOW);
        }
        for(int i = 0; i <= 5; i++){
             digitalWrite(leds6[i], HIGH);
        }
        ledsOn = false;
      break;
      case 5:
        for(int i = 0; i <= 4; i++){
            digitalWrite(leds5[i], HIGH);
        }
        delay(500);
        for(int i = 0; i <= 6; i++){
            digitalWrite(ledsall[i], LOW);
        }
        for(int i = 0; i <= 5; i++){
            digitalWrite(leds6[i], HIGH);
            Serial.print("5");
        }
        delay(500);
        for(int i = 0; i <= 6; i++){
            digitalWrite(ledsall[i], LOW);
        }
        for(int i = 0; i <= 0; i++){
            digitalWrite(leds1[i], HIGH);
        }
        ledsOn = false;
      break;
      case 6:
        for(int i = 0; i <= 5; i++){
            digitalWrite(leds6[i], HIGH);
        }
        delay(500);
        for(int i = 0; i <= 6; i++){
            digitalWrite(ledsall[i], LOW);
        }
        for(int i = 0; i <= 0; i++){
            digitalWrite(leds1[i], HIGH);
            Serial.print("6");
        }
        delay(500);
        for(int i = 0; i <= 6; i++){
            digitalWrite(ledsall[i], LOW);
        }
        for(int i = 0; i <= 1; i++){
            digitalWrite(leds2[i], HIGH); 
        }
        ledsOn = false;
      break;
    }
  }

  

  
  
}
  
