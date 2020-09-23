#include "Esp.h"

void setup()
{
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    digitalWrite(LED_BUILTIN, LOW); // ON
    delay(500);
    digitalWrite(LED_BUILTIN, HIGH); // OFF
    delay(500);
}