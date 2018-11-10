int pin_set[6] = {2,3,4,5,6,7};

int  start = 0;
bool direction = 1;

void setup()
{
  Serial.begin(9600);
  for(int i=0; i<6; i++)
  {
    pinMode(pin_set[i], OUTPUT);
  }
}

void loop()
{
  Serial.println(start);
  digitalWrite(pin_set[start],HIGH); 
  delay(500); 
  digitalWrite(pin_set[start],LOW); 
    
  if(start == 5)     direction = 0;
  else if(start == 0)direction = 1;
  
  if(direction)start++;
  else         start--;
  
}

