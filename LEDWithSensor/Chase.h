void updateChase() {
  bool touchState = digitalRead(touchPin);

  if (touchState == HIGH && lastTouchState == LOW) {
    for (int i = 0; i < numLeds; i++) {
      digitalWrite(ledPins[i], LOW);
    }

    digitalWrite(ledPins[currentLed], HIGH);
    currentLed = (currentLed + 1) % numLeds;

    delay(200); // Debounce
  }

  lastTouchState = touchState;
}

void updateChaseFreeze(){
  bool touchState = digitalRead(touchPin);

  if (touchState == HIGH) {
    // Stop the chase if the sensor is touched
    chaseRunning = false;
  } else {
    // Resume the chase when the sensor is not touched
    chaseRunning = true;
  }

  if (chaseRunning) {
    // LED chase effect
    for (int i = 0; i < numLeds; i++) {
      digitalWrite(ledPins[i], HIGH);  // Turn LED on
      delay(100);                       // Delay to create the "chase" effect
      digitalWrite(ledPins[i], LOW);   // Turn LED off
    }
  } else {
    // Optionally, you can freeze the LEDs in their current state when chase stops.
    // The LEDs will stay in their last state until the touch is released.
    // If you want to keep all LEDs on, just add:
    // for (int i = 0; i < numLeds; i++) {
    //   digitalWrite(ledPins[i], HIGH);
    // }
  }
}
