int RedPin=11;  //set pins for each RGB
int GreenPin=10;
int BluePin=9;
int brightness=255; //sets the brightness of the color
String ColorChoice; //the user will later on fil this

void setup() {
  Serial.begin(9600); //turns on serial port
  
  pinMode(RedPin, OUTPUT);
  pinMode(GreenPin, OUTPUT);
  pinMode(BluePin, OUTPUT);

}

void loop() {

  Serial.println("What color do you want the LED to be ? " ); //ask input
  Serial.println("Choose from read, blue, green or cyan, please. ");
  while(Serial.available()==0){}  //waits for input
  ColorChoice=Serial.readString();  //reads the string from the serial port
  
  if(ColorChoice=="red") {
  analogWrite(RedPin, brightness);  //red
  analogWrite(BluePin, 0);
  analogWrite(GreenPin,0);
  }
  
  if(ColorChoice=="green") {
  analogWrite(RedPin, 0);  
  analogWrite(BluePin, 0);
  analogWrite(GreenPin,brightness); //green
  }
  
  if(ColorChoice=="blue") {
  analogWrite(RedPin, 0);  
  analogWrite(BluePin, brightness); //green
  analogWrite(GreenPin,0);
  }

  if(ColorChoice=="cyan") {
  analogWrite(RedPin, 0);  
  analogWrite(BluePin, 255); //cyan
  analogWrite(GreenPin,255);
  }

  if(ColorChoice != "red" && ColorChoice !="green" && ColorChoice !="blue" && ColorChoice !="cyan") {
    Serial.println(" ");
    Serial.println("WTF?! What even mate ? I said red, green, blue or cyan! Try again, you colorblind banana. ");
    Serial.println(" ");
  }
}


