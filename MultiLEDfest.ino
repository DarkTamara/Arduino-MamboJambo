  int FirstLED=9;//ir led
  int SecLED=10;
  int TimeOn=900;
  int TimeOff=100;
  int TimeON=100;
  int TimeOFF=900;

void setup() {

  pinMode(FirstLED, OUTPUT);
  pinMode(SecLED, OUTPUT);

}

void loop() {

  digitalWrite(FirstLED, HIGH);
  delay(TimeOn);
  digitalWrite(FirstLED, LOW);
  delay(TimeOff);

  digitalWrite(SecLED, HIGH);
  delay(TimeON);
  digitalWrite(SecLED, LOW);
  delay(TimeOFF);
  
}
