//pengbot's dance code

#include <EEPROM.h>

#include  <Servo.h>

Servo L;
Servo R;

void setup() {
  L.attach(2);
  R.attach(3);
  pinMode(13, OUTPUT);
  L.write(90);
  R.write(90);
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
}

void loop() {
  L.write(75);
  R.write(75);
  delay(100);
  L.write(90);
  R.write(90);
  delay(100);
  L.write(105);
  R.write(105);
  delay(100);
  L.write(90);
  R.write(90);
  delay(100);
  L.write(75);
  R.write(105);
  delay(100);
  L.write(90);
  R.write(90);
  delay(100);
  L.write(105);
  R.write(75);
  delay(100);
  L.write(90);
  R.write(90);
  delay(100);
}
