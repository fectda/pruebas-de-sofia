void setup() {
  // put your setup code here, to run once:
pinMode(5,OUTPUT);
}

void loop() {
analogWrite(5,60);
delay(200);
analogWrite(5,50);
delay(200);
analogWrite(5,40);
delay(200);
analogWrite(5,30);
delay(200);
analogWrite(5,20);
delay(200);
analogWrite(5,10);
delay(200);
analogWrite(5,0);
delay(200);
}
