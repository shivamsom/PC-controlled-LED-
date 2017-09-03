void setup()
{
Serial.begin(9600);
pinMode(12,OUTPUT);  
}
void loop()
{
  char c = Serial.read();  

  switch(c)
  {
    case '1': digitalWrite(12,HIGH);
              Serial.print("ON");
                break;
    case '0':digitalWrite(12,LOW);
              Serial.print("OFF");
              break;            
  }
  
}
