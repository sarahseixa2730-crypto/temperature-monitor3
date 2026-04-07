# 🌡️ Temperature Monitor (ESP32)

## 📌 Description
An embedded systems project featuring the **ESP32** microcontroller to read ambient temperature data and transmit it via Serial/Wi-Fi. This project serves as a robust foundation for IoT (Internet of Things) applications.

## ⚙️ Technologies & Tools
- **Language:** C / C++
- **Platform:** ESP32 (Xtensa Dual-Core)
- **RTOS:** FreeRTOS (Task management)
- **Framework:** Arduino Core / ESP-IDF
![Circuit Wiring Diagram](src/circuit.png)
## 🔌 Hardware Requirements
- **Microcontroller:** ESP32-WROOM-32
- **Sensor:** DHT22 (Temperature & Humidity)
- **Interface:** UART (Serial Monitoring)

## 🚀 Key Features
- **Real-time Monitoring:** Accurate temperature data acquisition.
- **Serial Data Output:** Formatted telemetry via Serial Port.
- **IoT Ready:** Modular architecture designed for easy Wi-Fi/MQTT integration.
- **Non-blocking Execution:** Leveraging FreeRTOS tasks for efficient CPU usage.

## 📁 Project Structure
- `src/` → Firmware source code (.ino / .cpp)
- `docs/` → Schematic diagrams and datasheets
-
## 🧠 Key Learnings
- **Firmware Development:** Implementation of sensor drivers and data processing.
- **RTOS Fundamentals:** Managing task priorities and timing using `vTaskDelay`.
- **Project Architecture:** Organizing code for scalability and professional documentation.
