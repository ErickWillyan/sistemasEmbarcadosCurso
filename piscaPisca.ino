// Link para o projeto: https://www.tinkercad.com/things/jMHzSFOcfqW-semaforos-e-leds/

void setup()
{
    pinMode(0, OUTPUT);
    pinMode(1, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
}

void loop()
{
    for (int i = 0; i <= 7; i++)
    {
        digitalWrite(i, HIGH);
        delay(50);
        digitalWrite(i, LOW);
    }
    for (int i = 7; i >= 0; i--)
    {
        digitalWrite(i, HIGH);
        delay(50);
        digitalWrite(i, LOW);
    }
}