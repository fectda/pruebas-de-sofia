int bozzer = 8;
void setup() {
 pinMode(bozzer,OUTPUT);
}
void loop() {
 tone(bozzer,392,125);
 delay(163);
tone(bozzer,392,125);
 delay(163);
tone(bozzer,440,250);
 delay(325);
tone(bozzer,392,250);
 delay(325);
tone(bozzer,523,250);
 delay(325);
tone(bozzer,492,500);
 delay(650);

} 
