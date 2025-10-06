int currentLed = 0;
const int ledPins[] = {5, 6, 7, 8, 9, 10, 11, 12, 13};
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);
const int touchPin = A0;
int counter = 0;
bool lastTouchState = LOW;
bool chaseRunning = true;   

const int NUM_MODES = 8;
int currentMode = -1;
bool modeSelected = false;


void printOut(){
  
  Serial.println("Select mode (1–7):");
  Serial.println("1 = updateChase");
  Serial.println("2 = updateBinaryCounter");
  Serial.println("3 = updateAllOnTouch");
  Serial.println("4 = updateFlashOnTouch");
  Serial.println("5 = updateBlinkUntilTouch");
  Serial.println("6 = updateBlinkUntilNotTouch");
  Serial.println("7 = updateChaseFreeze");
  }
