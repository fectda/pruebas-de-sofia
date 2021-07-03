
void setup() {

  pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}


void loop() { 
  if( digitalRead(2)==LOW ) {
    digitalWrite(13,HIGH);
    delay(1000);
  }else{
    digitalWrite(13,LOW);
  }
}
