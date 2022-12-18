#define stabil 100    //  하드웨어 안정 딜레이 부여
#define maxhumid 870  //  최대 습도 측정값
#define minhumid 0    //  최소 습도 측정값
#define maxsolar 169  //  최대 빛 측정값
#define minsolar 1    //  최소 빛 측정값

int humidSensor = 0;  //  핀 번호 지정
int solarSensor = 0;
int botton = 6;
int autoswitch = 7;

int lightwarning = 2;
int headlight = 3;
int lightwarning2 = 4;
int allert = 5;

int i;

void setup()         //  입출력 모드 설정
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
    solarSensor = analogRead(A0);			//  빛 감지 센서 세팅
    Serial.println(solarSensor);
    humidSensor = analogRead(A1);           //  습도 감지 센서 세팅
    Serial.println(humidSensor);

    if (digitalRead(autoswitch) == HIGH)            // AUTO모드 비활성화 상태
    {
        if (digitalRead(botton) == HIGH)			//  버튼 누르면 헤드라이트 점등
        {
            digitalWrite(headlight, HIGH);
            Serial.print("headlight:ON\n");
        }
        else
        {
            digitalWrite(headlight, LOW);		//  떼면 헤드라이트 소등
        }


        if (solarSensor < (maxsolar / 2))		//  한낮 밝기의 절반이 되고
        {
            if (digitalRead(botton) == LOW)			//  헤드라이트가 꺼져있으면
            {
                digitalWrite(lightwarning, HIGH);
                Serial.print("lightwarning:ON\n");	//  경고음, 계기판 경고등      
                tone(allert, 196, 100);
                delay(500);
                digitalWrite(lightwarning, LOW);
                Serial.print("lightwarning:OFF\n");
                tone(allert, 164, 100);
                delay(100);
            }
            else									// 밖이 충분히 밝다면
            {
                digitalWrite(lightwarning, LOW);		//  경고음, 계기판 경고등 작동x
                noTone(allert);
            }
        }
    }
    else
    {
        noTone(allert);                         //  AUTO모드 활성화 상태
        digitalWrite(lightwarning, LOW);
        Serial.print("lightwarning:OFF\n");

        if (solarSensor < (maxsolar / 2))       //  어두우면 자동으로 헤드라이트 점등
        {
            digitalWrite(headlight, HIGH);
            Serial.print("headlight:ON\n");
        }
        else
        {
            digitalWrite(headlight, LOW);       //  밝으면 헤드라이트 소등
            Serial.print("headlight:OFF\n");
        }
    }





    if (humidSensor > (maxhumid * 0.9))		//  안개 발생시 안개 경고등 점등
    {
        digitalWrite(lightwarning2, HIGH);
        Serial.print("lightwarning2:ON\n");
    }
    else
    {
        digitalWrite(lightwarning2, LOW);       //  안개 없으면 소등
        Serial.print("lightwarning2:OFF\n");
    }




    delay(stabil);      //  하드웨어 시스템 안정 딜레이 부여
}