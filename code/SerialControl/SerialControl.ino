/*
  David Chatting - david@davidchatting.com
  20th April 2013
  ---
  For Arduino and Sunday Lunch - 21st April 2013
  ---
  LED and 220 ohm resistor between Arduino pin 11 and GND
  LED and 220 ohm resistor between Arduino pin 12 and GND
*/

void setup() {
  Serial.begin(9600);
  
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);     
}

void loop() {
  if(Serial.available()>0){
    byte b=Serial.read();
    
    if(b=='a'){
      digitalWrite(11, HIGH);
    }
    else if(b=='b'){
      digitalWrite(12, HIGH);
    }
    else{
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
    }
  }
}
