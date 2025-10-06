# Arduino LED Pattern Cycler

This Arduino project cycles through **four different LED lighting patterns** using a **push button**. It's ideal for learning digital input/output, button debouncing, and pattern-based logic.

---

## 🧠 Features

- Push button cycles through **4 LED patterns**
- Controls **6 LEDs** on digital pins D8 through D13
- Debounced input for smooth transitions
- Uses **D3 as power output** for the push button module
- Modular code using a separate header file
- Can be powered via **USB power bank** for portable use

---

## 🎬 See It In Action

Watch a live demo of the project on YouTube:  
▶️ **[https://www.youtube.com/shorts/6Pcoy_tuTTU](https://www.youtube.com/shorts/6Pcoy_tuTTU)**

---

## 🔌 Hardware Requirements

- Arduino Uno or compatible board
- 6 LEDs
- 6 resistors (220Ω recommended)
- 1 push button module (3-pin or tactile switch)
- Breadboard and jumper wires
- **(Optional)** USB power bank for external power

---

## ⚙️ Pin Configuration

| Component     | Arduino Pin |
|---------------|-------------|
| Button Signal | D2          |
| Button Power  | **D3** (set to HIGH in code) |
| LED 1         | D8          |
| LED 2         | D9          |
| LED 3         | D10         |
| LED 4         | D11         |
| LED 5         | D12         |
| LED 6         | D13         |

---

## 💡 LED Patterns

1. **All LEDs OFF**
2. **All LEDs ON**
3. **Alternating (Even ON, Odd OFF)**
4. **Chase (One LED ON at a time)**

---
