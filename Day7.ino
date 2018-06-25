  int FirstLED= 9; //ir led 1
  int SecLED= 10;  //ir led 2
  int TimeOn;  //time on first
  int TimeOff;  //time off first
  int TimeON;  //time on second one
  int TimeOFF; //time off second one
  int numFirstBlink; //number of time to blink first
  int numSecBlink;  //number of times to blink second
  String firstMessage= "First LED"; //declaring a string variable
  String secondMessage= "Secound LED";
  
void setup() {

  Serial.begin(115200);  
  String wm1= "Welcome to the serial Monitor! " ;
  String wm2= "Here it goes: " ;
  String wm3;  //declare a string variable wm3
  wm3= wm1 +wm2  ; //concatenates the two

  Serial.println(wm3);  
  Serial.println(" ");

Serial.println("How many times do you want the first LED to blink ? ");   
  while (Serial.available()==0) { } //wait for the user imput data
  numFirstBlink= Serial.parseInt(); //reads the nr from the serial port and puts it in the var
Serial.println("How much should the first LED stay on, in milisec ? ");
  while(Serial.available()==0) {} 
  TimeOn= Serial.parseInt(); 
Serial.println("Ok, now how much should it stay off, in milisec ? ");
  while(Serial.available()==0) {}
  TimeOff= Serial.parseInt();

  Serial.println(" ");
  
Serial.println("How many times do you want the secound LED to blink ? ");
  while (Serial.available()==0) { } 
  numSecBlink= Serial.parseInt(); 
Serial.println("How much should the secound LED stay on, in milisec ? ");
  while(Serial.available()==0) {} 
  TimeON= Serial.parseInt(); 
Serial.println("Ok, now how much should it stay off, in milisec ? ");
  while(Serial.available()==0) {}
  TimeOFF= Serial.parseInt(); 

  Serial.println(" ");

  pinMode(FirstLED, OUTPUT); 
  pinMode(SecLED, OUTPUT);

}

void loop() {


Serial.println(firstMessage);  
  int j=1;
  while ( j<=numFirstBlink ) {  //will make it loop till j is numFirstBlink
    Serial.print("   Blink:");
    Serial.println(j);
    digitalWrite(FirstLED, HIGH);// first
    delay(TimeOn);
    digitalWrite(FirstLED, LOW);
    delay(TimeOff);
    j=j+1;
}

Serial.println(" ");
Serial.println(secondMessage);
    
  int k=1;
  while ( k<=numSecBlink ) {
  Serial.print("   Blink:");
  Serial.println(k);
  digitalWrite(SecLED, HIGH);  //secound
  delay(TimeON);
  digitalWrite(SecLED, LOW);
  delay(TimeOFF);
  k=k+1;
 }

Serial.println(" ");

 
}
