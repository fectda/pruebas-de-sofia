void setup() {
  pinMode(2,INPUT_PULLUP);
  pinMode(13,OUTPUT);
}

void loop() {
 if(digitalRead(2)==LOW) {
  digitalWrite(13,HIGH);
delay(1000);
}
 else if(digitalRead(2)==HIGH){
digitalWrite(13,LOW);
 }
}
