int speaker_1 = 8;
int speaker_2 = 12;
int button = 13;

void setup() {
  pinMode(speaker_1,OUTPUT);
  pinMode(speaker_2,OUTPUT);
  pinMode(speaker_2,INPUT);
}

void loop() {
  if(digitalRead(button) == HIGH) {
      sound(speaker_1);
    sound(speaker_2);
  }
}

void sound(int speaker ) {
  tone(speaker,262,25);
  delay(325);
  tone(speaker,294,25);
  delay(325);
  tone(speaker,330,25);
  delay(325);
  tone(speaker,349,25);
  delay(325);
  tone(speaker,392,25);
  delay(325);
  tone(speaker,440,25);
  delay(325);
  tone(speaker,494,25);
  delay(325);
  tone(speaker,523,25);
  delay(1000);
}
