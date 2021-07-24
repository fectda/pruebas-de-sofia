int azul = 4;
int rojo = 2;
int verde = 7;
int amarillo = 13;
int azul2 = 12;
int boton = 3;
void setup() {
pinMode(azul,OUTPUT);
pinMode(rojo,OUTPUT);
pinMode(verde,OUTPUT);
pinMode(amarillo,OUTPUT);
pinMode(azul2,OUTPUT);
pinMode(boton,INPUT);
}
void loop() {
if (digitalRead(boton)==LOW)
 while(1){
 digitalWrite(azul,HIGH);
 digitalWrite(verde,LOW);
 digitalWrite(rojo,HIGH);
 digitalWrite(amarillo,LOW);
 digitalWrite(azul2,HIGH);
 delay(200);
 digitalWrite(azul,LOW);
 digitalWrite(verde,HIGH);
 digitalWrite(rojo,LOW);
 digitalWrite(amarillo,HIGH);
 digitalWrite(azul2,LOW);
 delay(200);
  }
 else digitalWrite(5,LOW);
}
