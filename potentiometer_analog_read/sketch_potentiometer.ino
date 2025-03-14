int readval;
float value2;
void setup() {
  // Set the RGB LED pins as OUTPUT
  Serial.begin(9600);
}

void loop() {
  readval=analogRead(A2);
  value2=(5./1023.)*readval;
  Serial.println(value2);
  delay(500);
  
}
