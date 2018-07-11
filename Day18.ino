#include <Servo.h>

int trigPin= 13;
int echoPin= 11;
int servoPin= 6;//will control the servo. need a analog write

float pingTime; // travel time of the ping
float distance; // real distance 
float speedOfSound = 343. ;// m/sec 
float servoAngle;

Servo pointerServo; //creates the object

void setup() {

  Serial.begin(9600);
  pinMode(servoPin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pointerServo.attach(servoPin);//where the servo is attached
  
}

void loop() {

  digitalWrite(trigPin,LOW);
  delayMicroseconds(2000);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(15);
  digitalWrite(trigPin, LOW);

  pingTime = pulseIn(echoPin, HIGH);//microsecs 
  
  pingTime= pingTime * 1000000.;//converts to secs 
  distance= speedOfSound * pingTime; //clculates distance in m/sec 
  distance= distance / 2. ; //cuz ping goes 2 times the distance

  distance= distance / 100000.; //makes m to cm, mathematically speaking
  distance /= 100000.; //dunno why but it works and makes it to cm 
  Serial.print("the distance to the target is: ") ;
  Serial.print(distance);
  Serial.println("cm/sec");
  delay(1000);
  
}
