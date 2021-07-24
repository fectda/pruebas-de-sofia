int speaker_1 = 8;
int button = 13;
int frequency = 0;

void setup() {
  pinMode(speaker_1,OUTPUT);
  pinMode(button,INPUT);
  Serial.begin(9600);
}

void loop() {
  frequency = analogRead(A0);
  if(digitalRead(button) == HIGH) {
    Serial.println("push push");
    Serial.println(frequency);
    sound(speaker_1,frequency);
  }
}

void sound(int speaker,int frequency) {
  tone(speaker,frequency,250);
  delay(325);
}
