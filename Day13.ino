//for common cathod rgb

int RedPin= 11;  //setting the pins for every color
int GreenPin= 10;
int BluePin= 9;
int brightness= 30;  //set brightness smth around 1v

void setup() {
  Serial.begin(9600);

  pinMode(RedPin, OUTPUT);  //sets pins to be output ones
  pinMode(GreenPin, OUTPUT);
  pinMode(BluePin, OUTPUT);

}

void loop() {
  analogWrite(RedPin, 153);
  analogWrite(GreenPin, 0);
  analogWrite(BluePin, 76); //makes awesome magenta or smth

  delay(233);

  analogWrite(RedPin, 0);
  analogWrite(GreenPin, 255);
  analogWrite(BluePin, 255); //makes awesome cyan
  
  delay(233);
  
  analogWrite(RedPin, 255);
  analogWrite(GreenPin, 255);
  analogWrite(BluePin, 0); //makes awesome yellow

  delay(233);

   analogWrite(RedPin, 153);
  analogWrite(GreenPin, 165);
  analogWrite(BluePin, 0); //makes awesome orange

  delay(233);

  analogWrite(RedPin, 128);
  analogWrite(GreenPin, 0);
  analogWrite(BluePin, 128); //makes awesome olive

  delay(233);

  analogWrite(RedPin, 255);
  analogWrite(GreenPin, 99);
  analogWrite(BluePin, 71); //makes awesome tomato

  delay(1000);

}
