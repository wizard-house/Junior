int sensor_pin = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int value = analogRead(sensor_pin);
  Serial.println(value);
  delay(20);
}
