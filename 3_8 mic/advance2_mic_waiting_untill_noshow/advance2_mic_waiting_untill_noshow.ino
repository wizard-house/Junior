int sensor_pin = 0;
int clap_cnt = 0;
int prev_time = 0;
int flag = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int value = analogRead(sensor_pin);
  if(value >= 500)
  {
    prev_time = millis();
    while(millis() - prev_time < 5000)
    {
      value = analogRead(sensor_pin);
      if(value >= 500)
      {
        prev_time = millis();
        clap_cnt++;
        Serial.println(clap_cnt);
      }
      delay(20);
    }
  }
  
  clap_cnt = 0;
  
  delay(20);
}

