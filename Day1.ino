int LEDPin=13;//might wanna declare vars. here before, for easy change of stuff if need
// pin 13 is the led on the bord
int waitTimeON=150;
int waitTimeOFF=800;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LEDPin,HIGH);
  delay(waitTimeON); //millisecs
  digitalWrite(LEDPin,LOW); //just high and then low makes it dimmer
  delay(waitTimeOFF);
}
