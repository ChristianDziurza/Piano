int ledPin1 = 12;
int ledPin2 = 11;
int ledPin3 = 13;
int buttonPin1 = 4;
int buttonPin2 = 3;
int buttonPin3 = 2;
int button1State = 0;
int button2State = 0;
int button3State = 0;
const int buzzer = 10;

void setup() {
  //Led
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(ledPin3,OUTPUT);
  
  //Botões
  pinMode(buttonPin1,INPUT);
  pinMode(buttonPin2,INPUT);
  pinMode(buttonPin3,INPUT);

  //Buzzer
  pinMode(buzzer,OUTPUT);
}


void loop() {
  button1State = digitalRead(buttonPin1);
  button2State = digitalRead(buttonPin2);
  button3State = digitalRead(buttonPin3);

  if(button1State == HIGH){
    digitalWrite(ledPin1,HIGH);
    tone(buzzer,262);
  }else{
    digitalWrite(ledPin1,LOW);
    noTone(buzzer);
  }
  if(button2State == HIGH){
    digitalWrite(ledPin2,HIGH);
    tone(buzzer,294);
  }else{
    digitalWrite(ledPin2,LOW);
    noTone(buzzer);
  }
  if(button3State == HIGH){
    digitalWrite(ledPin3,HIGH);
    tone(buzzer,330);
  }else{
    digitalWrite(ledPin3,LOW);
    noTone(buzzer);
  }
}