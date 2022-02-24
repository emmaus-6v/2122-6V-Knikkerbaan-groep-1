

#include "Servo.h"


class Valluik {
  public:
    Servo servoPoort1;
    Servo servoPoort2;
    Servo valluik;
    boolean poortIsOpen = false;
    unsigned long valluikTimer = 1000;


    Valluik() {}
    begin(int _pinA, int _pinB) {
      servoPoort1.attach(_pinA);  // attaches the servo on pin 9 to the servo object
      servoPoort1.write(90);
      servoPoort2.attach(_pinB);
      servoPoort2.write(90);
    }



    void update() {
      if (millis() > valluikTimer) {
        if (poortIsOpen) {
          servoPoort1.write(90);
          servoPoort2.write(90);
          poortIsOpen = false;
          valluikTimer = millis() + 1000;
        }
        else {
          servoPoort1.write(0);
          servoPoort2.write(180);
          poortIsOpen = true;
          valluikTimer = millis() + 250;
        }
      }

    }
};
