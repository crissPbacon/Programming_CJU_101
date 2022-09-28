#include<stdio.h>

int main(void)
{
	int A = 0;
	int B = 0;
	char simbol;

	printf("caculater \n +is plus, -is minus, *is muntiply, /is divide \n input numbers...");
	scanf_s("%d %c %d", &A, &simbol, 1, &B);

	

	switch (simbol)
	{
	case'+':
	{
		int res = A + B;
		printf("plus \n");
		printf("%d %c %d = %d \n", A, simbol, B, res);
		break;
	}

	case'-':
	{
		int res = A - B;
		printf("minus \n");
		printf("%d %c %d = %d \n", A, simbol, B, res);
		break;
	}

	case'*':
	{
		int res = A * B;
		printf("multi \n");
		printf("%d %c %d = %d \n", A, simbol, B, res);
		break;
	}

	case'/':
	{
		int res = A / B;
		printf("divid \n");
		printf("%d %c %d = %d \n", A, simbol, B, res);
		break;
	}


	}
	

	return 0;
}