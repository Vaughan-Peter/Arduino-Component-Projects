# Arduino Binary Counter (D8–D13)

This project demonstrates a simple **binary counter** using an Arduino and **6 LEDs** connected to digital pins **D8–D13**.  
The counter runs from **0 to 63** (6-bit counter), with each LED representing one binary digit.

---

## 🔧 Requirements
- Arduino Uno (or compatible board)  
- 6 LEDs  
- 6 × 220Ω resistors  
- Jumper wires  
- Breadboard  

---

## ⚡ Wiring
| Pin  | LED Bit | Binary Position |
|------|---------|-----------------|
| D8   | LSB     | 2⁰              |
| D9   |         | 2¹              |
| D10  |         | 2²              |
| D11  |         | 2³              |
| D12  |         | 2⁴              |
| D13  | MSB     | 2⁵              |

Each LED connects from an Arduino pin → resistor (220Ω) → LED (anode) → GND (cathode).

---

## 💻 Code
Upload this sketch to your Arduino:

// Binary Counter on Arduino using pins D8 to D13

const int pins[] = {8, 9, 10, 11, 12, 13};
const int numPins = 6;

void setup() {
  for (int i = 0; i < numPins; i++) {
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  for (int count = 0; count < 64; count++) {
    for (int i = 0; i < numPins; i++) {
      digitalWrite(pins[i], (count >> i) & 0x01);
    }
    delay(500);
  }
}

---

## ▶️ How It Works

The program counts from **0 → 63**.  
Each LED lights up based on the **binary representation** of the number.

For example:

- `000001` → Only **D8** ON  
- `001011` → **D8, D9, D11** ON  
- `111111` → All LEDs ON  

---

##  Demo Idea & Resources

- Record a short **video or GIF** of the LEDs cycling through the count — this is both fun and useful for demonstrations.  
- Check out the [Learning Arduino Concepts YouTube Channel (shorts)](https://www.youtube.com/@Learning-Arduino-Concepts/shorts) for quick, visual Arduino explanations.  
- Watch the [Code In Action](https://www.youtube.com/shorts/8bdVb5P90oU) example for a quick demonstration.  

---

## Demo Videos

Below are two short demos related to this project:

### 🎥 Demo #1

**Title / Description (replace with your own):**

👉 https://www.youtube.com/shorts/8bdVb5P90oU

### 🎬 Demo #2

**Title / Description (replace with your own):** *Short walkthrough showing how Y works.*

👉 https://www.youtube.com/shorts/l81iKlkvmDI

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






