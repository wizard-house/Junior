int sensor_pin = 0;
int clap_cnt = 0;
int prev_time=0;

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
      if(value >= 500) clap_cnt++;
      delay(20);
    }
  }
  Serial.println(clap_cnt);
  clap_cnt = 0;
  
  delay(20);
}

