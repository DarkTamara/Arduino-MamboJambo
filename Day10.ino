int potPen=A0; //assigning the potentiometer pin to A0
float readValue; //the value from the middle pin 
float Voltage; // the real value in volts

void setup() {
  pinMode (potPen, INPUT);  //declare pin an input
  Serial.begin(9600); //start serial port
  

}

void loop() {
  readValue = analogRead(potPen);   //read pin and put the value in the var
  Serial.println( Voltage );  //print results to serial monitor
    Voltage = (5./1023.) * readValue ;  //calculates the real value of voltage
  delay(250);


}
