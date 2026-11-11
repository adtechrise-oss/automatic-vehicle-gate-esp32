
# System Block Diagram

```text
       VEHICLE
          |
          v
  +------------------+
  | Ultrasonic Sensor|
  |    HC-SR04       |
  +------------------+
          |
          v
  +------------------+       +----------------+
  |                  |<------|  IR Sensor     |
  |      ESP32       |       |  GPIO 27       |
  |                  |       +----------------+
  +------------------+
          |
          v
  +------------------+
  |  Serial Monitor  |
  |                  |
  | GATE OPEN        |
  | CAR PASSING      |
  | GATE CLOSED      |
  +------------------+
```

## Description

1. Ultrasonic sensor detects approaching vehicles.
2. IR sensor detects vehicle passage.
3. ESP32 processes both sensor signals.
4. Serial Monitor displays the gate status.

## Output

The system simulates automatic gate operation.
