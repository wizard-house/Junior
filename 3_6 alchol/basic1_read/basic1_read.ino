int dout = 8;   
int led1 = 2; 
 

void setup() {
  pinMode(dout, INPUT); 
  pinMode(led1, OUTPUT) 
  Serial.begin(9600);
}

void loop() {
  int digitalValue = digitalRead(dout); 
  
  if(digitalValue) digitalWrite(led1, HIGH);
  else             digitalWrite(led1, LOW);
  
  Serial.println(digitalValue);          
  Serial.println("-----------------");
  delay(500);
}
