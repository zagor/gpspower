#include <avr/sleep.h>

void setup()
{
    pinMode(13, OUTPUT);
    pinMode(2, OUTPUT);
    
    digitalWrite(13, HIGH);
    digitalWrite(2, LOW);
    delay(3000);
    digitalWrite(13, LOW);
    digitalWrite(2, HIGH);

}

void loop()
{
    sleep_enable();
    set_sleep_mode(SLEEP_MODE_PWR_DOWN);
    sleep_cpu();
}
