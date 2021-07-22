
void setup()
{
 Serial.begin(9600);   
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
   pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
   pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
   pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
   
}

void loop()
{
    
  int value = analogRead(A0);
  float byte = value/4 ;
  int contador = byte;
  Serial.println(contador, DEC);
  delay (100);

  
  
  
  if( bitRead(contador,7)== 1){
  digitalWrite(13,HIGH);   
  delay(100);
  } 
    else {
  digitalWrite(13,LOW);   
  delay(100);
    }
 
  if( bitRead(contador,6)== 1){
  digitalWrite(12,HIGH);   
  delay(100);
  } 
    else {
  digitalWrite(12,LOW);   
  delay(100);
    }
   
  if( bitRead(contador,5)== 1){
  digitalWrite(11,HIGH);   
  delay(100);
  } 
    else {
  digitalWrite(11,LOW);   
  delay(100);
    }
  
  if( bitRead(contador,4)== 1){
  digitalWrite(10,HIGH);   
  delay(100);
  } 
    else {
  digitalWrite(10,LOW);   
  delay(100);
    }
 
  if( bitRead(contador,3)== 1){
  digitalWrite(9,HIGH);   
  delay(100);
  } 
    else {
  digitalWrite(9,LOW);   
  delay(100);
    }
  
  if( bitRead(contador,2)== 1){
  digitalWrite(8,HIGH);   
  delay(100);
  } 
    else {
  digitalWrite(8,LOW);   
  delay(100);
    }
  
  
  if( bitRead(contador,1)== 1 ){
  digitalWrite(7,HIGH);   
  delay(100);
  } 
    else {
  digitalWrite(7,LOW);   
  delay(100);
    }
  
  
   if( bitRead(contador,0)== 1){
  digitalWrite(6,HIGH);   
  delay(100);
  } 
    else {
  digitalWrite(6,LOW);   
  delay(100);
    }
  
  
  
  
  
  
  
  
}