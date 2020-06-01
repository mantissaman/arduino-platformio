#include <Arduino.h>


int initialize();

void setup() {
  Serial.begin(9600);
  Serial.println("Initalizing...");
  initialize();
}

void loop() {
  // put your main code here, to run repeatedly:
}

int initialize(){
  Serial.println("Initialized");
}