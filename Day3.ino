  int FirstLED=9; //ir led 1
  int SecLED=10;  //ir led 2
  int TimeOn=900;  //time on first
  int TimeOff=100;  //time off first
  int TimeON=100;  //tome on second one
  int TimeOFF=900; //time off second one
  int numFirstBlink=3; //number of time to blink first
  
void setup() {

  pinMode(FirstLED, OUTPUT); 
  pinMode(SecLED, OUTPUT);

}

void loop() {

  for ( int j=1; j<=numFirstBlink; j=j+1) {  //will make it loop till j is 10, then it pops out
  digitalWrite(FirstLED, HIGH);// first
  delay(TimeOn);
  digitalWrite(FirstLED, LOW);
  delay(TimeOff);
}

 for ( int j=1; j<=numSecBlink; j=j+1) { 
  digitalWrite(SecLED, HIGH);  //sec
  delay(TimeON);
  digitalWrite(SecLED, LOW);
  delay(TimeOFF);
 }
 
}
