const int redPin = 8;
const int greenPin = 9;
const int bluePin = 10;

void setup() {
  // Set the RGB LED pins as OUTPUT
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Call the function to change colors
  changeColors();
}

void changeColors() {
  // Change colors by varying the intensity of each component
  setColor(255, 0, 0);  // Red
  delay(1000);

  setColor(0, 255, 0);  // Green
  delay(1000);

  setColor(0, 0, 255);  // Blue
  delay(1000);

  setColor(255, 255, 0);  // Yellow
  delay(1000);

  setColor(255, 0, 255);  // Magenta
  delay(1000);

  setColor(0, 255, 255);  // Cyan
  delay(1000);

  setColor(255, 255, 255);  // White
  delay(1000);
}

// Function to set the color of the RGB LED
void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}