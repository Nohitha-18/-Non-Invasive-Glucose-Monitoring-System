# 🩺Non-Invasive-Glucose-Monitoring-System
---

## 📌 Overview

This project presents a prototype system for estimating blood glucose levels using a **non-invasive optical method**. Unlike traditional finger-prick methods, this system uses **infrared light interaction with human tissue** to detect variations related to glucose concentration.

---

## 🚀 Objective

To develop a simple, low-cost, and user-friendly system that reduces the need for invasive glucose monitoring and enables continuous observation.

---

## 📸 Prototype

---

## 🔬 Working Principle

The system is based on the principle that **glucose affects light absorption in biological tissues**.

* Infrared light is emitted into the finger
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
* Resistors and basic electronic components

---

## 🔄 Methodology

### 1. Data Acquisition

* Place finger between LED and sensor
* Light passes through tissue
* Sensor detects light intensity

### 2. Signal Processing

* Convert light into electrical signal
* Amplify weak signal
* Filter noise

### 3. Calibration

* Measure actual glucose using glucometer
* Record corresponding voltage
* Build relationship between voltage and glucose

### 4. Estimation

* Apply calibration equation
* Display estimated glucose value

---

## 📊 Detailed Calibration Process

Calibration is used to convert **sensor voltage → glucose (mg/dL)**.

### Step 1: Collect Data

| Voltage (V) | Glucose (mg/dL) |
| ----------- | --------------- |
| 2.2         | 90              |
| 1.9         | 120             |
| 1.6         | 150             |

---

### Step 2: Observe Pattern

* As glucose increases → voltage decreases
* This shows an **inverse relationship**

---

### Step 3: Derive Equation

We assume:

Glucose = a × Voltage + b

#### Calculate slope (a):

a = (150 - 90) / (1.6 - 2.2)
a = 60 / (-0.6) = -100

#### Calculate intercept (b):

90 = (-100 × 2.2) + b
b = 310

---

### ✅ Final Calibration Equation

**Glucose = -100 × Voltage + 310**

---

### Step 4: Example Prediction

If voltage = 2.0 V

Glucose = -100 × 2.0 + 310 = **110 mg/dL**

---

### 🔑 Important Note

* Calibration is **data-based (empirical)**
* It may vary for different individuals
* Recalibration improves accuracy

---

## 💻 Code

Arduino code is available in the code.ino folder.

### 🔹 What the Code Does:

* Reads analog signal from photodiode
* Converts to voltage
* Applies calibration equation
* Outputs glucose value via serial monitor

---

## ⚠️ Limitations

* Provides approximate values (not medical-grade)
* Requires calibration
* Affected by:

  * Skin thickness
  * Temperature
  * External noise

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
* Real-time mobile app connectivity

---

## 🧠 Key Learning

* Optical sensing in biomedical systems
* Signal processing fundamentals
* Calibration techniques
* Real-world engineering challenges

---

## ⭐ Conclusion

This project demonstrates the feasibility of **non-invasive glucose monitoring** using optical sensing. While not a replacement for clinical devices, it highlights the potential for **pain-free and continuous health monitoring systems**.

---
