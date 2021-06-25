void setup() {
  // put your setup code here, to run once:
pinMode(4,OUTPUT);
pinMode(3,INPUT_PULLUP);
}

void loop() {
if(digitalRead(3)==LOW)
while(1){
digitalWrite(4,HIGH);
delay(200);
digitalWrite(4,LOW);
delay(200);
digitalWrite(4,HIGH);
delay(400);
digitalWrite(4,LOW);
delay(400);
}
else digitalWrite(5,LOW);
}
