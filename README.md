# Shrimp Automatic Dispenser

[English](README.md) | [Français](README.fr.md)

---

## 💡 **Future Improvements**

The next improvements for the project include the following features:

- [ ] **Mini case for ESP32**: Create a case to insert the ESP32 into the print, to protect it and reduce filament cost.
- [ ] **Mini case for ESP32 CAM**: Add a version of the case to accommodate an ESP32 CAM.
- [ ] **Connection to Home Assistant**: Modify the code to allow the dispenser to connect to **Home Assistant**, for control via the home automation interface.
- [ ] **DHT11 Sensor**: Integrate a DHT11 sensor to measure the temperature and humidity of the environment.

---

## 🧰 **Components Used**

- **SG90 Servo (modified)**: The SG90 servo motor was modified by directly soldering the + and - wires onto the motor for better power management.
- **L298N Driver**: To control the screw conveyor.
- **ESP32**: The microcontroller used to manage the entire system.
- **12V Power Supply**: To power the motor and ESP32.
- **Screw Conveyor**: Used to dispense the shrimp. To be 3D printed.
- **Neodymium Magnets (10mm diameter, 5mm thickness)**: Two spaces are provided for inserting neodymium magnets.
- **DHT11 Sensor**: A temperature and humidity sensor will be added to measure the environment.

---

## 🗂️ **Repository Structure**

The project is organized into several folders to easily manage 3D files, code, and circuits.

### 1. **3D-Files/**
This folder contains the 3D modeling files for the project. It is divided into two subfolders:
- **Fusion360/**: Contains `.f3d` files that can be opened and modified with Fusion 360.
- **STEP/**: Contains `.step` files that can be modified with most CAD software and used for 3D printing.

STL files for printing the screw conveyor are also included.

### 2. **Code/**
The **Code/** folder contains the files needed to program the ESP32 and make the dispenser work. The main file is very simple, but it will be updated to include handling the DHT11 sensor and connecting to Home Assistant.

### 3. **Circuit/**
The **Circuit/** folder contains a `.png` file of the wiring diagram and a file for **Circuit Designer** (circuit design software).

### 4. **Images/**
The **Images/** folder contains screenshots and photos of the finished project. This will give you an idea of what the final assembly looks like once everything is put together.

---

## ⚙️ **Instructions**

### 1. **Assembling the Dispenser**
- Print the 3D parts using the `.stl` files or modify the `.step` files if you need to adjust the design.
- Use the wiring diagram to connect the components.
- Make sure the SG90 servo is properly connected and modified as instructed.

### 2. **Programming**
- Open the code file in your IDE (e.g., Arduino IDE).
- Upload the code to the ESP32.
- Currently, the code controls the motor via the ESP32 to rotate the screw conveyor and dispense the shrimp.
- Future updates will allow adding a DHT11 sensor and connecting the system to **Home Assistant**.

### 3. **Future Modifications**
- You can add a temperature and humidity sensor (DHT11) and modify the code to read the sensor data.
- The 3D model will be modified to include space to store the ESP32, and improvements will be made to reduce filament cost.

---

## ✅ **Conclusion**

This project provides a practical solution for creating an automatic shrimp dispenser. It is modular, easy to assemble, and customizable. You can add sensors and additional features, as well as modify the 3D files to suit your specific needs.
