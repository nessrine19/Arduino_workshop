int readval;
float value2;
int buzzer = 13;                                      // potentiometer connected to digital pin No 2
int ANALOG_THRESHOLD  = 500; 
void setup() {
  // Set the RGB LED pins as OUTPUT
  Serial.begin(9600);
  pinMode(13, OUTPUT);               // Buzzer is an Output
  pinMode (A2,INPUT); 
}

void loop() {
  readval=analogRead(A2);
  value2=(5./1023.)*readval;
  Serial.println(value2);
  delay(500);                 // Read the analog pin value 
  if(readval > ANALOG_THRESHOLD){          // if analog value more than THRESHOLD
	tone(buzzer, 700);                                                        // Buzzer ON(This Value can change)         
	}
  else{                  
	noTone(buzzer);                                                //*if Buzzer OFF  
 	}  
}
