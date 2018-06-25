  
void setup() {
  Serial.begin(115200);
  }

void loop() {

  int j=0;  //declare that it is a int and set it =1 

  while (j<=100 ) {
   Serial.print("you are on loop nr: ");
   Serial.println(j);
   delay(250); // so we can see shit
   j=j+5;
   
  }
   Serial.println (" ");
  
  
 }
