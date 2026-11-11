
# Project Flow

START
  |
  v
Initialize ESP32 and Sensors
  |
  v
Check Ultrasonic Distance
  |
  v
Vehicle Detected Within 20 cm?
  |
  YES
  |
  v
Display GATE OPEN
  |
  v
IR Sensor Detects Vehicle?
  |
  YES
  |
  v
Display CAR PASSING
  |
  v
Vehicle Leaves IR Sensor?
  |
  YES
  |
  v
Display GATE CLOSED
  |
  v
Wait Until Vehicle Leaves
Ultrasonic Detection Range
  |
  v
Reset System
  |
  v
Repeat
