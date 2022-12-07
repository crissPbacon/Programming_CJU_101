#include <Servo.h>
#define maxsignal 1023
#define minsignal 0
#define maxangle 75
#define minangle 0

int ledR2 = 2;      // 변수지정
int ledR3 = 3;
int ledR4 = 4;
int ledR5 = 5;
int ledR6 = 6;
int servo = 7;
int knob = A0;

Servo myServo;

void setup()
{
    pinMode(ledR2, OUTPUT);     //  셋업
    pinMode(ledR3, OUTPUT);
    pinMode(ledR4, OUTPUT);
    pinMode(ledR5, OUTPUT);
    pinMode(ledR6, OUTPUT);
    pinMode(servo, OUTPUT);

    myServo.attach(servo);
    Serial.begin(9600);
}

void loop()
{
    int knobservo = analogRead(knob);
    int pwm = map(knobservo, minsignal, maxsignal, minangle, maxangle);     // map함수

    Serial.print("ServoAnalog:");
    Serial.println(knobservo);
    Serial.print("ServoPWM:");
    Serial.println(pwm);
    Serial.print("\n");

    myServo.write(pwm);


    if (pwm == 0)
    {
        digitalWrite(ledR2, LOW);       //  노브 위치 0
        Serial.print("ledR2:OFF\n");
        digitalWrite(ledR3, LOW);
        Serial.print("ledR3:OFF\n");
        digitalWrite(ledR4, LOW);
        Serial.print("ledR4:OFF\n");
        digitalWrite(ledR5, LOW);
        Serial.print("ledR5:OFF\n");
        digitalWrite(ledR6, LOW);
        Serial.print("ledR6:OFF\n");
    }

    else if (pwm < 15)
    {
        digitalWrite(ledR2, HIGH);      //  서보 각도 15
        Serial.print("ledR2:ON\n");
        digitalWrite(ledR3, LOW);
        Serial.print("ledR3:OFF\n");
        digitalWrite(ledR4, LOW);
        Serial.print("ledR4:OFF\n");
        digitalWrite(ledR5, LOW);
        Serial.print("ledR5:OFF\n");
        digitalWrite(ledR6, LOW);
        Serial.print("ledR6:OFF\n");;
    }

    else if (pwm > 15 && pwm < 30)
    {
        digitalWrite(ledR2, HIGH);      //  서보 각도 15 ~ 30
        Serial.print("ledR2:ON\n");
        digitalWrite(ledR3, HIGH);
        Serial.print("ledR3:ON\n");
        digitalWrite(ledR4, LOW);
        Serial.print("ledR4:OFF\n");
        digitalWrite(ledR5, LOW);
        Serial.print("ledR5:OFF\n");
        digitalWrite(ledR6, LOW);
        Serial.print("ledR6:OFF\n");
    }

    else if (pwm > 30 && pwm < 45)
    {
        digitalWrite(ledR2, HIGH);      //  서보 각도 30~45
        Serial.print("ledR2:ON\n");
        digitalWrite(ledR3, HIGH);
        Serial.print("ledR3:ON\n");
        digitalWrite(ledR4, HIGH);
        Serial.print("ledR4:ON\n");
        digitalWrite(ledR5, LOW);
        Serial.print("ledR5:OFF\n");
        digitalWrite(ledR6, LOW);
        Serial.print("ledR6:OFF\n");
    }

    else if (pwm > 45 && pwm < 60)
    {
        digitalWrite(ledR2, HIGH);      //  서보 각도 45~60
        Serial.print("ledR2:ON\n");
        digitalWrite(ledR3, HIGH);
        Serial.print("ledR3:ON\n");
        digitalWrite(ledR4, HIGH);
        Serial.print("ledR4:ON\n");
        digitalWrite(ledR5, HIGH);
        Serial.print("ledR5:ON\n");
        digitalWrite(ledR6, LOW);
        Serial.print("ledR6:OFF\n");
    }

    else if (pwm > 60 && pwm < maxangle)
    {
        digitalWrite(ledR2, HIGH);      //  서보 각도 60~max
        Serial.print("ledR2:ON\n");
        digitalWrite(ledR3, HIGH);
        Serial.print("ledR3:ON\n");
        digitalWrite(ledR4, HIGH);
        Serial.print("ledR4:ON\n");
        digitalWrite(ledR5, HIGH);
        Serial.print("ledR5:ON\n");
        digitalWrite(ledR6, HIGH);
        Serial.print("ledR6:ON\n");
    }

delay(20);
}

