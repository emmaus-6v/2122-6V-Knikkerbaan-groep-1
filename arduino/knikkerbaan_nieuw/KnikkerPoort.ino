// Knikkerpoort is een klasse die de functionaliteit
// verzorgt van een servo die knikkers doorlaat / tegenhoudt

#include "Servo.h"


class opvangen {
  private:
    Servo poortServo;
    int pin = 9;
    int gradenOpen;
    int gradenDicht;
    bool isOpen = false;

  public:
    KnikkerPoort(){}
    void begin(int _pin, int _gradenOpen, int _gradenDicht) {
      pin = _pin;
      pinMode(pin, OUTPUT);
      poortServo.attach(pin);
      gradenOpen = _gradenOpen;
      gradenDicht = _gradenDicht;
      sluit();
    }

    void sluit() {
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
