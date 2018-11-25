int aout   = A0;  
int dout   = 8;
int led1   = 2; 
int led2   = 3;
int button = 7;

int min_value = 50;
int max_value = 600;
 
long   sum         = 0;
int   ave         = 0;
int   cnt         = 0;
bool  state       = 0;
int   analogValue = 0;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop()
{
  state = digitalRead(button);
  
  if(state == 1)
  {
    cnt++;
    analogValue = analogRead(aout);
    analogValue = map(analogValue,min_value,max_value,0,255);
    sum += analogValue;
    
    Serial.println("ON");
  }
  else
  {
    if(cnt>1)
    {
      ave = sum/cnt;
      digitalWrite(led1, digitalRead(dout));
      analogWrite(led2,ave);
      Serial.println(ave);
    }
    else      ave = 0;
    
    sum = 0;
    cnt = 0;
  }
  delay(50);
}

