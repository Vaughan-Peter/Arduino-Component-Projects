// KY-016 RGB LED connected to Arduino
// Example: Red -> D3, Green -> D6, Blue -> D5

int redPin = 3;
int greenPin = 6;
int bluePin = 5;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  // Turn on RED only, no PWM (no flicker)
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
}

void loop() {
  // nothing needed here
}
