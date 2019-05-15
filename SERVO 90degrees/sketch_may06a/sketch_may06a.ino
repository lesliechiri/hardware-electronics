#include <Servo.h>



Servo myservo;
int ReadValue;
int PIR=10;

void setup() {
  myservo.attach(8);
  pinMode(PIR,INPUT)
  // put your setup code here, to run once:

}

void loop() {
ReadValue=digitalRead(PIR);
if (ReadValue ==HIGH) {
    myservo.write(90);
    delay(1000);
  }
else{
  myservo.write(0);
  delay(1000);}
}
  
  // put your main code here, to run repeatedly:

}
