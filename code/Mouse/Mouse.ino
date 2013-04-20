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
  Adapted from http://arduino.cc/en/Tutorial/KeyboardAndMouseControl
  Fancy maths from http://en.wikipedia.org/wiki/Figure-eight_knot_(mathematics)
*/

boolean buttonState=LOW;
boolean previousButtonState=LOW;

void setup() {
  Mouse.begin(); 
  
  pinMode(4, INPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  buttonState=digitalRead(4);
  
  if(buttonState == HIGH && previousButtonState == LOW){
    digitalWrite(11, HIGH);
    
    float x,y;
    for(float t=0;t<(2*PI);t+=0.01f){
      x=(2+cos(2*t))*sin(3*t);
      y=(2+cos(2*t))*cos(3*t);
      Mouse.move(x,y,0);
    }
  }
  else{
    digitalWrite(11, LOW);
  }
  
  previousButtonState=buttonState;
}
