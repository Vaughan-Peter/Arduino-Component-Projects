# 🌞 Photoresistor LED Control with Arduino

This Arduino project demonstrates how to use a **photoresistor (light sensor)** to control multiple LEDs. As light intensity increases, more LEDs turn on. This is a beginner-friendly project that introduces **analog inputs**, **threshold mapping**, and **visual feedback**.

![Photoresistor LED Setup](https://github.com/user-attachments/assets/34a02e06-ed52-4352-9c75-71bede6c5597)

---

## 📁 Project File

- [`PhotoresistorExamples.ino`](./PhotoresistorExamples.ino)

---

## ⚙️ Hardware Requirements

- Arduino board (e.g., Uno, Nano)
- 9 LEDs
- Current-limiting resistors for LEDs (typically 220–330Ω)
- **Photoresistor (LDR)** – compatible options:
  - Raw photoresistor with a **10kΩ pull-down resistor**
  - Arduino photoresistor component
  - **KY-018 Photoresistor Module**  
    👉 [KY-018 Datasheet & Info](https://sensorkit.joy-it.net/en/sensors/ky-018)
- Breadboard and jumper wires
- **Optional:** USB battery pack (for portable use)

---

## 🔌 Wiring Overview

- LEDs connected to **digital pins 5 through 13** (9 total)
- Photoresistor or KY-018 module connected to an **analog input pin (e.g., A0)**
- If using a raw LDR, wire it as a **voltage divider** with a 10kΩ resistor
- Power supplied via USB or optional USB battery pack

---

## 📽️ Video Demonstration

Watch this project and others on **Learning Arduino Concepts**:

- 👉 **Channel:** [Learning Arduino Concepts](https://www.youtube.com/@Learning-Arduino-Concepts)  
- 👉 **Project Demo:** [Photoresistor LEDs (Short)](https://www.youtube.com/shorts/GgrAIMQA5rc)

---

## 💡 How It Works

1. The photoresistor measures ambient light levels.
2. The Arduino reads the analog value (0–1023).
3. The input range is divided into **9 thresholds**.
4. Each threshold activates one additional LED as light intensity increases.

---

## ✅ Getting Started

1. Upload the sketch to your Arduino board.
2. Position the photoresistor where it can detect changing light levels.
3. Observe how LEDs illuminate progressively as light intensity increases.

![Photoresistor LED Demo](https://github.com/user-attachments/assets/c6434baa-f7e3-41e3-ae53-c4c473274928)

---

## 🤝 Collaboration

I’m open to collaboration and contributions!

You’re welcome to:

- Improve or expand existing projects  
- Suggest new ideas or learning examples  
- Help create guides, videos, or tutorials  

Feel free to open an issue, submit a pull request, or reach out through GitHub.  
Let’s build cool Arduino projects together and share what we learn!

---

## 📚 License

This repository and all example code are released under the **MIT License**.  
You’re free to use, modify, and share for educational and personal projects.

---

**Author:** [Peter Vaughan](https://github.com/Vaughan-Peter)  
**YouTube:** [@Peter Vaughan – Arduino Learning](https://www.youtube.com/shorts/1LlBJGCEUrE)  
**Last Updated:** October 2025

---

Happy tinkering! ⚡




