void updateBinaryCounter() {
  bool touchState = digitalRead(touchPin);

  if (touchState == HIGH && lastTouchState == LOW) {
    counter = (counter + 1) % (1 << numLeds); // Wrap at 2^numLeds

    for (int i = 0; i < numLeds; i++) {
      int bit = (counter >> i) & 1;
      digitalWrite(ledPins[i], bit ? HIGH : LOW);
    }

    delay(100);
  }

  lastTouchState = touchState;
}
