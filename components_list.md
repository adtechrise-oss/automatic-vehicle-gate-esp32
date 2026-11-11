
# Components List

## Project: Automatic Gate Automation System

| No. | Component | Quantity | Purpose |
|---|---|---|---|
| 1 | ESP32 Development Board | 1 | Main controller |
| 2 | HC-SR04 Ultrasonic Sensor | 1 | Distance detection |
| 3 | IR Obstacle Sensor | 1 | Object detection |
| 4 | Servo Motor | 1 | Gate movement |
| 5 | 5V Power Supply | 1 | Servo power |
| 6 | 1kΩ Resistor | 1 | Voltage divider |
| 7 | 2kΩ Resistor | 1 | Voltage divider |
| 8 | Breadboard | 1 | Circuit assembly |
| 9 | Jumper Wires | 1 set | Connections |

## Pin Configuration

| Component | ESP32 GPIO |
|---|---|
| Ultrasonic TRIG | GPIO 18 |
| Ultrasonic ECHO | GPIO 19 |
| IR Sensor OUT | GPIO 27 |
| Servo Signal | GPIO 25 |

## Important Notes

- HC-SR04 ECHO produces 5V. Use a voltage divider before connecting to ESP32.
- Servo may require a separate 5V supply.
- Connect all grounds together (common GND).
