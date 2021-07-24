int azul = 4;
int rojo = 2;
int verde = 7;
int amarillo = 13;
int azul2 = 12;
int boton = 3;
int boton2 = 8;
void setup() {
pinMode(azul,OUTPUT);
pinMode(rojo,OUTPUT);
pinMode(verde,OUTPUT);
pinMode(amarillo,OUTPUT);
pinMode(azul2,OUTPUT);
pinMode(boton,INPUT);
pinMode(boton2,INPUT);
}
void loop() {
if (digitalRead(boton)==LOW){
digitalWrite(azul,LOW);
digitalWrite(verde,HIGH);
digitalWrite(rojo,LOW);
digitalWrite(amarillo,HIGH);
digitalWrite(azul2,LOW);
}
 else if (digitalRead(boton)==HIGH){
digitalWrite(azul,LOW);
digitalWrite(verde,LOW);
digitalWrite(rojo,LOW);
digitalWrite(amarillo,LOW);
digitalWrite(azul2,LOW);
   }
if (digitalRead(boton2)==LOW){
digitalWrite(azul,HIGH);
digitalWrite(verde,LOW);
digitalWrite(rojo,HIGH);
digitalWrite(amarillo,LOW);
digitalWrite(azul2,HIGH);
  }
else if (digitalRead(boton2)==HIGH){
digitalWrite(azul,LOW);
digitalWrite(verde,LOW);
digitalWrite(rojo,LOW);
digitalWrite(amarillo,LOW);
digitalWrite(azul2,LOW);
 }
}
