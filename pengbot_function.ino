/*makebot pengbot robotcoding file
 * forward => Left:180, Right:0
 * backward => Left:0, Right:180
 * left => Left:180, Right:180
 * Right => Left:0, Right:0
 * Change speed : ex) forward speed=>45(0~90), Left:135(90+45), Right:45(90-45)
 * stop => Left:90, Right:90
 * ------function------
 * (0<=speed<=90)
 * forward => forward(speed);
 * backward => backward(speed);
 * left => left(speed);
 * right => right(speed);
 * usermotion => usermotion(Left, Right);
 */
#include <Servo.h>

Servo pengbotLeft;
Servo pengbotRight;

void forward(int pengbotspeed) {
  pengbotLeft.write(90 + pengbotspeed);
  pengbotRight.write(90 - pengbotspeed);
}

void backward(int pengbotspeed) {
  pengbotLeft.write(90 - pengbotspeed);
  pengbotRight.write(90 + pengbotspeed);
}

void left(int pengbotspeed) {
  pengbotLeft.write(90 + pengbotspeed);
  pengbotRight.write(90 + pengbotspeed);
}

void right(int pengbotspeed) {
  pengbotLeft.write(90 - pengbotspeed);
  pengbotRight.write(90 - pengbotspeed);
}

void usermotion(int Left, int Right) {
  pengbotLeft.write(Left);
  pengbotRight.write(Right);
}

void setup() {
  pengbotLeft.attach(2);
  pengbotRight.attach(3);
  //input code under this line
  
}

void loop() {
  //input code under this line
  
}
