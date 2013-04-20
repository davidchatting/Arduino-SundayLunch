/*
  David Chatting - david@davidchatting.com
  20th April 2013
  ---
  For Arduino and Sunday Lunch - 21st April 2013
  ---
  Button between 5V and Arduino pin 4
  100K ohm resistor between Arduino pin 4 and GND
  LED and 220 ohm resistor between Arduino pin 11 and GND
  ---
  Adapted from http://arduino.cc/en/Tutorial/Button
*/

void setup() {
  Serial.begin(9600);  
  
  pinMode(4, INPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  boolean buttonState=digitalRead(4);
  Serial.println(buttonState);
  
  if(buttonState == HIGH){
    digitalWrite(11, HIGH);
  }
  else{
    digitalWrite(11, LOW);
  }
  delay(50);
}
