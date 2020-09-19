/*makebot pengbot bluetooth code
 * files : https://github.com/makebot-lab/pengbot
 */
#include <Servo.h>

#include <SoftwareSerial.h>

#include <Otto9.h>
#include <Otto9Humanoid.h>
#include <Otto_gestures9.h>
#include <Otto_mouth9.h>
#include <Otto_sound9.h>

Otto9 Otto;

#define PIN_YL 4 // left leg, servo[0]
#define PIN_YR 5 // right leg, servo[1]
#define PIN_RL 6 // left foot, servo[2]
#define PIN_RR 7 // right foot, servo[3]
#define PIN_Trigger 8 // ultrasound
#define PIN_Echo 9 // ultrasound
#define PIN_Buzzer  13 //buzzer

Servo Left;
Servo Right;

SoftwareSerial BTserial(1,0);

void setup() {
  Otto.init(PIN_YL, PIN_YR, PIN_RL, PIN_RR, true, A6, PIN_Buzzer, PIN_Trigger, PIN_Echo);
  Left.attach(2);
  Right.attach(3);
  Left.write(90);
  Right.write(90);

  BTserial.begin(9600);
}

void loop() {
  if(BTserial.available()) {
    char btread = BTserial.read();

    if(btread == 'A') {
      Left.write(90);
      Right.write(90);
    }
    if(btread == 'B') {
      Left.write(135);
      Right.write(45);
    }
    if(btread == 'C') {
      Left.write(45);
      Right.write(45);
    }
    if(btread == 'D') {
      Left.write(135);
      Right.write(135);
    }
    if(btread == 'F') {
      Left.write(45);
      Right.write(135);
    }
    if(btread == 'H') {
      Otto.sing(S_superHappy);
    }
    if(btread == 'I') {
      Otto.sing(S_sad);
    }
    if(btread == 'J') {
      Otto.sing(S_cuddly);
    }
    if(btread == 'K') {
      Otto.sing(S_surprise);
    }
    if(btread == 'L') {
      Otto.sing(S_sleeping);
    }
  }
}
