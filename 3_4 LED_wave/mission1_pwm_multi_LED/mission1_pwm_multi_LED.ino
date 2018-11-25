#define HALF 128

int pin_set[6] = {3,5,6,9,10,11};

int lux = 0;
int flag = 0;

void setup()
{
  for(int i=0; i<6; i++)
  {
    pinMode(pin_set[i], OUTPUT);
  }
}

void loop()
{
  for(int i=0; i<6; i++)
  {
    lux = 0;
    while(lux < HALF)
    {
      analogWrite(pin_set[i], lux);
      if(i>0) analogWrite(pin_set[i-1],(lux+HALF));
      lux++;
      delay(10);
    }
  }
  
  for(lux=0; lux<HALF; lux++)
  {
    analogWrite(pin_set[6], lux+HALF);
  }
  
  while(1)
  {
    for(int i=0; i<6; i++)
    {
      if(i%2 == 0) digitalWrite(pin_set[i], flag);
      else         digitalWrite(pin_set[i], !flag);
    }
    delay(50);
    flag++;
    flag %= 2;
  }
   

     
  }.

  
}
