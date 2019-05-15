#include <LiquidCrystal.h>


LiquidCrystal LCD(7,8,9,10,11,12);
int PIR = 6;
int Readvalue;



void setup() {


 
  LCD.begin(16,2);
  LCD.clear();
  pinMode (PIR,INPUT);
  // put your setup code here, to run once:

}

void loop() {
   LCD.setCursor(0,0);
   Readvalue = digitalRead(PIR);

  if(Readvalue == HIGH){
    
    LCD.print("ALERT");
  }
  else{
    LCD.print("OFF");
    
  
  }

  // put your main code here, to run repeatedly:

}
