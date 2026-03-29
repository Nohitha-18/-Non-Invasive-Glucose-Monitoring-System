# 🩺Non-Invasive-Glucose-Monitoring-System

## 📌 Overview

This project presents a prototype system for estimating blood glucose levels using a **non-invasive optical method**. Unlike traditional finger-prick methods, this system uses infrared light interaction with human tissue to estimate glucose concentration.

---

## 🚀 Objective

To design a simple and low-cost system that reduces the need for invasive glucose monitoring and enables convenient and continuous measurement.

---

## 📸 Prototype
⚠️This is a representative/reconstructed image of my prototype for documentation purposes.
<img width="1046" height="415" alt="non invasive glucometer" src="https://github.com/user-attachments/assets/1841a1d2-6085-48a1-ab18-34f01358ce92" />


---

## 🔬 Working Principle

The system is based on the principle that **glucose affects light absorption in biological tissues**.

* Infrared light is passed through the finger
* Blood and glucose absorb part of the light
* Remaining light is detected by a photodiode
* The detected signal is converted into voltage
* Voltage is mapped to glucose using calibration

---

## ⚙️ Components Used

* Infrared LED (Light Source)
* Photodiode (Sensor)
* Signal Conditioning Circuit (Amplifier & Filter)
* Arduino (Microcontroller)
* LCD Display (16x2, I2C)
* Bluetooth Module
* Basic electronic components

---

## 🔄 Methodology

### 1. Data Acquisition

* Finger is placed between LED and sensor
* Light passes through tissue
* Sensor detects intensity

### 2. Signal Processing

* Convert light into electrical signal
* Amplify and filter noise

### 3. Calibration

* Measure actual glucose using glucometer
* Record corresponding voltage
* Establish relationship

### 4. Estimation

* Apply calibration equation
* Display glucose value

---

## 📊 Calibration & Derivation of m and c

### Step 1: Data Collection

Multiple readings were taken by measuring:

* Sensor voltage
* Actual glucose using glucometer

| Voltage (V) | Glucose (mg/dL) |
| ----------- | --------------- |
| 1.8         | 160             |
| 2.0         | 180             |
| 2.1         | 190             |
| 2.3         | 210             |
| 2.5         | 225             |

---

### Step 2: Linear Regression

Glucose = m × Voltage + c

Where:

* m = slope
* c = intercept

Using regression formulas:

m = [NΣxy − (Σx)(Σy)] / [NΣx² − (Σx)²]
c = [Σy − mΣx] / N

---

### Step 3: Final Values

From calibration:

* m = 85.2
* c = 12.7

---

### ✅ Final Equation

**Glucose = 85.2 × Voltage + 12.7**

---

### 🔑 Notes

* Values are experimentally obtained
* Valid under similar conditions
* May vary with person/environment
* Recalibration improves accuracy

---

## 💻 Code

Arduino code is available in the `code`.ino folder.

### 🔹 Functionality

* Reads analog sensor data
* Converts to voltage
* Applies calibration equation
* Displays output on LCD
* Sends data via Bluetooth

---

## ⚠️ Limitations

* Provides approximate values (not medical-grade)
* Requires calibration
* Affected by:

  * Skin thickness
  * Temperature
  * Sensor noise

---

## 💡 Applications

* Continuous glucose monitoring
* Wearable health devices
* Non-invasive diagnostics

---

## 🔮 Future Scope

* Improve accuracy using advanced algorithms
* Develop wearable version
* Multi-sensor integration
* Mobile app connectivity

---

## 🧠 Key Learning

* Optical sensing principles
* Signal processing
* Calibration techniques
* Real-world engineering trade-offs

---

## ⭐ Conclusion

This project demonstrates the feasibility of **non-invasive glucose estimation using optical sensing**. While not a replacement for clinical devices, it highlights the potential for **pain-free and continuous monitoring systems**.

---
