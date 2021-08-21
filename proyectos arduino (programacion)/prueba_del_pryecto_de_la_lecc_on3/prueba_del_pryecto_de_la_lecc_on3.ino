int brillo = 100;
int led = 3;
int boton = 4;
void setup() {
pinMode(led,OUTPUT);
pinMode(boton,INPUT_PULLUP);
digitalWrite(4,HIGH);
}
void loop() {
  if(digitalRead(boton)==LOW){
  brillo = brillo - 12;
  analogWrite(led, brillo);

  }
}
