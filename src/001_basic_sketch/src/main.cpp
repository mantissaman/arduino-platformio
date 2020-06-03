#include <Arduino.h>

int initialize(int, int);

void setup()
{
  Serial.begin(9600);
  Serial.println("Initalizing...");
  int val = initialize(1, 3);
  Serial.println("Initialized with : " + String(val));

  Serial.println("--- Variable type: Size in SRAM (bytes) ---");

  Serial.print("uint8_t: ");
  Serial.println(sizeof(uint8_t));

  Serial.print("boolean: ");
  Serial.println(sizeof(boolean));

  Serial.print("char: ");
  Serial.println(sizeof(char));

  Serial.print("unsigned char: ");
  Serial.println(sizeof(unsigned char));

  Serial.print("byte: ");
  Serial.println(sizeof(byte));

  Serial.print("int: ");
  Serial.println(sizeof(int));

  Serial.print("unsigned int: ");
  Serial.println(sizeof(unsigned int));

  Serial.print("word: ");
  Serial.println(sizeof(word));

  Serial.print("long: ");
  Serial.println(sizeof(long));

  Serial.print("unsigned long: ");
  Serial.println(sizeof(unsigned long));

  Serial.print("float: ");
  Serial.println(sizeof(float));

  Serial.print("double: ");
  Serial.println(sizeof(double));
}

void loop()
{
  // put your main code here, to run repeatedly:
}

int initialize(int a, int b)
{
  Serial.println("Parameter a: " + String(a));
  Serial.println("Parameter b: " + String(b));
  Serial.println("Initialized");
  return a + b;
}
