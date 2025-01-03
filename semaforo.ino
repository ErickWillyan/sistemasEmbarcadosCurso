void setup()
{
    pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(9, OUTPUT);
}

void loop()
{
    digitalWrite(9, HIGH);
    delay(5000);
    digitalWrite(9, LOW);

    for (int i = 0; i < 6; i++)
    {
        digitalWrite(10, HIGH);
        delay(300);
        digitalWrite(10, LOW);
        delay(300);
    }

    digitalWrite(11, HIGH);
    delay(4000);
    digitalWrite(11, LOW);
}
