# ESP32 IoT Temperature and Humidity Monitor

A cloud-connected IoT monitoring system using ESP32, DHT22 sensor, ThingSpeak cloud, and Wokwi simulation.

---

# Project Overview

This project monitors temperature and humidity in real time using the DHT22 sensor and ESP32.  
The ESP32 reads environmental data from the sensor and uploads it to ThingSpeak cloud for live monitoring and graph visualization.

The project is fully simulated using Wokwi IoT Simulator.

---

# Features

- Real-time temperature monitoring
- Real-time humidity monitoring
- ESP32 WiFi integration
- ThingSpeak cloud connectivity
- Live graph visualization
- Serial monitor debugging
- Wokwi simulation support

---

# Components Used

| Component | Quantity |
|---|---|
| ESP32 Dev Module | 1 |
| DHT22 Temperature & Humidity Sensor | 1 |
| Jumper Wires | Few |

---

# Circuit Connections

| DHT22 Pin | ESP32 Pin |
|---|---|
| VCC | 3V3 |
| GND | GND |
| DATA | GPIO15 |

---

# Working Principle

1. DHT22 sensor measures:
   - Temperature
   - Humidity
2. ESP32 reads sensor data.
3. ESP32 connects to WiFi.
4. Data is uploaded to ThingSpeak cloud every 15 seconds.
5. ThingSpeak displays live graphs for monitoring and analysis.

---

# ThingSpeak Fields

| Field | Description |
|---|---|
| Field 1 | Temperature (°C) |
| Field 2 | Humidity (%) |

---

# Libraries Used

- WiFi.h
- ThingSpeak.h
- DHTesp.h

---

# Wokwi Simulation

This project was fully simulated using Wokwi IoT Simulator.

---

# Simulation Images

## Wokwi Simulation

![Wokwi Simulation](Simulation%20Images/wokwi-simulation.png)

---

## ThingSpeak Dashboard

![ThingSpeak Dashboard](Simulation%20Images/thingspeak-dashboard.png)

---

# Serial Monitor Output

Example Output:

```text
Temperature: 24°C
Humidity: 40%

Data uploaded successfully!
```

---

# Applications

- Smart home monitoring
- Weather monitoring systems
- Industrial environmental monitoring
- Greenhouse monitoring
- IoT cloud analytics systems

---

# Future Improvements

- LCD/OLED display integration
- Blynk mobile dashboard
- Email/SMS alert system
- Data logging and analytics
- Multi-sensor monitoring system
- AI-based climate prediction

---

# Author

Thejaswini C

---

# GitHub Repository

ESP32-based IoT temperature and humidity monitoring system using ThingSpeak cloud and Wokwi simulation.
