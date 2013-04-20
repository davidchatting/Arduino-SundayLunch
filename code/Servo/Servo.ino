/*
  David Chatting - david@davidchatting.com
  20th April 2013
  ---
  For Arduino and Sunday Lunch - 21st April 2013
  ---
  servo red wire to 5V
  servo brown wire to GND
  servo orange to to Arduino pin 9
*/

#include <Servo.h> 

Servo theServo;

void setup() {
  Serial.begin(9600);
  
  theServo.attach(9);    
}

void loop() {
  theServo.write(0);
  delay(1000);
  theServo.write(90);
  delay(1000);
  theServo.write(180);
  delay(1000);
}
