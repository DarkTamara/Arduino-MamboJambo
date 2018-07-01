int pinLED = 9; //the one that powers the led
int pinPot = A0;  //will read oltage from here
float readValue; //here the voltage of the pot
float writeValue;  //this will be writen to the led

void setup() {
  Serial.begin(9600); 
  pinMode(pinLED, OUTPUT);  //will power it up
  pinMode(pinPot, INPUT); //will receive stuff

}

void loop() {
  readValue = analogRead(pinPot); //read value from potentiometer
  writeValue = (255. /1023. ) * readValue; //calculate the value that will be written to the led
  
  analogWrite(pinLED, writeValue);  //writes the value to the led

  Serial.println(writeValue);
  delay(50);
}
