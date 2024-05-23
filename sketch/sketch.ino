#include <Arduino.h>

// LED Active Low
#define MAX_LED 8

const int ledPinNo[MAX_LED] = {2, 3, 4, 5, 6, 7, 8, 9}; // LED Output Pins
void setup()
{
    for (int i = 0; i < MAX_LED; i++)
    {
        pinMode(ledPinNo[i], OUTPUT);    // Init Output
        digitalWrite(ledPinNo[i], HIGH); // Init Value
    }
}

void ledAllOn(){
    for (int i = 0; i < MAX_LED; i++)
    {
        digitalWrite(ledPinNo[i], LOW); //ON
    }
}

void ledAllOff(){
    for (int i = 0; i < MAX_LED; i++)
    {
        digitalWrite(ledPinNo[i], HIGH); //OFF
    }
}

void loop()
{
    ledAllOn();
    delay(1000);//Delay 1000 ms
    ledAllOff();
    delay(1000);//Delay 1000 ms
}