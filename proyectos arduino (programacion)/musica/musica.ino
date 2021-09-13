int buzzer =8;
void setup() {
  pinMode(buzzer,OUTPUT);
}

void loop() {
 tone(buzzer,262,250);
 delay(325);
 tone(buzzer,294,250);
 delay(325);
 tone(buzzer,330,250);
 delay(325);
 tone(buzzer,349,250);
 delay(325);
 tone(buzzer,392,250);
 delay(325);
 tone(buzzer,440,250);
 delay(325);
 tone(buzzer,494,250);
 delay(325);
 tone(buzzer,523,250);
 delay(1000);
}
