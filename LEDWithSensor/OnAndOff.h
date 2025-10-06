void updateAllOnTouch() {
  bool touchState = digitalRead(touchPin);

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], touchState == HIGH ? HIGH : LOW);
  }
}

void updateFlashOnTouch() {
  bool touchState = digitalRead(touchPin);

  if (touchState == HIGH && lastTouchState == LOW) {
    // Turn on all LEDs
    for (int i = 0; i < numLeds; i++) {
      digitalWrite(ledPins[i], HIGH);
    }

    delay(100); // Flash duration

    // Turn off all LEDs
    for (int i = 0; i < numLeds; i++) {
      digitalWrite(ledPins[i], LOW);
    }

    delay(100); // Debounce delay
  }

  lastTouchState = touchState;
}
