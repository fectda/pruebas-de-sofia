int brillo = 60;

void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(11,brillo);
delay(200);
 if (brillo==0){
  delay(1000);
  brillo=60;
 }
else{
  brillo = brillo - 10;
 }
}
