int ledR = 5;
int ledA = 6;
int ledV = 7;
int val;      

void setup(){
  pinMode(ledR,OUTPUT);
  pinMode(ledA,OUTPUT);
  pinMode(ledV,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  val=analogRead(A0);
  if (val>=0 && val<255){
    digitalWrite(ledR, HIGH);
    digitalWrite(ledA, LOW);
    digitalWrite(ledV, LOW);
    Serial.println(val);
  }
  
  if (val>=255 && val<511){
    digitalWrite(ledR, LOW);
    digitalWrite(ledA, HIGH);
    digitalWrite(ledV, LOW);
    Serial.println(val);
  }
  
  if (val>=511 && val<767){
    digitalWrite(ledR, LOW);
    digitalWrite(ledA, LOW);
    digitalWrite(ledV, HIGH);
    Serial.println(val);
  }
}