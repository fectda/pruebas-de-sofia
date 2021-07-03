int intensity = 60;

void setup() {

  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}


void loop() { 
  
  if( digitalRead(2)==LOW ) {
    if(intensity==0){
      intensity = 60;
    } else {
      intensity -= 10;
    }
    delay(100);
  }
  
  analogWrite(5,intensity);


}
