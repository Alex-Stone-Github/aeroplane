#include <Servo.h>

Servo rudder;

void setup() {
  pinMode(3, OUTPUT);
  rudder.attach(9);
}
int angle = 0;
void loop() {
  // digitalWrite(3, HIGH);
  // delay(5000);
  // digitalWrite(3, LOW);
  // delay(2000);
  rudder.write(angle);
  delay(1000);
  angle += 15;
  if (angle > 180) {
    angle = 0;
  }
}
