int LEDRED = 10;
int PIR = 6;
int Readvalue;


void setup() {
  Serial.begin(9600);
  pinMode (LEDRED,OUTPUT);
  pinMode (PIR,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  Readvalue = digitalRead(PIR);

  if(Readvalue == HIGH){
    digitalWrite(LEDRED,HIGH);
  }
  else{
    digitalWrite(LEDRED,LOW);
  }

  
  }
  
  // put your main code here, to run repeatedly:


