#define TRIG 18
#define ECHO 19
#define IR_PIN 27

int gateState = 0;

void setup()
{
  Serial.begin(115200);

  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(IR_PIN, INPUT);

  Serial.println("GATE CLOSED");
}

void loop()
{
  // Ultrasonic measurement
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  long duration = pulseIn(ECHO, HIGH, 30000);

  float distance = duration * 0.0343 / 2;

  int irValue = digitalRead(IR_PIN);

  // STATE 0: Wait for approaching object
  if (gateState == 0 && duration > 0 && distance < 20)
  {
    gateState = 1;
    Serial.println("GATE OPEN");
  }

  // STATE 1: Wait for IR detection
  else if (gateState == 1 && irValue == LOW)
  {
    gateState = 2;
    Serial.println("CAR PASSING");
  }

  // STATE 2: Wait for object to leave IR sensor
  else if (gateState == 2 && irValue == HIGH)
  {
    gateState = 3;
    Serial.println("GATE CLOSED");
  }

  // STATE 3: Wait until object leaves ultrasonic range
  else if (gateState == 3 && (duration == 0 || distance > 25))
  {
    gateState = 0;
  }

  delay(100);
}