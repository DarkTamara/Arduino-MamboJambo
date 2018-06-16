int Dot=250;
int Line=700;
int SmallSpace=700;
int BigSpace=1200;
int Forever=999999;
int LEDPin=13;

void setup() {
  pinMode(LEDPin, OUTPUT);

}

void loop() {
  //I
  digitalWrite(LEDPin,HIGH); //dot
  delay(Dot); 
  digitalWrite(LEDPin,LOW); 
  delay(SmallSpace);

  digitalWrite(LEDPin,HIGH);//dot
  delay(Dot); 
  digitalWrite(LEDPin,LOW); 
  delay(SmallSpace);
  
  delay(BigSpace);//stahp it


  //L
  digitalWrite(LEDPin,HIGH); //dot
  delay(Dot); 
  digitalWrite(LEDPin,LOW); 
  delay(SmallSpace);

  digitalWrite(LEDPin, HIGH);//line
  delay(Line);
  digitalWrite(LEDPin, LOW);
  delay(SmallSpace);

  digitalWrite(LEDPin,HIGH); //dot
  delay(Dot); 
  digitalWrite(LEDPin,LOW); 
  delay(SmallSpace);

  digitalWrite(LEDPin,HIGH); //dot
  delay(Dot); 
  digitalWrite(LEDPin,LOW); 
  delay(SmallSpace);

    delay(BigSpace);//stahp it

  //O
  digitalWrite(LEDPin, HIGH);//line
  delay(Line);
  digitalWrite(LEDPin, LOW);
  delay(SmallSpace);

  digitalWrite(LEDPin, HIGH);//line
  delay(Line);
  digitalWrite(LEDPin, LOW);
  delay(SmallSpace);

  digitalWrite(LEDPin, HIGH);//line
  delay(Line);
  digitalWrite(LEDPin, LOW);
  delay(SmallSpace);

  delay(BigSpace);//stahp it

  //V
  digitalWrite(LEDPin,HIGH); //dot
  delay(Dot); 
  digitalWrite(LEDPin,LOW); 
  delay(SmallSpace);
  
  digitalWrite(LEDPin,HIGH); //dot
  delay(Dot); 
  digitalWrite(LEDPin,LOW); 
  delay(SmallSpace);

  digitalWrite(LEDPin,HIGH); //dot
  delay(Dot); 
  digitalWrite(LEDPin,LOW); 
  delay(SmallSpace);

  digitalWrite(LEDPin, HIGH);//line
  delay(Line);
  digitalWrite(LEDPin, LOW);
  delay(SmallSpace);
  
  delay(BigSpace);//stahp it

  //E
  digitalWrite(LEDPin,HIGH); //dot
  delay(Dot); 
  digitalWrite(LEDPin,LOW); 
  delay(SmallSpace);

  delay(BigSpace);//stahp it

  //Y
  digitalWrite(LEDPin, HIGH);//line
  delay(Line);
  digitalWrite(LEDPin, LOW);
  delay(SmallSpace);

  digitalWrite(LEDPin,HIGH); //dot
  delay(Dot); 
  digitalWrite(LEDPin,LOW); 
  delay(SmallSpace);
  
  digitalWrite(LEDPin, HIGH);//line
  delay(Line);
  digitalWrite(LEDPin, LOW);
  delay(SmallSpace);
  
  digitalWrite(LEDPin, HIGH);//line
  delay(Line);
  digitalWrite(LEDPin, LOW);
  delay(SmallSpace);

  delay(BigSpace);//stahp it

  //O
  digitalWrite(LEDPin, HIGH);//line
  delay(Line);
  digitalWrite(LEDPin, LOW);
  delay(SmallSpace);

  digitalWrite(LEDPin, HIGH);//line
  delay(Line);
  digitalWrite(LEDPin, LOW);
  delay(SmallSpace);

  digitalWrite(LEDPin, HIGH);//line
  delay(Line);
  digitalWrite(LEDPin, LOW);
  delay(SmallSpace);

  delay(BigSpace);//stahp it

  //U
  digitalWrite(LEDPin,HIGH); //dot
  delay(Dot); 
  digitalWrite(LEDPin,LOW); 
  delay(SmallSpace);
  
  digitalWrite(LEDPin,HIGH); //dot
  delay(Dot); 
  digitalWrite(LEDPin,LOW); 
  delay(SmallSpace);

  digitalWrite(LEDPin, HIGH);//line
  delay(Line);
  digitalWrite(LEDPin, LOW);
  delay(SmallSpace);


  digitalWrite(LEDPin, LOW);
  delay(Forever);
  
}
  
