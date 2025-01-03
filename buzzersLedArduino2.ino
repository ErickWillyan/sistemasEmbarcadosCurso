void setup()
{
    pinMode(6, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(7, INPUT_PULLUP);
}

void loop()
{
    if (digitalRead(7) == HIGH)
    {
        digitalWrite(6, LOW);
        digitalWrite(5, LOW);
    }
    else
    {
        digitalWrite(6, HIGH);
        digitalWrite(5, HIGH);
    }
}
