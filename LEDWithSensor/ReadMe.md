# Arduino Touch Sensor LED Projects

Welcome to the **Learning Arduino Concepts** repository! This project explores how to use a touch sensor with an Arduino to control LEDs in creative and interactive ways.

🔔 **Please [Like and Subscribe](https://www.youtube.com/@Learning-Arduino-Concepts) to our YouTube channel for more tutorials and demonstrations!**  
🔔 **Please [View Touch Sensor Video](https://www.youtube.com/shorts/8rc3-l6SLeU) for a showcase of working code!**

---

## 🔧 Project Overview

This repository includes a set of experiments involving LEDs and a capacitive touch sensor. Each sketch or module demonstrates a different way to use user input to drive LED behavior.

---

## 🖐️ About the Touch Sensor

We use a **capacitive touch sensor module** (such as the TTP223) in this project. It detects when a human finger touches the sensor pad, and sends a HIGH signal to the Arduino. This allows for interactive projects without the need for physical buttons.

### Wiring Example:
- **VCC** → 5V on Arduino  
- **GND** → GND  
- **OUT** → Digital pin (defined as `touchPin` in code)

The sensor's output is used to control LED patterns and behavior depending on whether it is being touched or not.

---

## 📁 File Descriptions

### `LEDWithSensor.ino`
- **Main Sketch** that connects everything together.
- Configures pins and loops through selected LED behavior modes.

### `BinaryCounter.h`
- Implements a binary counter using multiple LEDs.
- When the touch sensor is pressed, the counter increments and the LEDs show the binary value.
