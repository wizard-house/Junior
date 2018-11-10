int pin_set[6] = {3,5,6,9,10,11};

int lux = 0;

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
    while(lux < 256)
    {
      analogWrite(pin_set[i], lux);
      lux++;
      delay(10);
    }
  }
}
