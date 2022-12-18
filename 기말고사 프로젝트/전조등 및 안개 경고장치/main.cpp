#define stabil 100    //  �ϵ���� ���� ������ �ο�
#define maxhumid 870  //  �ִ� ���� ������
#define minhumid 0    //  �ּ� ���� ������
#define maxsolar 169  //  �ִ� �� ������
#define minsolar 1    //  �ּ� �� ������

int humidSensor = 0;  //  �� ��ȣ ����
int solarSensor = 0;
int botton = 6;
int autoswitch = 7;

int lightwarning = 2;
int headlight = 3;
int lightwarning2 = 4;
int allert = 5;

int i;

void setup()         //  ����� ��� ����
{
    Serial.begin(9600);

    pinMode(humidSensor, INPUT);
    pinMode(solarSensor, INPUT);
    pinMode(botton, INPUT);
    pinMode(autoswitch, INPUT);

    pinMode(lightwarning, OUTPUT);
    pinMode(headlight, OUTPUT);
    pinMode(lightwarning2, OUTPUT);
    pinMode(allert, OUTPUT);
}





void loop()
{
    Serial.print("Switch:ON\n");
    solarSensor = analogRead(A0);			//  �� ���� ���� ����
    Serial.println(solarSensor);
    humidSensor = analogRead(A1);           //  ���� ���� ���� ����
    Serial.println(humidSensor);

    if (digitalRead(autoswitch) == HIGH)            // AUTO��� ��Ȱ��ȭ ����
    {
        if (digitalRead(botton) == HIGH)			//  ��ư ������ ������Ʈ ����
        {
            digitalWrite(headlight, HIGH);
            Serial.print("headlight:ON\n");
        }
        else
        {
            digitalWrite(headlight, LOW);		//  ���� ������Ʈ �ҵ�
        }


        if (solarSensor < (maxsolar / 2))		//  �ѳ� ����� ������ �ǰ�
        {
            if (digitalRead(botton) == LOW)			//  ������Ʈ�� ����������
            {
                digitalWrite(lightwarning, HIGH);
                Serial.print("lightwarning:ON\n");	//  �����, ����� ����      
                tone(allert, 196, 100);
                delay(500);
                digitalWrite(lightwarning, LOW);
                Serial.print("lightwarning:OFF\n");
                tone(allert, 164, 100);
                delay(100);
            }
            else									// ���� ����� ��ٸ�
            {
                digitalWrite(lightwarning, LOW);		//  �����, ����� ���� �۵�x
                noTone(allert);
            }
        }
    }
    else
    {
        noTone(allert);                         //  AUTO��� Ȱ��ȭ ����
        digitalWrite(lightwarning, LOW);
        Serial.print("lightwarning:OFF\n");

        if (solarSensor < (maxsolar / 2))       //  ��ο�� �ڵ����� ������Ʈ ����
        {
            digitalWrite(headlight, HIGH);
            Serial.print("headlight:ON\n");
        }
        else
        {
            digitalWrite(headlight, LOW);       //  ������ ������Ʈ �ҵ�
            Serial.print("headlight:OFF\n");
        }
    }





    if (humidSensor > (maxhumid * 0.9))		//  �Ȱ� �߻��� �Ȱ� ���� ����
    {
        digitalWrite(lightwarning2, HIGH);
        Serial.print("lightwarning2:ON\n");
    }
    else
    {
        digitalWrite(lightwarning2, LOW);       //  �Ȱ� ������ �ҵ�
        Serial.print("lightwarning2:OFF\n");
    }




    delay(stabil);      //  �ϵ���� �ý��� ���� ������ �ο�
}