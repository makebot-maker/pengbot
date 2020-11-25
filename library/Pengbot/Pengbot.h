/* makebot pengbot library
 * makebot homepage(English) : http://makebot.mystrikingly.com/
 * makebot homepage(Korean) : https://makebot.modoo.at
 * files : https://github.com/makebot-lab/pengbot
 * made by WONDAEHAN.
 */
#ifndef Pengbot_h
#define Pengbot_h

#include <Servo.h>
#include <Oscillator.h>
#include <US.h>
#include "Arduino.h"

class Pengbot {
  public:
    void ready();
    void attachservo(int x);
    void detachservo(int x);
    float distance();
    void stop();
    void forward(int speed);
    void backward(int speed);
    void turnleft(int speed);
    void turnright(int speed);
    void left(int angle);
    void right(int angle);
    void sound(int soundnum);
  private:
    Oscillator servo[2];
    US us;
};

#endif
