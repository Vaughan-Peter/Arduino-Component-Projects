// Pin setup
const int buttonPin = 13;
const int redPin = 3;
const int greenPin = 6;
const int bluePin = 5;

// Variables
bool buttonPressed = false;
int lastButtonState = HIGH;
unsigned long lastDebounceTime = 0;
const unsigned long debounceDelay = 50;

int currentR = 0, currentG = 0, currentB = 0;
int targetR = 0, targetG = 0, targetB = 0;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  randomSeed(analogRead(A0)); // for random color generation
}

void loop() {
  int reading = digitalRead(buttonPin);

  // Debounce handling
  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading == LOW && !buttonPressed) {
      buttonPressed = true;

      // Generate a new random color
      targetR = random(0, 256);
      targetG = random(0, 256);
      targetB = random(0, 256);
    } 
    else if (reading == HIGH) {
      buttonPressed = false;
    }
  }

  lastButtonState = reading;

  // Smooth fade toward target color
  fadeToColor();

  delay(10);
}

void fadeToColor() {
  const int fadeSpeed = 2; // lower = smoother, slower fade

  if (currentR < targetR) currentR += fadeSpeed;
  else if (currentR > targetR) currentR -= fadeSpeed;

  if (currentG < targetG) currentG += fadeSpeed;
  else if (currentG > targetG) currentG -= fadeSpeed;

  if (currentB < targetB) currentB += fadeSpeed;
  else if (currentB > targetB) currentB -= fadeSpeed;

  analogWrite(redPin, currentR);
  analogWrite(greenPin, currentG);
  analogWrite(bluePin, currentB);
}
