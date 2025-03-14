const int Pin2 = 2;
const int Pin3 = 3;
const int Pin4 =4;

void setup() {
  // Set the RGB LED pins as OUTPUT
  pinMode(Pin2, OUTPUT);
  pinMode(Pin3, OUTPUT);
  pinMode(Pin4, OUTPUT);
}

void loop() {
  // Call the function to change colors
  for (int i = 0; i <= 7; i++) {
    // Update LEDs based on the binary representation of the counter value
    digitalWrite(Pin4, (i & 0b001) ? HIGH : LOW);
    digitalWrite(Pin3, (i & 0b010) ? HIGH : LOW);
    digitalWrite(Pin2, (i & 0b100) ? HIGH : LOW);

    // Delay for a second
    delay(1000);
  }
}
