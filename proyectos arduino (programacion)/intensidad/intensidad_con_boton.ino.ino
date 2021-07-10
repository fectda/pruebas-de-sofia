void setup() {
pinMode(2,INPUT_PULLUP);
pinMode(11,OUTPUT);
}

void loop() {
if(digitalRead(2)==LOW) {
digitalWrite(11,HIGH);
analogWrite(11,100);
}
if(digitalRead(2)==LOW) {
analogWrite(11,90);
}
if(digitalRead(2)==LOW) {
analogWrite(11,80);
}
if(digitalRead(2)==LOW) {
analogWrite(11,70);
}
if(digitalRead(2)==LOW) {
analogWrite(11,60);
}
if(digitalRead(2)==LOW) {
analogWrite(11,50);
}
if(digitalRead(2)==LOW) {
analogWrite(11,40);
}
if(digitalRead(2)==LOW) {
analogWrite(11,30);
}
if(digitalRead(2)==LOW) {
analogWrite(11,20);
}
if(digitalRead(2)==LOW) {
analogWrite(11,10);
}
if(digitalRead(2)==LOW) {
analogWrite(11,0);
 }
}
