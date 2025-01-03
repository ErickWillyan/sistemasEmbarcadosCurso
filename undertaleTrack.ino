// Link para o projeto: https://www.tinkercad.com/things/fujJM6tNmik-undertaletrack/

#define BOTAO 10
#define Buzzer 9

void setup()
{
    pinMode(BOTAO, INPUT_PULLUP);
    pinMode(Buzzer, OUTPUT);
}

void parte1()
{
    // 1
    tone(Buzzer, 746.59);
    delay(250);

    // 2
    tone(Buzzer, 704.88);
    delay(250);

    // 3
    tone(Buzzer, 627.79);
    delay(250);

    // 4
    tone(Buzzer, 559.15);
    delay(250);

    // 5
    tone(Buzzer, 627.79);
    delay(250);

    // 6
    tone(Buzzer, 470.4);
    delay(250);

    // 7
    tone(Buzzer, 528);
    delay(500);

    // 8
    tone(Buzzer, 419);
    delay(500);
}
void parte2()
{
    // 1
    tone(Buzzer, 627.79);
    delay(250);

    // 2
    tone(Buzzer, 704.88);
    delay(250);

    // 3
    tone(Buzzer, 746.59);
    delay(500);

    // 4
    tone(Buzzer, 837.94);
    delay(500);

    // 5
    tone(Buzzer, 1118.30);
    delay(500);

    // 6
    tone(Buzzer, 940.90);
    delay(1500);
}

void parte3()
{
    // 1
    tone(Buzzer, 313.90);
    delay(250);

    // 2
    tone(Buzzer, 352.40);
    delay(250);

    // 3
    tone(Buzzer, 373.30);
    delay(500);

    // 4
    tone(Buzzer, 352.40);
    delay(500);

    // 5
    tone(Buzzer, 279.60);
    delay(500);

    // 6
    tone(Buzzer, 313.90);
    delay(1500);
}

void parte4()
{
    // 1
    tone(Buzzer, 837.94);
    delay(250);

    // 2
    tone(Buzzer, 746.59);
    delay(250);

    // 3
    tone(Buzzer, 665.28);
    delay(250);

    // 4
    tone(Buzzer, 627.79);
    delay(250);

    // 5
    tone(Buzzer, 559.15);
    delay(250);

    // 6
    tone(Buzzer, 665.28);
    delay(250);

    // 7
    tone(Buzzer, 627.79);
    delay(1000);

    // 8
    tone(Buzzer, 470.40);
    delay(250);

    // 9
    tone(Buzzer, 559.15);
    delay(250);
}
void parte4_2()
{
    // 1
    tone(Buzzer, 837.94);
    delay(250);

    // 2
    tone(Buzzer, 746.59);
    delay(250);

    // 3
    tone(Buzzer, 665.28);
    delay(250);

    // 4
    tone(Buzzer, 627.79);
    delay(250);

    // 5
    tone(Buzzer, 559.15);
    delay(250);

    // 6
    tone(Buzzer, 665.28);
    delay(250);

    // 7
    tone(Buzzer, 627.79);
    delay(1000);
}

void parte5()
{
    // 1
    tone(Buzzer, 313.90);
    delay(250);

    // 2
    tone(Buzzer, 419.00);
    delay(250);

    // 3
    tone(Buzzer, 559.15);
    delay(250);

    // 4
    tone(Buzzer, 528.00);
    delay(250);

    // 5
    tone(Buzzer, 470.40);
    delay(250);

    // 6
    tone(Buzzer, 419.00);
    delay(250);

    // 7
    tone(Buzzer, 470.40);
    delay(250);

    // 8
    tone(Buzzer, 528.00);
    delay(250);

    // 9
    tone(Buzzer, 470.40);
    delay(500);

    // 10
    tone(Buzzer, 313.90);
    delay(500);

    // 11
    tone(Buzzer, 313.90);
    delay(250);

    // 12
    tone(Buzzer, 352.40);
    delay(250);

    // 13
    tone(Buzzer, 373.30);
    delay(500);

    // 14
    tone(Buzzer, 498.40);
    delay(500);

    // 15
    tone(Buzzer, 627.79);
    delay(500);

    // 16
    tone(Buzzer, 592.42);
    delay(1500);
}

void parte6()
{
    // 1
    tone(Buzzer, 313.90);
    delay(250);

    // 2
    tone(Buzzer, 419.00);
    delay(250);

    // 3
    tone(Buzzer, 559.15);
    delay(250);

    // 4
    tone(Buzzer, 528.00);
    delay(250);

    // 5
    tone(Buzzer, 470.40);
    delay(250);

    // 6
    tone(Buzzer, 419.00);
    delay(250);

    // 7
    tone(Buzzer, 470.40);
    delay(250);

    // 8
    tone(Buzzer, 528.00);
    delay(250);

    // 9
    tone(Buzzer, 470.40);
    delay(500);

    // 10
    tone(Buzzer, 313.90);
    delay(500);

    // 11
    tone(Buzzer, 313.90);
    delay(250);

    // 12
    tone(Buzzer, 352.40);
    delay(250);

    // 13
    tone(Buzzer, 373.30);
    delay(500);

    // 14
    tone(Buzzer, 352.40);
    delay(500);

    // 15
    tone(Buzzer, 279.60);
    delay(500);

    // 16
    tone(Buzzer, 313.90);
    delay(1500);
}

void loop()
{
    if (digitalRead(BOTAO) == LOW)
    {
        for (int i = 0; i < 2; i++)
        {
            parte1();
            parte2();
            parte1();
            parte3();
        }

        parte4();
        parte4_2();
        parte5();
        parte4();
        parte4_2();
        parte6();
    }
    else
    {
        noTone(Buzzer);
    }
}