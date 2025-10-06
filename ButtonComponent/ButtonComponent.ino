const int buttonPin = 2;
const int ledPins[] = {8, 9, 10, 11, 12, 13};
const int numLeds = 6;

int currentPattern = 0;

bool buttonState = HIGH;            // current stable state
bool lastButtonReading = HIGH;      // last raw reading
unsigned long lastDebounceTime = 0;
const unsigned long debounceDelay = 10;

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  pinMode(buttonPin, INPUT_PULLUP);  // Pull-up to fix floating pin
}

void loop() {
  // Read raw button input
  bool reading = digitalRead(buttonPin);

  // Check if button input has changed
  if (reading != lastButtonReading) {
    lastDebounceTime = millis();  // reset debounce timer
  }

  // If stable long enough, update actual button state
  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != buttonState) {
      buttonState = reading;

      // Button was just pressed
      if (buttonState == LOW) {
        currentPattern = (currentPattern + 1) % 2;
      }
    }
  }

  lastButtonReading = reading;

  // Run current LED pattern
  if (currentPattern == 0) {
    patternChase();
  } else {
    patternBlinkAll();
  }
}

// Pattern 1: LEDs chase one by one
void patternChase() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
  }
}

// Pattern 2: All LEDs blink together
void patternBlinkAll() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
  delay(300);
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(300);
}
