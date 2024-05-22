
#define IN1 6                       
#define IN2 7                       
#define IN3 8                       
#define IN4 9                       
#define ENA 10                      
#define ENB 11                      
void setup() 
{
  pinMode(IN1,OUTPUT);              
  pinMode(IN2,OUTPUT);              
  pinMode(IN3,OUTPUT);             
  pinMode(IN4,OUTPUT);              
  pinMode(ENA,OUTPUT);              
  pinMode(ENB,OUTPUT);              
  analogWrite(ENA,120);             
  analogWrite(ENB,120);             
  delay(1000);                    
} //end setup
void loop()                         
{
  robo_parado();
  delay(500);
  robo_esquerda();
  delay(400);                       
  robo_parado();
  delay(500);
  robo_frente();
  delay(500);
}
void robo_frente()                  
{
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
} 
void robo_esquerda()             
{
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH); 
} 
void robo_parado()                  
{
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);   
} 
