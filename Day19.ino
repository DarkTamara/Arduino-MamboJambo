#include <LiquidCrystal.h>
LiquidCrystal LCD (10,9,5,4,3,2); //creating the liquid Crystal object 
int counter=0;

void setup() {
 LCD.begin(16,2);//tell the arduin 16 collumns and 2 rows
 LCD.setCursor(0,0);//set LCD to upper left courner of display
 LCD.print("Time: ");

}

void loop() {
  for (counter=1; counter<=10; counter++) {
    LCD.setCursor(0,1);
    LCD.print("                ");//clears the line 
    
    LCD.setCursor(0,1); 
    LCD.print(counter);
    LCD.print(" sec");
    delay(1000);
  }
   for (counter=10; counter>=0; counter-=1) {
    LCD.setCursor(0,1);
    LCD.print("                ");//clears the line 
    
    LCD.setCursor(0,1); 
    LCD.print(counter);
    LCD.print(" sec");
    delay(1000);
  }

}
