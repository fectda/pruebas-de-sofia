int i = 0;

void setup() {

  pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}


void loop() { 
  if( digitalRead(2)==LOW ) {
    i=0;
    while(i<5){
      turnOn();
      i++;
    }
  }else{
    turnOff();
  }
}

void turnOn() {
  digitalWrite(13,HIGH);
  delay(100);
  digitalWrite(13,LOW);
  delay(100);
}

void turnOff() {
  digitalWrite(13,LOW);
} 
