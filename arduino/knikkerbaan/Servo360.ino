  #include "Servo.h"


class Servo360 {
  private:
    Servo servo_360;
    int pin;
    int snelheid;
    bool isDraaiend = false;

  public:
    Rad(){}
    void begin(int _pin, int _snelheid,) {
      pin = _pin;
      pinMode(pin, OUTPUT);
      servo_360.attach(pin);
      snelheid = _snelheid;
      draai();
    }

    void draai() {
      servo_360.write(snelheid);
      isDraaiend = true;
    }

    bool getOpen() {
      return isOpen;
    }
};
