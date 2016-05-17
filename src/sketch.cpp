// Sample main.cpp file. Blinks the built-in LED, sends a message out
// USART2, and turns on PWM on pin 2.

#include <wirish/wirish.h>

#define PWM_PIN  2

void setup() {
    /* Set up the LED to blink  */
    pinMode(BOARD_LED_PIN, OUTPUT);

    /* Turn on PWM on pin PWM_PIN */
    //pinMode(PWM_PIN, PWM);
    //pwmWrite(PWM_PIN, 0x8000);

    /* Send a message out USART2  */
    //Serial2.begin(9600);
    //Serial2.println("Hello world!");

    /* Send a message out the usb virtual serial port  */
    //SerialUSB.println("Hello!");
}

void loop() {
    toggleLED();
    delay(100);
}
