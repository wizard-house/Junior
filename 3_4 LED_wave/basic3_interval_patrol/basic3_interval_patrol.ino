int pin_set[6] = {2,3,4,5,6,7};

int start = 0;

void setup()
{
  for(int i=0; i<6; i++)
  {
    pinMode(pin_set[i], OUTPUT);
  }
}

void loop()
{
  digitalWrite(pin_set[start], HIGH);
  digitalWrite(pin_set[(start+1)%6], HIGH);
  digitalWrite(pin_set[(start+2)%6], HIGH);
     
  delay(500); 
  
  digitalWrite(pin_set[start], LOW);
  start = (start+1)%6;
}
