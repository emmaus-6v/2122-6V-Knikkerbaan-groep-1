  #include "Servo.h"


class Servo360 {
  private:
    Servo Servo_360;
    int pin;
    int gradenGedraaid;
    bool isDraaiend = false;

  public:
    Rad(){}
    void begin(int _pin, int _gradenGedraaid,) {
      pin = _pin;
      pinMode(pin, OUTPUT);
      poortServo.attach(pin);
      gradenGedraaid = _gradenGedraaid;
      draai();
    }

    void draai() {
      poortServo.write(gradenDicht);
      isOpen = false;
    }

    void open() {
      poortServo.write(gradenOpen);
      isOpen = true;
    }

    bool getOpen() {
      return isOpen;
    }
};
