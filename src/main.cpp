#include <Arduino.h>

void setup()
{
    Serial.begin(115200);

    while (!Serial)
    {
        delay(10);
    }

    Serial.println();
    Serial.println("================================");
    Serial.println("ESP32 Self-Aware Boot");
    Serial.println("================================");
}

void loop()
{
    delay(1000);
}
