  #include "Servo.h"

class valluik {
Servo servoPoort1;
Servo servoPoort2;
boolean poortIsOpen = false;
unsigned long valluikTimer = 1000;

void setup(){
servoPoort1.attach(10);  // attaches the servo on pin 9 to the servo object
servoPoort2.attach(9);

servoPoort1.write(0);
servoPoort2.write(180);

}

void loop() {
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