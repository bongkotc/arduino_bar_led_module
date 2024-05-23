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

void ledOnAll(){
    for (int i = 0; i < MAX_LED; i++)
    {
        digitalWrite(ledPinNo[i], LOW); //ON
    }
}

void ledOffAll(){
    for (int i = 0; i < MAX_LED; i++)
    {
        digitalWrite(ledPinNo[i], HIGH); //ON
    }
}

void loop()
{
    ledOnAll();
    delay(1000);
    ledOffAll();
    delay(1000);
}