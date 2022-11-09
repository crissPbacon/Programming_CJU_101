#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char input1[20];
	char input2[20];
	char input3[20];
	char k[20];

	printf("\n단어입력 : ");
	scanf_s("%s", input1, (int)sizeof input1);
	printf("\n단어입력 : ");
	scanf_s("%s", input2, (int)sizeof input2);
	printf("\n단어입력 : ");
	scanf_s("%s", input3, (int)sizeof input3);

	printf("\n기존 정렬\t:\t%s, %s, %s\n", input1, input2, input3);

	if (strcmp (input1, input2) > 0)
	{
		strcpy_s(k, input1);
		strcpy_s(input1, input2);
		strcpy_s(input2, k);
	}
	if (strcmp (input1, input3) > 0)
	{
		strcpy_s(k, input1);
		strcpy_s(input1, input3);
		strcpy_s(input3, k);
	}
	if (strcmp (input2, input3) > 0)
	{
		strcpy_s(k, input2);
		strcpy_s(input2, input3);
		strcpy_s(input3, k);
	}

	printf("알파벳 순 정렬\t:\t%s, %s, %s\n", input1, input2, input3);

	return 0;
}