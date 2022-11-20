#include <stdio.h>

int main(void)
{
    int input;
    int i, j;
    int pn;
    int count = 0;

    printf("input positive number : ");

    scanf_s("%d", &input);      //  숫자 입력


    for (i = 2; i <= input; i++)
    {
        pn = 1;
        for (j = 2; j < i; j++)
        {
            if ((i % j) == 0)       //  소수 판별
            {
                pn = 0;
            }

        }

        if (pn == 0)        //      소수가 아닌 경우 그 자리에 X 출력
        {
            printf("%5c", 'X');
            count++;
        }

        if (pn == 1)        //      소수인 경우 숫자 출력
        {
            printf("%5d", i);
            count++;
        }

        if ((count % 5) == 0)       //  count가 5가 될 경우 엔터
        {
            printf("\n");
        }
    }

    return 0;
}
