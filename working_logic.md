
# Working Logic

## State 0 - Vehicle Detection
Ultrasonic sensor detects a vehicle within 20 cm.
Serial Monitor displays GATE OPEN.

## State 1 - Vehicle Passing
IR sensor detects the vehicle (LOW).
Serial Monitor displays CAR PASSING.

## State 2 - Gate Closing
IR sensor becomes HIGH after the vehicle passes.
Serial Monitor displays GATE CLOSED.

## State 3 - System Reset
System waits until the vehicle leaves the ultrasonic detection range.
Then the system returns to State 0.

## State Management
The project uses four states:
0, 1, 2 and 3.

## Output
All gate operations are simulated through ESP32 Serial Monitor at 115200 baud.
