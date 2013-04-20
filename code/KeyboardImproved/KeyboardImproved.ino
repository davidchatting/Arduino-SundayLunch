/*
  David Chatting - david@davidchatting.com
  20th April 2013
  ---
  For Arduino and Sunday Lunch - 21st April 2013
  ---
  **ONLY FOR THE ARDUINO LEONARDO***
  ---
  Button between 5V and Arduino pin 4
  100K ohm resistor between Arduino pin 4 and GND
  ---
  Adapted from http://www.arduino.cc/en/Tutorial/KeyboardButton
*/

boolean buttonState=LOW;
boolean previousButtonState=LOW;

void setup() {
  Keyboard.begin(); 
  
  pinMode(4, INPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  buttonState=digitalRead(4);
  
  if(buttonState == HIGH && previousButtonState == LOW){
    digitalWrite(11, HIGH);
    Keyboard.print("Hello!");
  }
  else{
    digitalWrite(11, LOW);
  }
  
  previousButtonState=buttonState;
}
