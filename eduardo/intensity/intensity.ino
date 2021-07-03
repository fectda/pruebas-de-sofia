int intensity = 60;

void setup() {

  pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}


void loop() { 
  analogWrite(5,intensity);
  delay(200);
  if(intensity==0){
    intensity = 60;
  } else {
    intensity -= 10;
  }
}
