
void setup()
{
  for( int i = 2; i<= 4 ; i++)
  {
    pinMode(i,OUTPUT);
  }
  
}

void loop()
{  
  
  for( int i = 2; i<= 4 ; i++)
  {
    digitalWrite(i,HIGH);
    delay( analogRead(A0) );
    digitalWrite(i,LOW);
  }  
}
