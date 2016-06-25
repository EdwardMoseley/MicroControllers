#include <Servo.h> //load servo library

Servo myServo; //initialize myServo object

void setup() {
  myServo.attach(13);//attach servo controller to pin 13
}

void loop() {
  myServo.write(0);//position motor at 0 degrees
  delay(1000); //wait 1000milliseconds
  myServo.write(180);//position motor to 180 degrees
  delay(3000);//wait 3 seconds
}
