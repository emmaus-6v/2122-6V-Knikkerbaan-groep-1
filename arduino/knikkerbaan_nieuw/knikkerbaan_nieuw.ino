

//declareer hier je globale constanten:

const int BOVEN_POORT_PIN = 9;
// pin van servo die bovenste poort regelt
const int LEEGLOOP_TIJD = 5000;   // tijd die knikkers nodig hebben om na het
// sluiten van de poort langs alle sensors te komen

// const int SERVO_RAD_PIN = #;        // pin van servo/motor? die rad bestuurd
// const int SERVO_FLIPPER_LINKS = #;  // pin van servo die linker flipper regelt
// const int SERVO_FLIPPER_RECHTS = #; // pin van servo die rechter flipper regelt

char WIFI_NETWERK[] = "informatica-fast-wifi";
char WIFI_WACHTWOORD[] = "informatica-rocks!";
char SERVER_DOMEINNAAM[] = "3000-emmaus6v-21226vknikkerba-3paghfcpjtz.ws-eu33.gitpod.io";    // domeinnaam van gitpod-server, zoals 3000-lavendel-bla-bla.gitpod.io

const int TELLER_A_PIN = 5;       // pin waarop IR-sensor voor Teller A is aangesloten



#include "Servo.h"


class MolenPoort {
  public:
    Servo servoMolen;
    boolean poortIsOpen = false;
    unsigned long molenTimer = 1000;
      
    MolenPoort(){}
    
    begin(int _pin) {
      servoMolen.attach(_pin);  // attaches the servo on pin 9 to the servo object
      servoMolen.write(90);
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
          molenTimer = millis() + 500;
        }
      }
    }
};



class Valluik {
  public:
    Servo servoPoort1;
    Servo servoPoort2;
    boolean poortIsOpen = false;
    unsigned long valluikTimer = 1000;


    Valluik() {}
    begin(int _pinA, int _pinB) {
      servoPoort1.attach(_pinA);  // attaches the servo on pin 9 to the servo object
      servoPoort1.write(0);
      servoPoort2.attach(_pinB);
      servoPoort2.write(180);

    }



    void update() {
      if (millis() > valluikTimer) {
        if (poortIsOpen) {
          servoPoort1.write(0);
          servoPoort2.write(180);
          poortIsOpen = false;
          valluikTimer = millis() + 1000;
        }
        else {
          servoPoort1.write(90);
          servoPoort2.write(90);
          poortIsOpen = true;
          valluikTimer = millis() + 250;
        }
      }

    }
};
