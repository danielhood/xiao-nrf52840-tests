/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include <mbed.h>

int count;

// Define an Mbed DigitalOut object for the built-in LED (LED1 is common on Mbed boards)
// mbed::DigitalOut myled(p0); 
mbed::DigitalOut ledR(LED_RED); 
mbed::DigitalOut ledG(LED_GREEN); 
mbed::DigitalOut ledB(LED_BLUE); 


void setup()
{
  Serial.begin(115200);
  // Wait for serial port to be opened (useful for boards with native USB serial)
  //while (!Serial) {} 

  count = 0;
}

void loop()
{

  Serial.print("Trigger sequence #");
  Serial.println(++count); 

  ledR.write(0);
  rtos::ThisThread::sleep_for(100);
  ledR.write(1); 
  rtos::ThisThread::sleep_for(100); 

  ledG.write(0);
  rtos::ThisThread::sleep_for(100);
  ledG.write(1); 
  rtos::ThisThread::sleep_for(100); 

  ledB.write(0);
  rtos::ThisThread::sleep_for(100);
  ledB.write(1); 
  rtos::ThisThread::sleep_for(100); 

  rtos::ThisThread::sleep_for(500); 
}
