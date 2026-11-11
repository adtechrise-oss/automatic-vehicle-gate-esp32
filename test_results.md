
# Test Results

## Test 1: No Vehicle
Condition: No vehicle detected.
Expected Output: GATE CLOSED

## Test 2: Vehicle Approaching
Condition: Vehicle detected within 20 cm.
Expected Output: GATE OPEN

## Test 3: Vehicle Passing
Condition: IR sensor detects vehicle (LOW).
Expected Output: CAR PASSING

## Test 4: Vehicle Passed
Condition: IR sensor becomes HIGH.
Expected Output: GATE CLOSED

## Test 5: Vehicle Leaves Detection Range
Condition: Ultrasonic distance exceeds 25 cm.
Expected Result: System resets to State 0.

## Testing Status
Actual readings: Pending
Hardware testing: Pending
