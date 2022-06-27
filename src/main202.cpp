#include <Arduino.h>
#define GREEN_LED 13
#define TR1 5
#define TR2 6



void setup() {
  // put your setup code here, to run once:
pinMode(TR1, OUTPUT);  
pinMode(TR2, OUTPUT);
pinMode(GREEN_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(GREEN_LED, HIGH);
  PORTD = B00000000;  
  for (int i =0; i<15; i++)
  {
    PORTD = B10000000;
    delayMicroseconds(15);
    PORTD = B01000000;
    delayMicroseconds(15);
  }
PORTD = B00000000;  
 digitalWrite(GREEN_LED, LOW);  
delay(1000); 
}