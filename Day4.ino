 int FirstLED=9; //ir led 1
  int SecLED=10;  //ir led 2
  int TimeOn=900;  //time on first
  int TimeOff=100;  //time off first
  int TimeON=100;  //tome on second one
  int TimeOFF=900; //time off second one
  int numFirstBlink=3; //number of time to blink first
  int numSecBlink=5;  //number of times to blink second
  
void setup() {
  Serial.begin(115200);
  pinMode(FirstLED, OUTPUT); 
  pinMode(SecLED, OUTPUT);

}

void loop() {

  Serial.println("First LED");
  
  for ( int j=1; j<=numFirstBlink; j=j+1) {  //will make it loop till j is 10, then it pops out
  Serial.print("   Blink:");
  Serial.println(j);
  digitalWrite(FirstLED, HIGH);// first
  delay(TimeOn);
  digitalWrite(FirstLED, LOW);
  delay(TimeOff);
}

  Serial.println(" ");
  Serial.println("Secound LED");
    
 for ( int j=1; j<=numSecBlink; j=j+1) { 
  Serial.print("   Blink:");
  Serial.println(j);
  digitalWrite(SecLED, HIGH);  //sec
  delay(TimeON);
  digitalWrite(SecLED, LOW);
  delay(TimeOFF);
 }

   Serial.println(" ");

 
}
