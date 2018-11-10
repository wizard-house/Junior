int pin_set[6] = {3,5,6,9,10,11};

int  start = 0;
bool direction = 1;
int  lux = 0;

void setup()
{
  for(int i=0; i<6; i++)
  {
    pinMode(pin_set[i], OUTPUT);
  }
}

void loop()
{
  while(lux < 256)
  {
    analogWrite(pin_set[start], lux);
    lux++;
    delay(10);
  }
  
  while(lux > 0)
  {
    analogWrite(pin_set[start], lux);
    lux--;
    delay(10);
  }
      
  if(start == 5)     direction = 0;
  else if(start == 0)direction = 1;
  
  if(direction)start++;
  else         start--;
  
}
