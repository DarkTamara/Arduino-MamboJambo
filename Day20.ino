#include <LiquidCrystal.h>
int trigPin= 13;
int echoPin= 11;

float pingTime; //travel time of the wave
float distance; //acttual distance 
float speedOfSound= 343;

LiquidCrystal LCD (10,9,5,4,3,2);


void setup() {
  
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

 LCD.begin(16,2);
 LCD.setCursor(0,0);
 LCD.print("Distance: ");

}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2000);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(15);
  digitalWrite(trigPin, LOW);

  pingTime= pulseIn(echoPin,HIGH);
  pingTime= pingTime * 1000000.;
  distance= speedOfSound * pingTime;  
  distance= distance / 2. ; 

  distance= distance / 100000.; 
  distance /= 100000.;

  LCD.setCursor(0,1);
  LCD.print("                ");//clears the line 
    
  LCD.setCursor(0,1);
  LCD.print(distance);
  LCD.print(" cm");
  delay(1000);
  
}
