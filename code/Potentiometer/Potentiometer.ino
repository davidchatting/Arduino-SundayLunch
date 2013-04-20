/*
  David Chatting - david@davidchatting.com
  20th April 2013
  ---
  For Arduino and Sunday Lunch - 21st April 2013
  ---
  Potentiomter between 5V (left pin), Arduino pin A0 (centre pin) and GND (right pin)
  LED and 220 ohm resistor between Arduino pin 11 and GND
  ---
  Adapted from http://arduino.cc/en/Tutorial/AnalogInput
*/

int potValue;

void setup() {
  Serial.begin(9600);  
  
  pinMode(11, OUTPUT);    
}

void loop() {
  potValue=analogRead(A0);
  Serial.println(potValue);
  
  digitalWrite(11, HIGH);
  delay(potValue);
  digitalWrite(11, LOW);
  delay(potValue);
}
