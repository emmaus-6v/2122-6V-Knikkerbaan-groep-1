#include "Servo.h"

class Servo360 {
  public:
    Servo servo360;
    int molenSnelheid = 85;

    Servo360() {}

    begin(int _pin) {
      servo360.attach(_pin);  // attaches the servo on pin 9 to the servo object
      servo360.write(molenSnelheid);
    }
    

};
