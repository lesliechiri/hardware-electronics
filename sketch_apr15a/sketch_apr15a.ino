 int pinpot = A0;
int LEDRED = 10;
int Readvalue;
int delayled;





void setup() {
   Serial.begin(9600);
  pinMode(pinpot,INPUT);
  pinMode(LEDRED,OUTPUT);

  
  // put your setup code here, to run once:

}

void loop() {
  
  Readvalue = analogRead(pinpot);
  delayled = (900./1023.)*Readvalue;
  analogWrite(LEDRED,255);
  delay(delayled);
  analogWrite(LEDRED,0);
  delay(delayled);

  
  
  
  

  
  // put your main code here, to run repeatedly:

}
