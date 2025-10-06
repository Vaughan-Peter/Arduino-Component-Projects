#ifndef PATTERNS_H
#define PATTERNS_H

void applyPattern(int pattern, const int ledPins[], int numLeds) {
  switch (pattern) {
    case 0: // All OFF
      for (int i = 0; i < numLeds; i++) {
        digitalWrite(ledPins[i], LOW);
      }
      break;

    case 1: // All ON
      for (int i = 0; i < numLeds; i++) {
        digitalWrite(ledPins[i], HIGH);
      }
      break;

    case 2: // Alternating HIGH/LOW
      for (int i = 0; i < numLeds; i++) {
        digitalWrite(ledPins[i], (i % 2 == 0) ? HIGH : LOW);
      }
      break;

    case 3: // Chase effect
      for (int i = 0; i < numLeds; i++) {
        for (int j = 0; j < numLeds; j++) {
          digitalWrite(ledPins[j], (j == i) ? HIGH : LOW);
        }
        delay(100);
      }
      break;
  }
}

#endif
