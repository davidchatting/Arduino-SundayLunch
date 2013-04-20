/*
  David Chatting - david@davidchatting.com
  20th April 2013
  ---
  For Arduino and Sunday Lunch - 21st April 2013
  ---
  LED and 220 ohm resistor between Arduino pin 11 and GND
  ---
  Adapted from http://arduino.cc/en/Tutorial/blink
*/

void setup() {
  pinMode(11, OUTPUT);     
}

void loop() {
  analogWrite(11,128);  
  delay(1000);
  
  analogWrite(11,255);  
  delay(1000);
  
  analogWrite(11,0);  
  delay(1000);
}
