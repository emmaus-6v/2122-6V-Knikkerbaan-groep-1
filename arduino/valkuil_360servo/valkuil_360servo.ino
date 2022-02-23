

#include <Servo.h>

Servo servo360;  // create servo object to control a servo
// twelve servo objects can be created on most boards
Servo servoOpvang;
Servo servoMolen;
Servo servoPoort1;
Servo servoPoort2;

int molenSnelheid = 85;    // variable to store the servo position
boolean poortIsOpen = false;
unsigned long valluikTimer = 1000;
unsigned long molenTimer = 1000;



void setup() {
  servo360.attach(12);  // attaches the servo on pin 9 to the servo object
  servoOpvang.attach(8);  // attaches the servo on pin 9 to the servo object
  servoMolen.attach(11);  // attaches the servo on pin 9 to the servo object
  servoPoort1.attach(10);  // attaches the servo on pin 9 to the servo object
  servoPoort2.attach(9);  // attaches the servo on pin 9 to the servo object

// poorten zijn dicht
  servoPoort1.write(0);
  servoPoort2.write(180);
  servoMolen.write(90);
  servoOpvang.write(180); // weet niet zeker of 180 klopt, kan ik later nog checken.

  // 360 servo starten
  servo360.write(molenSnelheid);

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
  
  // kunnen niet twee loops samen dus oplossing hiervoor nog bedenken
void loop(){
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
