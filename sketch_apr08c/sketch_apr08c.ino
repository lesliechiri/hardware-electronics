int pinpot = A0;
int LEDRED = 10;
int Brightness;
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
  Brightness = (255./1023.)*Readvalue;
  analogWrite(LEDRED,Brightness);
  delay(1000);
  analogWrite(LEDRED,0);
  delay(1000);
  Serial.print("pinpot value = ");
  Serial.print(Readvalue);
  Serial.print("Brightness");
  Serial.println(Brightness);
  
  // put your main code here, to run repeatedly:

}
