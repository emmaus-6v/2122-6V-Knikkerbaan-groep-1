  #include "Servo.h"

class servo360 {
Servo servo360; 
int molenSnelheid = 85; 

void setup(){
  servo360.attach(12);  // attaches the servo on pin 9 to the servo object
  servo360.write(molenSnelheid);
}

};