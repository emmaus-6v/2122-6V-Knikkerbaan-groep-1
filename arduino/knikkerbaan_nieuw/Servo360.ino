  #include "Servo.h"



// dit is de nieuwe code

Servo servo360;  // create servo object to control a servo
// twelve servo objects can be created on most boards
Servo servoOpvang;
Servo servoPoort1;
Servo servoPoort2;

int molenSnelheid = 85;    // variable to store the servo position
int pos2;    // variable to store the servo position
int pos3;    // variable to store the servo position
int pos4;    // variable to store the servo position
boolean poortIsOpen = false;
boolean ledIsAan = false;
unsigned long valluikTimer = 1000;
unsigned long ledTimer = 100;


void setup() {
  pinMode(13, OUTPUT);
  servo360.attach(12);  // attaches the servo on pin 9 to the servo object
  servoOpvang.attach(11);  // attaches the servo on pin 9 to the servo object
  servoPoort1.attach(10);  // attaches the servo on pin 9 to the servo object
  servoPoort2.attach(9);  // attaches the servo on pin 9 to the servo object

// poorten zijn dicht
  servoPoort1.write(0);
  servoPoort2.write(180);

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

  
  

  
