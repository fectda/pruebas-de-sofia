void setup() {
  pinMode(2,INPUT_PULLUP);
  pinMode(13,OUTPUT);
}

void loop() {
 if(digitalRead(2)==LOW) {
  digitalWrite(13,HIGH);
delay(5000);
digitalWrite(13,LOW);
delay(5000);
digitalWrite(13,HIGH);
delay(1000);
digitalWrite(13,LOW);
delay(1000);
digitalWrite(13,HIGH);
delay(500);
digitalWrite(13,LOW);
delay(500);
digitalWrite(13,HIGH);
delay(100);
digitalWrite(13,LOW);
delay(100);
digitalWrite(13,HIGH);
}
 else if(digitalRead(2)==HIGH){
digitalWrite(13,LOW);
 }
}
