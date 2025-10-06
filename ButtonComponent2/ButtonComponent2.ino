#include "Patterns.h"

const int buttonPin = 2;
const int ledPins[] = {8, 9, 10, 11, 12, 13};
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);

int patternIndex = 0;
bool buttonPressed = false;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);
  }
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    if (!buttonPressed) {
      patternIndex = (patternIndex + 1) % 4;
      applyPattern(patternIndex, ledPins, numLeds);
      buttonPressed = true;
      delay(200); // debounce
    }
  } else {
    buttonPressed = false;
  }
}
