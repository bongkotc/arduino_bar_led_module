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


void ledShift(){
    for (int i = 0; i < MAX_LED; i++)
    {
        for (int j = 0; j < MAX_LED; j++)
        {
            digitalWrite(ledPinNo[j], (i&(1<<j)) ?LOW : HIGH); 
        }
        delay(200);
    }
}

void loop()
{
    ledShift();
}