/* 
 *  The first header stores all the variables in here, so it has to go first.
 *  The others do the work and requires the variables
 */
 
#include "variables.h"
#include "BinaryCounter.h"
#include "BlinkingLights.h"
#include "Chase.h"
#include "OnAndOff.h"

// Setting up all the inputs and outputs
void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);
  }

  pinMode(touchPin, INPUT); // A0 as digital input
  Serial.begin(9600);
  
  printOut();
}

/* 
 *  This are all the functions that I have programmed with the Arduino touch sensor.
 *  Try them by uncommenting them and commenting the others
 */
void loop() {
  if (!modeSelected) {
    if (Serial.available() > 0) {
      //if letters in inputted then it will be 0, avoid this error,= by starting at 1
      int input = Serial.parseInt();

      if (input >= 1 && input < NUM_MODES) {
        currentMode = input;
        modeSelected = true;
        Serial.print("Mode ");
        Serial.print(currentMode);
        Serial.println(" selected.");
      } else {
        Serial.println("\nInvalid input.\nEnter a number between 0 and 6:");
      }

      // Clear any leftover characters
      while (Serial.available()) Serial.read();
    }
    return; // wait for valid input
  }

  // Once selected, run the appropriate update function
  switch (currentMode) {
    
    case 1: 
      while(1){
        updateChase(); 
      }
      break;
      
    case 2: 
    while(1){
      updateBinaryCounter(); 
    }
    break;

    case 3: 
    while(1){
      updateAllOnTouch(); 
    }
    break;
    
    case 4: 
      while(1){
      updateFlashOnTouch(); 
    }
    break;
    
    case 5: 
    while(1){
      updateBlinkUntilTouch(); 
    }
    break;
    
    case 6: 
    while(1){
      updateBlinkUntilNotTouch(); 
    }
    break;
    
    case 7:
    while(1){
      updateChaseFreeze(); 
    }
    break;
  }

  printOut();
}
