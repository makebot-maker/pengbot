/*makebot pengbot library
 * makebot homepage(English) : http://makebot.mystrikingly.com/
 * makebot homepage(Korean) : https://makebot.modoo.at
 * files : https://github.com/makebot-lab/pengbot
 * made by WONDAEHAN.
 */
#include "Arduino.h"
#include "Pengbot.h"
#include <Servo.h>

//servos
void Pengbot::attachservo(int x) {
  servo[x].attach(x + 2);
}

void Pengbot::detachservo(int x) {
  servo[x].attach(x + 2);
  servo[x].detach();
}

//sensor
float Pengbot::distance(){

  return us.read();
}

//Pengbot
void Pengbot::ready() {  //ready
  for(int x = 0; x < 2; x++) {
    attachservo(x);
    delay(30);
  }
  noTone(13);
  us.init(A0, A1);
  home();
}
