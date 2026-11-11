
# Wiring Connections

## 1. Ultrasonic Sensor (HC-SR04)

| Sensor Pin | ESP32 Pin |
|---|---|
| VCC | 5V |
| GND | GND |
| TRIG | GPIO 18 |
| ECHO | GPIO 19 through voltage divider |

## 2. IR Sensor

| Sensor Pin | ESP32 Pin |
|---|---|
| VCC | 3.3V (if supported) |
| GND | GND |
| OUT | GPIO 27 |

## 3. Voltage Divider

Used to reduce the HC-SR04 ECHO output from 5V to a safe ESP32 input voltage.

- 1kΩ resistor
- 2kΩ resistor

Connections:
- ECHO → 1kΩ → GPIO 19
- GPIO 19 → 2kΩ → GND

## 4. Serial Monitor

- Baud Rate: 115200
- Output: GATE OPEN / GATE CLOSED

## Important

All components must share common GND.
No physical gate motor is used.
