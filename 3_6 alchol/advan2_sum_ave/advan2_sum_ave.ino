int aout = A0;   
int led2 = 3;

int min_value = 50;
int max_value = 600;
 
int sum = 0;
int ave = 0;

void setup()
{
  pinMode(led2, OUTPUT) ;
  Serial.begin(9600);
}

void loop()
{
  for(int i = 0; i<10; i++)
  {
    int analogValue = analogRead(aout);
    analogValue = map(analogValue,min_value,max_value,0,255);
    sum += analogValue;
    delay(100);
  }
  ave = sum/10;
  analogWrite(led2,ave);
   
  Serial.println(ave);
  sum = 0;
}
