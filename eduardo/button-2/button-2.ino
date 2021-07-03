int i = 0;

void setup() {

  pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}


void loop() { 
  if( digitalRead(2)==LOW ) {
    if( i%2 == 0) {
      turnOn();
    } else {
      turnOff();
    }
    i++;
  } 
}

void turnOn() {
  digitalWrite(13,HIGH);
//  delay(100);
//  digitalWrite(13,LOW);
//  delay(100);
}

void turnOff() {
  digitalWrite(13,LOW);
} 
