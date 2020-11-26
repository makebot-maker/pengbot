/*makebot pengbot library
 * makebot homepage(English) : http://makebot.mystrikingly.com/
 * makebot homepage(Korean) : https://makebot.modoo.at
 * files : https://github.com/makebot-lab/pengbot
 * made by WONDAEHAN.
 */
#include <Pengbot.h>
#include <SoftwareSerial.h>

Pengbot Pengbot;

SoftwareSerial BTserial(0, 1);

void setup() {
  BTserial.begin(9600);
  Pengbot.ready();
  Pengbot.stop();
}

void loop() {
  if(BTserial.available()) {
    char btread = BTserial.read();

    if(btread == 'A') {
      Pengbot.stop();
    }
    if(btread == 'B') {
      Pengbot.forward(45);
    }
    if(btread == 'C') {
      Pengbot.turnleft(45);
    }
    if(btread == 'D') {
      Pengbot.turnright(45);
    }
    if(btread == 'E') {
      Pengbot.backward(45);
    }
    if(btread == 'F') {
      Pengbot.sound(6);
    }
    if(btread == 'G') {
      Pengbot.sound(2);
    }
    if(btread == 'H') {
      Pengbot.sound(1);
    }
    if(btread == 'I') {
      Pengbot.sound(4);
    }
    if(btread == 'J') {
      Pengbot.sound(5);
    }
  }
}
