/*
  David Chatting - david@davidchatting.com
  20th April 2013
  ---
  For Arduino and Sunday Lunch - 21st April 2013
  ---
  100K ohm resistor between pins 9 & 8, attach sensor lead to pin 8
  LED and 220 ohm resistor between Arduino pin 11 and GND
  ---
  Adapted from Paul Badger's demo sketch (2008)
*/

#include <CapacitiveSensor.h>

CapacitiveSensor   sensor = CapacitiveSensor(9,8);

void setup() {
   Serial.begin(9600);
   pinMode(11, OUTPUT);
}

void loop() {
    long value =  sensor.capacitiveSensor(30);
    Serial.println(value);

    /*
    if(value>100){
      digitalWrite(11, HIGH);
    }
    else{
      digitalWrite(11, LOW);
    }
    */

    delay(200);
}
