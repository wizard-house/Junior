int INA = 2;
int INB = 3;

void setup()
{
  pinMode(INA,OUTPUT);
  pinMode(INB,OUTPUT);
}

void loop()
{
  digitalWrite(INA,HIGH);
  digitalWrite(INB,LOW);
  delay(3000);
  digitalWrite(INA,HIGH);
  digitalWrite(INB,LOW);
  delay(3000);
  digitalWrite(INA,HIGH);
  digitalWrite(INB,LOW);
  delay(3000);
}
