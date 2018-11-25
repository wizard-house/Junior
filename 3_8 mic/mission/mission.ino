int sensor_pin = 0;
int yellow_led = 2;
int red_led = 3;

int clap_cnt = 0;
int prev_time = 0;
int flag = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(yellow_led, OUTPUT);
  pinMode(red_led, OUTPUT);
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

  switch(clap_cnt)
  {
    case 1:
      digitalWrite(red_led, HIGH);
      digitalWrite(yellow_led, LOW);
      break;

    case 2:
      digitalWrite(red_led, LOW);
      digitalWrite(yellow_led, HIGH);
      break;

    case 3:
      digitalWrite(red_led, HIGH);
      digitalWrite(yellow_led, HIGH);
      break;

    case 4:
      digitalWrite(red_led, LOW);
      digitalWrite(yellow_led, LOW);
      break;
      
  }
  clap_cnt = 0;
  
  delay(20);
}

