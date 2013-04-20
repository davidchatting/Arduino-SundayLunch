/*
  David Chatting - david@davidchatting.com
  20th April 2013
  ---
  For Arduino and Sunday Lunch - 21st April 2013
  ---
  LDR between 5V and Arduino pin A0
  220 ohm resistor between Arduino pin A0 and GND
  LED and 220 ohm resistor between Arduino pin 11 and GND
  ---
  Adapted from http://arduino.cc/en/Tutorial/AnalogInput
*/

int ldrValue;

void setup() {
  Serial.begin(9600);  
  
  pinMode(11, OUTPUT);    
}

void loop() {
  ldrValue=analogRead(A0);
  Serial.println(ldrValue);
  
  digitalWrite(11, HIGH);
  delay(ldrValue);
  digitalWrite(11, LOW);
  delay(ldrValue);
}
