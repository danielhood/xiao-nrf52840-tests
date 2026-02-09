/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include <Arduino.h>

int count;

void setPinOutput(int pin, int initialState)
{
  pinMode(pin, OUTPUT);
  digitalWrite(pin, initialState);
}
void setup()
{
  count = 0;

  Serial.begin(115200);

  // Initialize LED pins as output (onboard LED on XIAO HIGH=OFF)
  setPinOutput(LEDR, HIGH);
  setPinOutput(LEDG, HIGH);
  setPinOutput(LEDB, HIGH);

  // Initialize GPIO pins as output
  setPinOutput(0, LOW);
  setPinOutput(1, LOW);
  setPinOutput(2, LOW);
  setPinOutput(3, LOW);
}

void flashPin(int pin)
{
  digitalWrite(pin, HIGH);
  delay(100);
  digitalWrite(pin, LOW);
  delay(100);
}

void flashRGB()
{
  // On XIAO nrf52840, LOW turns LED ON
  digitalWrite(LEDR, LOW);
  delay(100);
  digitalWrite(LEDR, HIGH);
  delay(100);

  digitalWrite(LEDG, LOW);
  delay(100);
  digitalWrite(LEDG, HIGH);
  delay(100);

  digitalWrite(LEDB, LOW);
  delay(100);
  digitalWrite(LEDB, HIGH);
  delay(100);
}

void flashGPIO()
{
  flashPin(0);
  flashPin(1);
  flashPin(2);
  flashPin(3);
}

void loop()
{
  Serial.print("Trigger sequence #");
  Serial.println(++count); 

  flashGPIO();
  flashRGB();

  delay(500);
}
