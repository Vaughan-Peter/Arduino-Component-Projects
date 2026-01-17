# Arduino LED Pattern Switcher with Push Button

This project uses an Arduino to control six LEDs connected to pins D8–D13. A 3-pin pushbutton module is connected to D2 to switch between two different LED patterns.

## 🔧 Components Used

- Arduino Uno (or compatible)
- 6 × LEDs
- 6 × 220Ω resistors
- 1 × 3-pin push button module
- Jumper wires
- Breadboard

## 🖥️ Circuit Setup

### Push Button Module
- **SIG (Signal)** → D2
- **VCC** → D3 (used as 5V output)
- **GND** → GND

### LEDs
- Connect 1 LED to each pin from D8 to D13
- Anode (long leg) → Arduino pin (via 220Ω resistor)
- Cathode (short leg) → GND

## 💡 Features

- Pattern 1: Chase effect (LEDs light up one at a time)
- Pattern 2: All LEDs blink together
- Push button toggles between the patterns
- Improved software debounce to avoid false triggers

## 🚀 How to Use

1. Connect the circuit as described above
2. Upload the `led_pattern_button.ino` sketch to your Arduino
3. Press the button to switch between LED patterns

## 📁 File

- `led_pattern_button.ino` — main Arduino sketch

## 🧠 Notes

- The button uses `INPUT_PULLUP`, so it reads `LOW` when pressed
- You can expand this project to include more patterns or use a rotary encoder instead of a button

---
## 📺 Featured Shorts

- 🔗 [Watch Short 1](https://www.youtube.com/shorts/_jnG5FBIqdA)
- 🔗 [Watch Short 2](https://www.youtube.com/shorts/1LlBJGCEUrE)
- 🔗 [Watch Short 3](https://www.youtube.com/shorts/6Pcoy_tuTTU)
- 🔗 [Watch Short 4](https://www.youtube.com/shorts/QT-7MoyOdkc)

---

## 🤝 Collaboration
I’m open to collaboration and contributions!  
If you’d like to:
- Improve or expand existing projects  
- Suggest new ideas or learning examples  
- Help create guides, videos, or tutorials  

Feel free to open an issue, submit a pull request, or reach out through GitHub.  
Let’s build cool Arduino projects together and share what we learn along the way!

---

## 📚 License
This repository and all example code are released under the [MIT License](LICENSE).  
You’re free to use, modify, and share for educational and personal projects.

---

**Author:** [Peter Vaughan](https://github.com/Vaughan-Peter)  
**YouTube:** [@PeterVaughan – Arduino Learning](https://www.youtube.com/shorts/1LlBJGCEUrE)  
**Last Updated:** October 2025


