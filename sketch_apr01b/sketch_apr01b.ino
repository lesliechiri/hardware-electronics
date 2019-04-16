int LEDRED = 11;
int LEDGREEN = 9;
int blinkred;
int blinkgreen;
int redon;
int redoff;
int greenon;
int greenoff;
String message1 = "This is the REDLED Blink #";
String message2 = "This is the GREENLED Blink #";

void setup() {
  Serial.begin(9600);
  pinMode(LEDRED,OUTPUT);
  pinMode(LEDGREEN,OUTPUT);
  Serial.println("This is my first program");
  Serial.println(" ");


  Serial.print("how many blinks for red led?");
  while(Serial.available()==0){};
  blinkred = Serial.parseInt();
  Serial.println(" ");

  Serial.print("how many blinks for green led?");
  while(Serial.available()==0){};
  blinkgreen = Serial.parseInt();
  Serial.println(" ");


  
  Serial.print("how how long should red led be on?");
  while(Serial.available()==0){};
  redon = Serial.parseInt();
  Serial.println(" ");
 
  
  Serial.print("how how long should red led be off?");
  while(Serial.available()==0){};
  redoff = Serial.parseInt();
  Serial.println(" ");

  Serial.print("how how long should green led be on?");
  while(Serial.available()==0){};
  greenon = Serial.parseInt();
  Serial.println(" ");


  Serial.print("how how long should green led be off?");
  while(Serial.available()==0){};
  greenoff = Serial.parseInt();
  Serial.println(" ");

  


  


  
  // put your setup code here, to run once:

}

void loop() {

  for(int j=1;j<=blinkred;j=j+1){
  Serial.println(message1);
  Serial.println(j);
  digitalWrite(LEDRED,HIGH);
  delay(redon);
  digitalWrite(LEDRED,LOW);
  delay(redoff);
  }

   Serial.println(" ");

  for(int j=1;j<=blinkgreen;j=j+1){
  Serial.println(message2);
  Serial.println(j);
  digitalWrite(LEDRED,HIGH);
  delay(greenon);
  digitalWrite(LEDRED,LOW);
  delay(greenoff);
  } 
   Serial.println(" ");
  // put your main code here, to run repeatedly:

}
