int c=0;
int p1=2;
int p2=3;
void setup()
{
  pinMode(p1,INPUT);
  pinMode(p2,INPUT);
  Serial.begin(9600);
}
void loop()
{
  if(digitalRead(p1)==1)
  {
    delay(1000);
    if(digitalRead(p2)==1)
    {
      c++;
      Serial.println(c);
    }
    delay(1000);
  }
  if(digitalRead(p2)==1)
  {
    delay(1000);
    if(digitalRead(p1)==1)
    {
      c--;
      Serial.println(c);
    }
    delay(1000);
  }
}
