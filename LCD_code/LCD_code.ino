#include <LiquidCrystal.h>

LiquidCrystal LCD(7,8,9,10,11,12);
int pinpot = A0;


void setup() {

  LCD.begin(16,2);
  LCD.clear();
  pinMode(pinpot,INPUT);
  // put your setup code here, to run once:

}

void loop() {

  LCD.setCursor(0,0);
  LCD.print("Sensor Value = ");
  LCD.print(analogRead(pinpot);
  // put your main code here, to run repeatedly:

}
