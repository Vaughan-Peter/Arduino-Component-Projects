// Pin assignments
const int pinR = 3;   // Red on D3 (PWM)
const int pinG = 6;   // Green on D6 (PWM)
const int pinB = 5;   // Blue on D5 (PWM)

void setup() {
  pinMode(pinR, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinB, OUTPUT);
}

// Function to set RGB color (0–255 each channel)
void setColor(int r, int g, int b) {
  analogWrite(pinR, r);
  analogWrite(pinG, g);
  analogWrite(pinB, b);
}

void loop() {
  // Fade Red → Green
  for (int i = 0; i <= 255; i++) {
    setColor(255 - i, i, 0);
    delay(10);
  }

  // Fade Green → Blue
  for (int i = 0; i <= 255; i++) {
    setColor(0, 255 - i, i);
    delay(10);
  }

  // Fade Blue → Red
  for (int i = 0; i <= 255; i++) {
    setColor(i, 0, 255 - i);
    delay(10);
  }
}
