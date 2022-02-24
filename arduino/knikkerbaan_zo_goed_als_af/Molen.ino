

#include "Servo.h"

class MolenPoort {
  public:
    Servo servoMolen;
    boolean poortIsOpen = false;
    unsigned long molenTimer = 1000;
      
    MolenPoort(){}
    
    begin(int _pin) {
      servoMolen.attach(_pin);  // attaches the servo on pin 9 to the servo object
      servoMolen.write(0);
    }

    void update() {
      if (millis() > molenTimer) {
        if (poortIsOpen) {
          servoMolen.write(110);
          poortIsOpen = false;
          molenTimer = millis() + 250;
        }
        else {
          servoMolen.write(180);
          poortIsOpen = true;
          molenTimer = millis() + 250;
        }
      }
    }
};
