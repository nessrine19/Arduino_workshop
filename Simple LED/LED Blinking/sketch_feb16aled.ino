int delayT = 1000; 
void setup() { 
  // put your setup code here, to run once: 
pinMode(4, OUTPUT); 
} 
void loop() { 
  // put your main code here, to run repeatedly: 
digitalWrite(4, HIGH); 
delay(delayT); 
digitalWrite(4, LOW); 
delay(delayT); 
}
