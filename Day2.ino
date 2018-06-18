int LED=9;//ir led
int TimeOn=900;
int TimeOff=900;

void setup() {

  pinMode(LED, OUTPUT);//

}

void loop() {

  digitalWrite(LED, HIGH);//turns the light on
  delay(TimeOn);
  digitalWrite(LED, LOW);
  delay(TimeOff);
  
}
