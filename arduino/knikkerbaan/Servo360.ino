  #include "Servo.h"


class Servo360 {
  private:
    Servo servo_360;
    int pin;
    int gradenGedraaid;
    bool isDraaiend = false;

  public:
    Rad(){}
    void begin(int _pin, int _gradenGedraaid,) {
      pin = _pin;
      pinMode(pin, OUTPUT);
      servo_360.attach(pin);
      gradenGedraaid = _gradenGedraaid;
      draai();
    }

    void draai() {
      servo_360.write(gradenGedraaid);
      isDraaiend = true;
    }

    bool getOpen() {
      return isOpen;
    }
};
