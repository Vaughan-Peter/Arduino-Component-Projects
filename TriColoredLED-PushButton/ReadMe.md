# 🌈 Arduino RGB LED Button Controller

This project demonstrates how to use a **push button** to control a **tri-color RGB LED** connected to an Arduino.  
Each press of the button generates a **random color**, which the LED transitions to **smoothly** using PWM-based fading.

---

## 🧰 Components Required

| Component                | Quantity | Notes |
|---------------------------|-----------|-------|
| Arduino Uno (or similar) | 1 | Any board with PWM pins |
| Push Button (3-pin) | 1 | Signal to D13, GND to Arduino GND |
| RGB LED Module | 1 | Connected to PWM pins D3, D5, D6 |
| Jumper Wires | 4–6 | Male-to-female or male-to-male depending on setup |
| Breadboard | 1 | Optional, for prototyping |

---

## ⚙️ Pin Connections

| Arduino Pin | Component | Function |
|--------------|------------|-----------|
| D13 | Push Button | Signal Input |
| GND | Push Button | Ground |
| D3 | RGB LED | Red |
| D5 | RGB LED | Blue |
| D6 | RGB LED | Green |
| GND | RGB LED | Common Cathode (or 5V for Common Anode\*) |

\*If using a **common anode RGB LED**, connect the common pin to **5V** and invert the PWM logic in `setColor()`.

---

## 🔩 How It Works

1. The push button is read on **digital pin 13** with an internal pull-up resistor.  
2. When pressed, the Arduino:
   - Generates a **new random RGB color**.
   - Smoothly **fades** from the current color to the new one.
3. Debouncing logic ensures clean button input.
4. PWM signals on pins D3, D5, and D6 mix light levels to form the new color.

---

## 🧪 Example Output

- Press the button once → smooth fade to a random color  
- Press again → another random color  
- Each color transition is gradual and visually appealing  

---

## 🔧 Customization

You can adjust the following in the code:

| Variable | Description | Example Value |
|-----------|--------------|----------------|
| `fadeSpeed` | Controls how quickly colors fade | `1` = very smooth, `5` = faster |
| `debounceDelay` | Prevents false presses | `50` ms |
| `randomSeed(analogRead(A0))` | Adds randomness; ensure A0 is unconnected |

---

## 🧠 Future Enhancements

- Add **press-and-hold brightness control**  
- Implement a **“party mode”** with auto color cycling  
- Add an **OLED display** to show RGB values  
- Use multiple buttons for color selection and effects  

---

## 📸 Hardware Reference

Typical modules used in this project:

- [KY-004 Push Button Module](https://arduinomodules.info/ky-004-key-switch-module/)
- [KY-016 RGB LED Module](https://arduinomodules.info/ky-016-rgb-full-color-led-module/)

---

## 🖥️ License

This project is released under the **MIT License**.  
Feel free to use, modify, and share it for personal or educational use.

---

## Other Notes

**Author:** Peter Vaughan  
**Project:** Arduino RGB Button Controller  
**Date:** October 2025  

---
## 📸 Pictures

A look at the components and the full Arduino RGB button setup in action:

| Description | Image |
|--------------|--------|
| Push button and RGB LED components | ![Component2](https://github.com/user-attachments/assets/cff70a08-2926-401a-8774-e7b0a064ab0c) |
| RGB LED module close-up | ![1](https://github.com/user-attachments/assets/68c5c54d-3297-4c5e-9b3f-ddc8e7ade6e9) |
| Breadboard and Arduino wiring (front view) | ![WIN_20251007_21_48_13_Pro](https://github.com/user-attachments/assets/7ee00210-5d66-4c71-87a0-a056c28e4bfd) |
| Breadboard and Arduino wiring (angled view) | ![WIN_20251007_21_48_46_Pro](https://github.com/user-attachments/assets/05517a16-bb0c-4ffb-a120-37adc70ec63e) |

---

> 💡 *These photos show the button connected to D13 and the RGB LED module attached to pins D3, D5, and D6.  
> You can use this layout as a reference when wiring your own setup.*
---
