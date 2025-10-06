// Define the analog pin connected to the photoresistor
const int lightSensorPin = A0;

// Define the digital pins connected to the 9 LEDs
const int ledPins[] = {5, 6, 7, 8, 9, 10, 11, 12, 13};

// Calculate how many LEDs are in the array
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);

// Define the threshold value for light level (0–1023)
// Adjust this value based on your specific lighting conditions
const int lightThreshold = 600;

void setup() {
  // Set each LED pin as an OUTPUT
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW); // Make sure all LEDs start OFF
  }
}

void loop() {
  // Read the analog light level from the photoresistor
  int lightLevel = analogRead(lightSensorPin);

  // If the light level is higher than the threshold,
  // turn ON all the LEDs
  if (lightLevel > lightThreshold) {
    for (int i = 0; i < numLeds; i++) {
      digitalWrite(ledPins[i], HIGH); // Turn LED ON
    }
  } else {
    // If it's dark or dim, turn OFF all the LEDs
    for (int i = 0; i < numLeds; i++) {
      digitalWrite(ledPins[i], LOW); // Turn LED OFF
    }
  }

  // Short delay to reduce flickering or unnecessary rapid updates
  delay(100);
}

/*
const int lightSensorPin = A0;                // Photoresistor connected to A0
const int ledPins[] = {5, 6, 7, 8, 9, 10, 11, 12, 13}; // 9 LED pins
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);             // Set all LED pins as outputs
    digitalWrite(ledPins[i], LOW);           // Start with LEDs off
  }
}

void loop() {
  int lightLevel = analogRead(lightSensorPin); // Read from photoresistor (0–1023)

  // Determine how many LEDs to turn on based on light level
  int threshold = 1023 / numLeds;             // Value per step (~113.7)

  for (int i = 0; i < numLeds; i++) {
    // Calculate the threshold for this LED (1/9, 2/9... of 1023)
    if (lightLevel >= threshold * (i + 1)) {
      digitalWrite(ledPins[i], HIGH);         // Turn on LED if above threshold
    } else {
      digitalWrite(ledPins[i], LOW);          // Otherwise turn it off
    }
  }

  delay(100); // Small delay for stability
} 
*/
