#include <Servo.h>   //loading the servo library
int pos=0;  //declare and initialise the position variable
int servoPin=9; //the pin the servo is hooked to
int servoDelay=25;  //wait 
int potReading; //the variable from the potentiometer
int potPin=A0;  

Servo myServo; //create a servo object 

void setup() {  //this will only put it in this position

  Serial.begin(9600);
  myServo.attach(servoPin); //where the servo to what the servo is attached to
 
}

void loop() {
  potReading = analogRead(potPin);  //read the value and put in the the variable

  pos = (155./1023.)*potReading +15;  //calculate position based on the potentiometer value
  myServo.write(pos);   //write the value on the pot to the servo
  
}
