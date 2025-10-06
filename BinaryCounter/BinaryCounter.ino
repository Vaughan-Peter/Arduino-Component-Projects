// Binary Counter on Arduino using pins D8 to D13

// Define pins
const int pins[] = {8, 9, 10, 11, 12, 13};
const int numPins = 6;

void setup() {
  // Set all pins as OUTPUT
  for (int i = 0; i < numPins; i++) {
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  // Count from 0 to 63
  for (int count = 0; count < 64; count++) {
    // Set each pin according to the binary value
    for (int i = 0; i < numPins; i++) {
      digitalWrite(pins[i], (count >> i) & 0x01); // bitwise operation
    }
    delay(500); // wait half a second
  }
}
