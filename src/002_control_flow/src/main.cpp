#include <Arduino.h>

int counter =0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if(counter < 10){
    Serial.print(counter);
    Serial.print(", ");
    Serial.println("Counter is smaller than 10");
  } else{
    Serial.print(counter);
    Serial.print(", ");
    Serial.println("Counter is notsmaller than 10")   ;
  }
  delay(500);
  counter ++;
}