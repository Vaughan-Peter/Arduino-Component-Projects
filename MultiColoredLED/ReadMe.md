# MultiColoredLED – Arduino KY-016 RGB LED Project

This project demonstrates how to control a **KY-016 RGB LED module** with an **Arduino Uno** using **PWM (Pulse Width Modulation)** to create smooth color transitions.

---

## 🧠 Overview
The KY-016 module contains a 4-pin RGB LED that allows mixing red, green, and blue light to produce a full range of colors.  
By adjusting the intensity of each color channel with PWM, the Arduino can generate smooth fading effects and color blends.

---

## 🔌 Wiring

| KY-016 Pin | Arduino Pin | Function |
|-------------|--------------|-----------|
| GND         | GND          | Common cathode (−) |
| R (Red)     | D3           | PWM output |
| G (Green)   | D6           | PWM output |
| B (Blue)    | D5           | PWM output |

> ⚠️ Make sure to use PWM-capable pins (3, 5, 6, 9, 10, 11 on the Uno).

---

## 🧩 Features
- Smooth RGB color fading using PWM  
- Simple wiring and setup  
- Fully compatible with Arduino Uno, Nano, and Mega  
- Easy to expand with sensors or user input  

---

## 📺 Related Video
A YouTube tutorial accompanies this project:  
**“How to Use the KY-016 RGB LED Module with Arduino (Smooth Color Fades)”**

---

## 🔗 Resources
- **Code repository:** [MultiColoredLED on GitHub](https://github.com/Vaughan-Peter/ArduinoLearning/tree/main/MultiColoredLED)  
- **KY-016 Datasheet:** [joy-it.net PDF](https://joy-it.net/files/files/Produkte/COM-KY016-RGBLED/COM-KY016RGBLED-Datasheet.pdf)

---
## 🎥 Featured Project
**MultiColoredLED – KY-016 RGB LED Module**

Watch the demo video on YouTube:  
▶️ [https://www.youtube.com/shorts/1LlBJGCEUrE](https://www.youtube.com/shorts/1LlBJGCEUrE)

---

## 🤝 Collaboration
I’m open to collaboration and contributions!  
If you’d like to:
- Improve the existing code or add new lighting effects  
- Suggest optimizations or hardware variations  
- Create documentation or visual examples  

…feel free to open an issue, submit a pull request, or contact me directly through GitHub.  
Let’s make Arduino projects more creative and fun together!

---

## 🧠 Future Ideas
- Add gamma correction for smoother brightness transitions  
- Implement random or custom color patterns  
- Add Bluetooth or serial control for color changes  

---

### 🛠 License
This project is released under the [MIT License](LICENSE).

---

**Author:** [Peter Vaughan](https://github.com/Vaughan-Peter)  
**Last updated:** October 2025
