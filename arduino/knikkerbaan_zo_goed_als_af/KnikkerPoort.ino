// Knikkerpoort is een klasse die de functionaliteit
// verzorgt van een servo die knikkers doorlaat / tegenhoudt
/*
#include "Servo.h"


class KnikkerPoort {
  private:
    Servo poortServo;
    int pin = 3;
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
*/



#include "Servo.h"

class BovenPoort {
  public:
    Servo servoBoven;
    boolean poortIsOpen = false;
    unsigned long bovenTimer = 1000;
    bool isOpen = false;
      
    BovenPoort(){}
    
    begin(int _pin) {
      servoBoven.attach(_pin);  // attaches the servo on pin 9 to the servo object
      servoBoven.write(0);
    }

    void update() {
      if (millis() > bovenTimer) {
        if (poortIsOpen) {
          servoBoven.write(90);
          poortIsOpen = false;
          bovenTimer = millis() + 250;
        }
        else {
          servoBoven.write(180);
          poortIsOpen = true;
          bovenTimer = millis() + 250;
        }
      }
    }
};
