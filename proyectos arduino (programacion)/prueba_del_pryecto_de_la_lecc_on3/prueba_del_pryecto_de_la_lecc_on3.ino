
int brillo = 100;
int led = 3;
int boton = 4;
void setup() {
pinMode(led,OUTPUT);
pinMode(boton,INPUT);
digitalWrite(4,HIGH);
}
void loop() {
  if(brillo==0){
  brillo=60;
  }
  else if(digitalRead(boton)==LOW){
  brillo = brillo - 20;
  analogWrite(led, brillo);
  delay(200);   
  }
}
