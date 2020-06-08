#include <Arduino.h>
#define LED_OUT 8

int buttonState =0;

void setup() {
  Serial.begin(9600);
  pinMode(PIN2, INPUT);
  pinMode(LED_OUT, OUTPUT);
}

void loop() {
  buttonState = digitalRead(PIN2);
  if(buttonState == HIGH){
    Serial.println("HIGH");
    digitalWrite(LED_OUT, HIGH);
  }else{
    Serial.println("LOW");
    digitalWrite(LED_OUT, LOW);
  }
}