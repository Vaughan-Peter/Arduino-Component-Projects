void updateBlinkUntilTouch() {
  bool touchState = digitalRead(touchPin);

  if (touchState == HIGH) {
    // Turn off all LEDs when sensor is pressed
    for (int i = 0; i < numLeds; i++) {
      digitalWrite(ledPins[i], LOW);
    }
    delay(100); // Small delay to prevent bouncing
  } else {
    // Blink all LEDs when sensor is not pressed
    for (int i = 0; i < numLeds; i++) {
      digitalWrite(ledPins[i], HIGH);
    }
    delay(200);

    for (int i = 0; i < numLeds; i++) {
      digitalWrite(ledPins[i], LOW);
    }
    delay(200);
  }
}


void updateBlinkUntilNotTouch() {
  bool touchState = digitalRead(touchPin);

  if (touchState == HIGH) {
    // Blink all LEDs when sensor is touched
    for (int i = 0; i < numLeds; i++) {
      digitalWrite(ledPins[i], HIGH);
    }
    delay(200);

    for (int i = 0; i < numLeds; i++) {
      digitalWrite(ledPins[i], LOW);
    }
    delay(200);
  } else {
    // Turn off all LEDs when sensor is not touched
    for (int i = 0; i < numLeds; i++) {
      digitalWrite(ledPins[i], LOW);
    }
    delay(100); // Optional: small delay to debounce
  }
}
