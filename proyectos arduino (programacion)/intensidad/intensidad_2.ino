int brillo = 60;

void setup() {
  pinMode(5,OUTPUT);
}

void loop() {
  analogWrite(5,brillo);
  delay(200);
  if(brillo == 0){
    delay(1000);
    brillo = 60;
  } else {
    brillo = brillo - 10;
  }
}
