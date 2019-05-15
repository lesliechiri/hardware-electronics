#include <LiquidCrystal.h>


LiquidCrystal LCD(7,8,9,10,11,12);
int TRIG = 11;
int ECHO = 6;
float Time;
float Distance;



void setup() {
  LCD.begin(16,2);
  LCD.clear();
  pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  LCD.setCursor(0,0);
  
  
  digitalWrite(TRIG,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);

  Time = pulseIn(ECHO,HIGH);
  distance = (Time*0.0342)/2;




  
  LCD.print("Distance = ");
  LCD.print(Distance);
  // put your main code here, to run repeatedly:

}
