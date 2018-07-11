int trigPin=13;     //sensor trigger 
int echoPin=11;     //sensor echo 
float pingTime ;      //time for ping to go and come back
float speedSound;     //will calculate speed of time
float targetDistance= 7;  //cm from the sensor to the object

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2000);     //pause to let signal settle
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW); //finish pulse 

  pingTime = pulseIn(echoPin, HIGH);  //measure the ping travel time in microsecs
  speedSound = targetDistance *2 /(pingTime*0.001); //speed in cm/secs
  
  //speedSound = speedSound *0.001 ;   // cm/sec

  Serial.print("Speed of sound is : ");
  Serial.println(speedSound);
  //Serial.println (pingTime);
  
  delay (3000);
}
