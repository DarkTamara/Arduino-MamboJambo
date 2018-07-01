String  theName ; //the string variable to hold just the name
int   age ; // integer variable to hold the age
double height; // float variable to gold the height


void setup() {
  Serial.begin(9600); // turning on serial port

}

void loop() {
 Serial.println ( " Enter your name: "); // prompt for name
  while( Serial.available () == 0 ) {} ; //waits for the serial available to not be 0 
  theName =Serial.readString() ; // put the string in the variable
  
 Serial.println ( " Enter your age: "); // prompt for age
  while( Serial.available () == 0 ) {} ; //waits for the serial available to not be 0 
  age =Serial.parseInt() ; // put the int in the variable

 Serial.println ( " Enter your height: "); // prompt for height
  while( Serial.available () == 0 ) {} ; //waits for the serial available to not be 0 
  height =Serial.parseFloat() ; // put the int in the variable 

  Serial.println( " ");
  Serial.print( "Hello "); 
  Serial.print( theName );
  Serial.print( ", you are ");
  Serial.print( age );
  Serial.println( " years old");
  Serial.print( "And you are ");
  Serial.print( height );
  Serial.println( " m tall.");
  Serial.println( " ");
}
