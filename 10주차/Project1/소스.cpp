#include <stdio.h>

int main(void)
{
    int input;
    int i, j;
    int pn;
    int count = 0;

    printf("input positive number : ");

    scanf_s("%d", &input);      //  ���� �Է�


    for (i = 2; i <= input; i++)
    {
        pn = 1;
        for (j = 2; j < i; j++)
        {
            if ((i % j) == 0)       //  �Ҽ� �Ǻ�
            {
                pn = 0;
            }

        }

        if (pn == 0)        //      �Ҽ��� �ƴ� ��� �� �ڸ��� X ���
        {
            printf("%5c", 'X');
            count++;
        }

        if (pn == 1)        //      �Ҽ��� ��� ���� ���
        {
            printf("%5d", i);
            count++;
        }

        if ((count % 5) == 0)       //  count�� 5�� �� ��� ����
        {
            printf("\n");
        }
    }

    return 0;
}
