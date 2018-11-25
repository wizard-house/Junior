int aout = A0;   
int led2 = 3;

int min_value = 50;
int max_value = 600;
 

void setup()
{
  pinMode(led2, OUTPUT) ;
  Serial.begin(9600);
}

void loop()
{
  int analogValue = analogRead(aout);

  analogValue = map(analogValue,min_value,max_value,0,255);
  analogWrite(led2,analogValue);
  
  Serial.println(analogValue);
  delay(500);
}
